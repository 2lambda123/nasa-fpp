// ======================================================================
// \title  ActiveStateMachinesComponentAc.hpp
// \author Generated by fpp-to-cpp
// \brief  hpp file for ActiveStateMachines component base class
// ======================================================================

#ifndef M_ActiveStateMachinesComponentAc_HPP
#define M_ActiveStateMachinesComponentAc_HPP

#include "ActiveStateMachines_S1.hpp"
#include "ActiveStateMachines_S2.hpp"
#include "FpConfig.hpp"
#include "Fw/Comp/ActiveComponentBase.hpp"
#include "Fw/Port/InputSerializePort.hpp"
#include "Fw/Port/OutputSerializePort.hpp"
#include "Fw/Types/SMSignalsSerializableAc.hpp"

namespace M {

  //! \class ActiveStateMachinesComponentBase
  //! \brief Auto-generated base for ActiveStateMachines component
  //!
  //! An active component with state machines
  class ActiveStateMachinesComponentBase :
    public Fw::ActiveComponentBase, public M::ActiveStateMachines_S1_Interface, public M::ActiveStateMachines_S2_Interface
  {

      // ----------------------------------------------------------------------
      // Friend classes
      // ----------------------------------------------------------------------

      //! Friend class for white-box testing
      friend class ActiveStateMachinesComponentBaseFriend;

    PROTECTED:

      // ----------------------------------------------------------------------
      // Constants
      // ----------------------------------------------------------------------

      //! State machine identifiers
      enum SmId {
        STATE_MACHINE_SM1,
        STATE_MACHINE_SM2,
        STATE_MACHINE_SM3,
        STATE_MACHINE_SM4,
        STATE_MACHINE_SM5,
        STATE_MACHINE_SM6,
      };

    public:

      // ----------------------------------------------------------------------
      // Component initialization
      // ----------------------------------------------------------------------

      //! Initialize ActiveStateMachinesComponentBase object
      void init(
          FwQueueSizeType queueDepth, //!< The queue depth
          FwEnumStoreType instance = 0 //!< The instance number
      );

    PROTECTED:

      // ----------------------------------------------------------------------
      // Component construction and destruction
      // ----------------------------------------------------------------------

      //! Construct ActiveStateMachinesComponentBase object
      ActiveStateMachinesComponentBase(
          const char* compName = "" //!< The component name
      );

      //! Destroy ActiveStateMachinesComponentBase object
      virtual ~ActiveStateMachinesComponentBase();

    PROTECTED:

      // ----------------------------------------------------------------------
      // Overflow hooks for state machine instances
      //
      // When sending a signal to a state machine instance, if
      // the queue overflows and the instance is marked with 'hook' behavior,
      // the corresponding function here is called.
      // ----------------------------------------------------------------------

      //! Overflow hook for state machine sm5
      virtual void sm5_stateMachineOverflowHook(
          const M::ActiveStateMachines_S2_Interface::ActiveStateMachines_S2_Signals signal, //!< The state machine signal
          const Fw::SMSignalBuffer& data //!< The state machine data
      ) = 0;

    PROTECTED:

      // ----------------------------------------------------------------------
      // State machine function to push signals to the input queue
      // ----------------------------------------------------------------------

      //! State machine base-class function for sendSignals
      void sm1_stateMachineInvoke(
          const M::ActiveStateMachines_S1_Interface::ActiveStateMachines_S1_Signals signal, //!< The state machine signal
          const Fw::SMSignalBuffer& data //!< The state machine data
      );

      //! State machine base-class function for sendSignals
      void sm2_stateMachineInvoke(
          const M::ActiveStateMachines_S1_Interface::ActiveStateMachines_S1_Signals signal, //!< The state machine signal
          const Fw::SMSignalBuffer& data //!< The state machine data
      );

      //! State machine base-class function for sendSignals
      void sm3_stateMachineInvoke(
          const M::ActiveStateMachines_S2_Interface::ActiveStateMachines_S2_Signals signal, //!< The state machine signal
          const Fw::SMSignalBuffer& data //!< The state machine data
      );

      //! State machine base-class function for sendSignals
      void sm4_stateMachineInvoke(
          const M::ActiveStateMachines_S2_Interface::ActiveStateMachines_S2_Signals signal, //!< The state machine signal
          const Fw::SMSignalBuffer& data //!< The state machine data
      );

      //! State machine base-class function for sendSignals
      void sm5_stateMachineInvoke(
          const M::ActiveStateMachines_S2_Interface::ActiveStateMachines_S2_Signals signal, //!< The state machine signal
          const Fw::SMSignalBuffer& data //!< The state machine data
      );

      //! State machine base-class function for sendSignals
      void sm6_stateMachineInvoke(
          const M::ActiveStateMachines_S2_Interface::ActiveStateMachines_S2_Signals signal, //!< The state machine signal
          const Fw::SMSignalBuffer& data //!< The state machine data
      );

    PRIVATE:

      // ----------------------------------------------------------------------
      // Message dispatch functions
      // ----------------------------------------------------------------------

      //! Called in the message loop to dispatch a message from the queue
      virtual MsgDispatchStatus doDispatch();

    PRIVATE:

      // ----------------------------------------------------------------------
      // State machine instances
      // ----------------------------------------------------------------------

      //! State machine sm1
      M::ActiveStateMachines_S1 m_stateMachine_sm1;

      //! State machine sm2
      M::ActiveStateMachines_S1 m_stateMachine_sm2;

      //! State machine sm3
      M::ActiveStateMachines_S2 m_stateMachine_sm3;

      //! State machine sm4
      M::ActiveStateMachines_S2 m_stateMachine_sm4;

      //! State machine sm5
      M::ActiveStateMachines_S2 m_stateMachine_sm5;

      //! State machine sm6
      M::ActiveStateMachines_S2 m_stateMachine_sm6;

  };

}

#endif
