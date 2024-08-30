// ======================================================================
// \title  ActiveStateMachinesComponentAc.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for ActiveStateMachines component base class
// ======================================================================

#include "Fw/Types/Assert.hpp"
#include "Fw/Types/ExternalString.hpp"
#if FW_ENABLE_TEXT_LOGGING
#include "Fw/Types/String.hpp"
#endif
#include "base/ActiveStateMachinesComponentAc.hpp"

namespace M {

  namespace {
    enum MsgTypeEnum {
      ACTIVESTATEMACHINES_COMPONENT_EXIT = Fw::ActiveComponentBase::ACTIVE_COMPONENT_EXIT,
      STATEMACHINE_SENDSIGNALS,
    };

    // Get the max size by constructing a union of the async input, command, and
    // internal port serialization sizes
    union BuffUnion {
      // Size of statemachine sendSignals
      BYTE sendSignalsStatemachineSize[
        Fw::SMSignals::SERIALIZED_SIZE
      ];
    };

    // Define a message buffer class large enough to handle all the
    // asynchronous inputs to the component
    class ComponentIpcSerializableBuffer :
      public Fw::SerializeBufferBase
    {

      public:

        enum {
          // Max. message size = size of data + message id + port
          SERIALIZATION_SIZE =
            sizeof(BuffUnion) +
            sizeof(FwEnumStoreType) +
            sizeof(FwIndexType)
        };

        Fw::Serializable::SizeType getBuffCapacity() const {
          return sizeof(m_buff);
        }

        U8* getBuffAddr() {
          return m_buff;
        }

        const U8* getBuffAddr() const {
          return m_buff;
        }

      private:
        // Should be the max of all the input ports serialized sizes...
        U8 m_buff[SERIALIZATION_SIZE];

    };
  }

  // ----------------------------------------------------------------------
  // Component initialization
  // ----------------------------------------------------------------------

  void ActiveStateMachinesComponentBase ::
    init(
        FwQueueSizeType queueDepth,
        FwEnumStoreType instance
    )
  {
    // Initialize base class
    Fw::ActiveComponentBase::init(instance);

    m_stateMachine_sm1.init(STATE_MACHINE_SM1);
    m_stateMachine_sm2.init(STATE_MACHINE_SM2);
    m_stateMachine_sm3.init(STATE_MACHINE_SM3);
    m_stateMachine_sm4.init(STATE_MACHINE_SM4);
    m_stateMachine_sm5.init(STATE_MACHINE_SM5);
    m_stateMachine_sm6.init(STATE_MACHINE_SM6);

    Os::Queue::QueueStatus qStat = this->createQueue(
      queueDepth,
      ComponentIpcSerializableBuffer::SERIALIZATION_SIZE
    );
    FW_ASSERT(
      Os::Queue::QUEUE_OK == qStat,
      static_cast<FwAssertArgType>(qStat)
    );
  }

  // ----------------------------------------------------------------------
  // Component construction and destruction
  // ----------------------------------------------------------------------

  ActiveStateMachinesComponentBase ::
    ActiveStateMachinesComponentBase(const char* compName) :
      Fw::ActiveComponentBase(compName),
      m_stateMachine_sm1(this),
      m_stateMachine_sm2(this),
      m_stateMachine_sm3(this),
      m_stateMachine_sm4(this),
      m_stateMachine_sm5(this),
      m_stateMachine_sm6(this)
  {

  }

  ActiveStateMachinesComponentBase ::
    ~ActiveStateMachinesComponentBase()
  {

  }

  // ----------------------------------------------------------------------
  // State machine function to push signals to the input queue
  // ----------------------------------------------------------------------

  void ActiveStateMachinesComponentBase ::
    sm1_stateMachineInvoke(
        const M::ActiveStateMachines_S1_Interface::ActiveStateMachines_S1_Signals signal,
        const Fw::SMSignalBuffer& data
    )
  {

    ComponentIpcSerializableBuffer msg;
    Fw::SerializeStatus _status = Fw::FW_SERIALIZE_OK;

    // Serialize the message ID
    _status = msg.serialize(static_cast<FwEnumStoreType>(STATEMACHINE_SENDSIGNALS));
    FW_ASSERT (
      _status == Fw::FW_SERIALIZE_OK,
      static_cast<FwAssertArgType>(_status)
    );

    // Fake port number to make message dequeue work
    _status = msg.serialize(static_cast<FwIndexType>(0));
    FW_ASSERT (
      _status == Fw::FW_SERIALIZE_OK,
      static_cast<FwAssertArgType>(_status)
    );

    _status = msg.serialize(static_cast<FwEnumStoreType>(STATE_MACHINE_SM1));
    FW_ASSERT(
      _status == Fw::FW_SERIALIZE_OK,
      static_cast<FwAssertArgType>(_status)
    );

    _status = msg.serialize(static_cast<FwEnumStoreType>(signal));
    FW_ASSERT(
      _status == Fw::FW_SERIALIZE_OK,
      static_cast<FwAssertArgType>(_status)
    );

    _status = msg.serialize(data);
    FW_ASSERT(
      _status == Fw::FW_SERIALIZE_OK,
      static_cast<FwAssertArgType>(_status)
    );

    // Send message
    Os::Queue::QueueBlocking _block = Os::Queue::QUEUE_BLOCKING;
    Os::Queue::QueueStatus qStatus = this->m_queue.send(msg, 1, _block);

    FW_ASSERT(
      qStatus == Os::Queue::QUEUE_OK,
      static_cast<FwAssertArgType>(qStatus)
    );
  }

  void ActiveStateMachinesComponentBase ::
    sm2_stateMachineInvoke(
        const M::ActiveStateMachines_S1_Interface::ActiveStateMachines_S1_Signals signal,
        const Fw::SMSignalBuffer& data
    )
  {

    ComponentIpcSerializableBuffer msg;
    Fw::SerializeStatus _status = Fw::FW_SERIALIZE_OK;

    // Serialize the message ID
    _status = msg.serialize(static_cast<FwEnumStoreType>(STATEMACHINE_SENDSIGNALS));
    FW_ASSERT (
      _status == Fw::FW_SERIALIZE_OK,
      static_cast<FwAssertArgType>(_status)
    );

    // Fake port number to make message dequeue work
    _status = msg.serialize(static_cast<FwIndexType>(0));
    FW_ASSERT (
      _status == Fw::FW_SERIALIZE_OK,
      static_cast<FwAssertArgType>(_status)
    );

    _status = msg.serialize(static_cast<FwEnumStoreType>(STATE_MACHINE_SM2));
    FW_ASSERT(
      _status == Fw::FW_SERIALIZE_OK,
      static_cast<FwAssertArgType>(_status)
    );

    _status = msg.serialize(static_cast<FwEnumStoreType>(signal));
    FW_ASSERT(
      _status == Fw::FW_SERIALIZE_OK,
      static_cast<FwAssertArgType>(_status)
    );

    _status = msg.serialize(data);
    FW_ASSERT(
      _status == Fw::FW_SERIALIZE_OK,
      static_cast<FwAssertArgType>(_status)
    );

    // Send message
    Os::Queue::QueueBlocking _block = Os::Queue::QUEUE_NONBLOCKING;
    Os::Queue::QueueStatus qStatus = this->m_queue.send(msg, 2, _block);

    FW_ASSERT(
      qStatus == Os::Queue::QUEUE_OK,
      static_cast<FwAssertArgType>(qStatus)
    );
  }

  void ActiveStateMachinesComponentBase ::
    sm3_stateMachineInvoke(
        const M::ActiveStateMachines_S2_Interface::ActiveStateMachines_S2_Signals signal,
        const Fw::SMSignalBuffer& data
    )
  {

    ComponentIpcSerializableBuffer msg;
    Fw::SerializeStatus _status = Fw::FW_SERIALIZE_OK;

    // Serialize the message ID
    _status = msg.serialize(static_cast<FwEnumStoreType>(STATEMACHINE_SENDSIGNALS));
    FW_ASSERT (
      _status == Fw::FW_SERIALIZE_OK,
      static_cast<FwAssertArgType>(_status)
    );

    // Fake port number to make message dequeue work
    _status = msg.serialize(static_cast<FwIndexType>(0));
    FW_ASSERT (
      _status == Fw::FW_SERIALIZE_OK,
      static_cast<FwAssertArgType>(_status)
    );

    _status = msg.serialize(static_cast<FwEnumStoreType>(STATE_MACHINE_SM3));
    FW_ASSERT(
      _status == Fw::FW_SERIALIZE_OK,
      static_cast<FwAssertArgType>(_status)
    );

    _status = msg.serialize(static_cast<FwEnumStoreType>(signal));
    FW_ASSERT(
      _status == Fw::FW_SERIALIZE_OK,
      static_cast<FwAssertArgType>(_status)
    );

    _status = msg.serialize(data);
    FW_ASSERT(
      _status == Fw::FW_SERIALIZE_OK,
      static_cast<FwAssertArgType>(_status)
    );

    // Send message
    Os::Queue::QueueBlocking _block = Os::Queue::QUEUE_NONBLOCKING;
    Os::Queue::QueueStatus qStatus = this->m_queue.send(msg, 3, _block);

    if (qStatus == Os::Queue::QUEUE_FULL) {
      this->incNumMsgDropped();
      return;
    }

    FW_ASSERT(
      qStatus == Os::Queue::QUEUE_OK,
      static_cast<FwAssertArgType>(qStatus)
    );
  }

  void ActiveStateMachinesComponentBase ::
    sm4_stateMachineInvoke(
        const M::ActiveStateMachines_S2_Interface::ActiveStateMachines_S2_Signals signal,
        const Fw::SMSignalBuffer& data
    )
  {

    ComponentIpcSerializableBuffer msg;
    Fw::SerializeStatus _status = Fw::FW_SERIALIZE_OK;

    // Serialize the message ID
    _status = msg.serialize(static_cast<FwEnumStoreType>(STATEMACHINE_SENDSIGNALS));
    FW_ASSERT (
      _status == Fw::FW_SERIALIZE_OK,
      static_cast<FwAssertArgType>(_status)
    );

    // Fake port number to make message dequeue work
    _status = msg.serialize(static_cast<FwIndexType>(0));
    FW_ASSERT (
      _status == Fw::FW_SERIALIZE_OK,
      static_cast<FwAssertArgType>(_status)
    );

    _status = msg.serialize(static_cast<FwEnumStoreType>(STATE_MACHINE_SM4));
    FW_ASSERT(
      _status == Fw::FW_SERIALIZE_OK,
      static_cast<FwAssertArgType>(_status)
    );

    _status = msg.serialize(static_cast<FwEnumStoreType>(signal));
    FW_ASSERT(
      _status == Fw::FW_SERIALIZE_OK,
      static_cast<FwAssertArgType>(_status)
    );

    _status = msg.serialize(data);
    FW_ASSERT(
      _status == Fw::FW_SERIALIZE_OK,
      static_cast<FwAssertArgType>(_status)
    );

    // Send message
    Os::Queue::QueueBlocking _block = Os::Queue::QUEUE_NONBLOCKING;
    Os::Queue::QueueStatus qStatus = this->m_queue.send(msg, 4, _block);

    FW_ASSERT(
      qStatus == Os::Queue::QUEUE_OK,
      static_cast<FwAssertArgType>(qStatus)
    );
  }

  void ActiveStateMachinesComponentBase ::
    sm5_stateMachineInvoke(
        const M::ActiveStateMachines_S2_Interface::ActiveStateMachines_S2_Signals signal,
        const Fw::SMSignalBuffer& data
    )
  {

    ComponentIpcSerializableBuffer msg;
    Fw::SerializeStatus _status = Fw::FW_SERIALIZE_OK;

    // Serialize the message ID
    _status = msg.serialize(static_cast<FwEnumStoreType>(STATEMACHINE_SENDSIGNALS));
    FW_ASSERT (
      _status == Fw::FW_SERIALIZE_OK,
      static_cast<FwAssertArgType>(_status)
    );

    // Fake port number to make message dequeue work
    _status = msg.serialize(static_cast<FwIndexType>(0));
    FW_ASSERT (
      _status == Fw::FW_SERIALIZE_OK,
      static_cast<FwAssertArgType>(_status)
    );

    _status = msg.serialize(static_cast<FwEnumStoreType>(STATE_MACHINE_SM5));
    FW_ASSERT(
      _status == Fw::FW_SERIALIZE_OK,
      static_cast<FwAssertArgType>(_status)
    );

    _status = msg.serialize(static_cast<FwEnumStoreType>(signal));
    FW_ASSERT(
      _status == Fw::FW_SERIALIZE_OK,
      static_cast<FwAssertArgType>(_status)
    );

    _status = msg.serialize(data);
    FW_ASSERT(
      _status == Fw::FW_SERIALIZE_OK,
      static_cast<FwAssertArgType>(_status)
    );

    // Send message
    Os::Queue::QueueBlocking _block = Os::Queue::QUEUE_NONBLOCKING;
    Os::Queue::QueueStatus qStatus = this->m_queue.send(msg, 0, _block);

    if (qStatus == Os::Queue::QUEUE_FULL) {
      this->sm5_stateMachineOverflowHook(signal, data);
      return;
    }

    FW_ASSERT(
      qStatus == Os::Queue::QUEUE_OK,
      static_cast<FwAssertArgType>(qStatus)
    );
  }

  void ActiveStateMachinesComponentBase ::
    sm6_stateMachineInvoke(
        const M::ActiveStateMachines_S2_Interface::ActiveStateMachines_S2_Signals signal,
        const Fw::SMSignalBuffer& data
    )
  {

    ComponentIpcSerializableBuffer msg;
    Fw::SerializeStatus _status = Fw::FW_SERIALIZE_OK;

    // Serialize the message ID
    _status = msg.serialize(static_cast<FwEnumStoreType>(STATEMACHINE_SENDSIGNALS));
    FW_ASSERT (
      _status == Fw::FW_SERIALIZE_OK,
      static_cast<FwAssertArgType>(_status)
    );

    // Fake port number to make message dequeue work
    _status = msg.serialize(static_cast<FwIndexType>(0));
    FW_ASSERT (
      _status == Fw::FW_SERIALIZE_OK,
      static_cast<FwAssertArgType>(_status)
    );

    _status = msg.serialize(static_cast<FwEnumStoreType>(STATE_MACHINE_SM6));
    FW_ASSERT(
      _status == Fw::FW_SERIALIZE_OK,
      static_cast<FwAssertArgType>(_status)
    );

    _status = msg.serialize(static_cast<FwEnumStoreType>(signal));
    FW_ASSERT(
      _status == Fw::FW_SERIALIZE_OK,
      static_cast<FwAssertArgType>(_status)
    );

    _status = msg.serialize(data);
    FW_ASSERT(
      _status == Fw::FW_SERIALIZE_OK,
      static_cast<FwAssertArgType>(_status)
    );

    // Send message
    Os::Queue::QueueBlocking _block = Os::Queue::QUEUE_NONBLOCKING;
    Os::Queue::QueueStatus qStatus = this->m_queue.send(msg, 0, _block);

    FW_ASSERT(
      qStatus == Os::Queue::QUEUE_OK,
      static_cast<FwAssertArgType>(qStatus)
    );
  }

  // ----------------------------------------------------------------------
  // Message dispatch functions
  // ----------------------------------------------------------------------

  Fw::QueuedComponentBase::MsgDispatchStatus ActiveStateMachinesComponentBase ::
    doDispatch()
  {
    ComponentIpcSerializableBuffer msg;
    FwQueuePriorityType priority = 0;

    Os::Queue::QueueStatus msgStatus = this->m_queue.receive(
      msg,
      priority,
      Os::Queue::QUEUE_BLOCKING
    );
    FW_ASSERT(
      msgStatus == Os::Queue::QUEUE_OK,
      static_cast<FwAssertArgType>(msgStatus)
    );

    // Reset to beginning of buffer
    msg.resetDeser();

    FwEnumStoreType desMsg = 0;
    Fw::SerializeStatus deserStatus = msg.deserialize(desMsg);
    FW_ASSERT(
      deserStatus == Fw::FW_SERIALIZE_OK,
      static_cast<FwAssertArgType>(deserStatus)
    );

    MsgTypeEnum msgType = static_cast<MsgTypeEnum>(desMsg);

    if (msgType == ACTIVESTATEMACHINES_COMPONENT_EXIT) {
      return MSG_DISPATCH_EXIT;
    }

    FwIndexType portNum = 0;
    deserStatus = msg.deserialize(portNum);
    FW_ASSERT(
      deserStatus == Fw::FW_SERIALIZE_OK,
      static_cast<FwAssertArgType>(deserStatus)
    );

    switch (msgType) {

      // Handle state machine signals 
      case STATEMACHINE_SENDSIGNALS: {

         FwEnumStoreType desMsg = 0;
         Fw::SerializeStatus deserStatus = msg.deserialize(desMsg);
         FW_ASSERT(
           deserStatus == Fw::FW_SERIALIZE_OK,
           static_cast<FwAssertArgType>(deserStatus)
         );
         SmId stateMachineId = static_cast<SmId>(desMsg);
        switch (stateMachineId) {
          case STATE_MACHINE_SM1: {
             // Deserialize the state machine signal
             FwEnumStoreType desMsg = 0;
             Fw::SerializeStatus deserStatus = msg.deserialize(desMsg);
             FW_ASSERT(
               deserStatus == Fw::FW_SERIALIZE_OK,
               static_cast<FwAssertArgType>(deserStatus)
             );
             M::ActiveStateMachines_S1_Interface::ActiveStateMachines_S1_Signals signal = static_cast<M::ActiveStateMachines_S1_Interface::ActiveStateMachines_S1_Signals>(desMsg);

             // Deserialize the state machine data
             Fw::SMSignalBuffer data;
             deserStatus = msg.deserialize(data);
             FW_ASSERT(
               Fw::FW_SERIALIZE_OK == deserStatus,
               static_cast<FwAssertArgType>(deserStatus)
             );

             // Make sure there was no data left over.
             // That means the buffer size was incorrect.
             FW_ASSERT(
               msg.getBuffLeft() == 0,
               static_cast<FwAssertArgType>(msg.getBuffLeft())
             );

             this->m_stateMachine_sm1.update(stateMachineId, signal, data);
             break;
          }
                    
          case STATE_MACHINE_SM2: {
             // Deserialize the state machine signal
             FwEnumStoreType desMsg = 0;
             Fw::SerializeStatus deserStatus = msg.deserialize(desMsg);
             FW_ASSERT(
               deserStatus == Fw::FW_SERIALIZE_OK,
               static_cast<FwAssertArgType>(deserStatus)
             );
             M::ActiveStateMachines_S1_Interface::ActiveStateMachines_S1_Signals signal = static_cast<M::ActiveStateMachines_S1_Interface::ActiveStateMachines_S1_Signals>(desMsg);

             // Deserialize the state machine data
             Fw::SMSignalBuffer data;
             deserStatus = msg.deserialize(data);
             FW_ASSERT(
               Fw::FW_SERIALIZE_OK == deserStatus,
               static_cast<FwAssertArgType>(deserStatus)
             );

             // Make sure there was no data left over.
             // That means the buffer size was incorrect.
             FW_ASSERT(
               msg.getBuffLeft() == 0,
               static_cast<FwAssertArgType>(msg.getBuffLeft())
             );

             this->m_stateMachine_sm2.update(stateMachineId, signal, data);
             break;
          }
                    
          case STATE_MACHINE_SM3: {
             // Deserialize the state machine signal
             FwEnumStoreType desMsg = 0;
             Fw::SerializeStatus deserStatus = msg.deserialize(desMsg);
             FW_ASSERT(
               deserStatus == Fw::FW_SERIALIZE_OK,
               static_cast<FwAssertArgType>(deserStatus)
             );
             M::ActiveStateMachines_S2_Interface::ActiveStateMachines_S2_Signals signal = static_cast<M::ActiveStateMachines_S2_Interface::ActiveStateMachines_S2_Signals>(desMsg);

             // Deserialize the state machine data
             Fw::SMSignalBuffer data;
             deserStatus = msg.deserialize(data);
             FW_ASSERT(
               Fw::FW_SERIALIZE_OK == deserStatus,
               static_cast<FwAssertArgType>(deserStatus)
             );

             // Make sure there was no data left over.
             // That means the buffer size was incorrect.
             FW_ASSERT(
               msg.getBuffLeft() == 0,
               static_cast<FwAssertArgType>(msg.getBuffLeft())
             );

             this->m_stateMachine_sm3.update(stateMachineId, signal, data);
             break;
          }
                    
          case STATE_MACHINE_SM4: {
             // Deserialize the state machine signal
             FwEnumStoreType desMsg = 0;
             Fw::SerializeStatus deserStatus = msg.deserialize(desMsg);
             FW_ASSERT(
               deserStatus == Fw::FW_SERIALIZE_OK,
               static_cast<FwAssertArgType>(deserStatus)
             );
             M::ActiveStateMachines_S2_Interface::ActiveStateMachines_S2_Signals signal = static_cast<M::ActiveStateMachines_S2_Interface::ActiveStateMachines_S2_Signals>(desMsg);

             // Deserialize the state machine data
             Fw::SMSignalBuffer data;
             deserStatus = msg.deserialize(data);
             FW_ASSERT(
               Fw::FW_SERIALIZE_OK == deserStatus,
               static_cast<FwAssertArgType>(deserStatus)
             );

             // Make sure there was no data left over.
             // That means the buffer size was incorrect.
             FW_ASSERT(
               msg.getBuffLeft() == 0,
               static_cast<FwAssertArgType>(msg.getBuffLeft())
             );

             this->m_stateMachine_sm4.update(stateMachineId, signal, data);
             break;
          }
                    
          case STATE_MACHINE_SM5: {
             // Deserialize the state machine signal
             FwEnumStoreType desMsg = 0;
             Fw::SerializeStatus deserStatus = msg.deserialize(desMsg);
             FW_ASSERT(
               deserStatus == Fw::FW_SERIALIZE_OK,
               static_cast<FwAssertArgType>(deserStatus)
             );
             M::ActiveStateMachines_S2_Interface::ActiveStateMachines_S2_Signals signal = static_cast<M::ActiveStateMachines_S2_Interface::ActiveStateMachines_S2_Signals>(desMsg);

             // Deserialize the state machine data
             Fw::SMSignalBuffer data;
             deserStatus = msg.deserialize(data);
             FW_ASSERT(
               Fw::FW_SERIALIZE_OK == deserStatus,
               static_cast<FwAssertArgType>(deserStatus)
             );

             // Make sure there was no data left over.
             // That means the buffer size was incorrect.
             FW_ASSERT(
               msg.getBuffLeft() == 0,
               static_cast<FwAssertArgType>(msg.getBuffLeft())
             );

             this->m_stateMachine_sm5.update(stateMachineId, signal, data);
             break;
          }
                    
          case STATE_MACHINE_SM6: {
             // Deserialize the state machine signal
             FwEnumStoreType desMsg = 0;
             Fw::SerializeStatus deserStatus = msg.deserialize(desMsg);
             FW_ASSERT(
               deserStatus == Fw::FW_SERIALIZE_OK,
               static_cast<FwAssertArgType>(deserStatus)
             );
             M::ActiveStateMachines_S2_Interface::ActiveStateMachines_S2_Signals signal = static_cast<M::ActiveStateMachines_S2_Interface::ActiveStateMachines_S2_Signals>(desMsg);

             // Deserialize the state machine data
             Fw::SMSignalBuffer data;
             deserStatus = msg.deserialize(data);
             FW_ASSERT(
               Fw::FW_SERIALIZE_OK == deserStatus,
               static_cast<FwAssertArgType>(deserStatus)
             );

             // Make sure there was no data left over.
             // That means the buffer size was incorrect.
             FW_ASSERT(
               msg.getBuffLeft() == 0,
               static_cast<FwAssertArgType>(msg.getBuffLeft())
             );

             this->m_stateMachine_sm6.update(stateMachineId, signal, data);
             break;
          }
                    
        }

        break;
      }

      default:
        return MSG_DISPATCH_ERROR;
    }

    return MSG_DISPATCH_OK;
  }

}
