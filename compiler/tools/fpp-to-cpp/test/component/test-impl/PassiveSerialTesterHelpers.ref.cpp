// ======================================================================
// \title  PassiveSerialTesterHelpers.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for PassiveSerial component test harness implementation class
// ======================================================================

#include "PassiveSerialTester.hpp"

// ----------------------------------------------------------------------
// Helper functions
// ----------------------------------------------------------------------

void PassiveSerialTester ::
  connectPorts()
{
  // Connect typed input ports

  this->connect_to_noArgsGuarded(
    0,
    this->component.get_noArgsGuarded_InputPort(0)
  );

  this->connect_to_noArgsReturnGuarded(
    0,
    this->component.get_noArgsReturnGuarded_InputPort(0)
  );

  for (NATIVE_UINT_TYPE i = 0; i < 3; i++) {
    this->connect_to_noArgsReturnSync(
      i,
      this->component.get_noArgsReturnSync_InputPort(i)
    );
  }

  for (NATIVE_UINT_TYPE i = 0; i < 3; i++) {
    this->connect_to_noArgsSync(
      i,
      this->component.get_noArgsSync_InputPort(i)
    );
  }

  this->connect_to_typedGuarded(
    0,
    this->component.get_typedGuarded_InputPort(0)
  );

  this->connect_to_typedReturnGuarded(
    0,
    this->component.get_typedReturnGuarded_InputPort(0)
  );

  for (NATIVE_UINT_TYPE i = 0; i < 3; i++) {
    this->connect_to_typedReturnSync(
      i,
      this->component.get_typedReturnSync_InputPort(i)
    );
  }

  for (NATIVE_UINT_TYPE i = 0; i < 3; i++) {
    this->connect_to_typedSync(
      i,
      this->component.get_typedSync_InputPort(i)
    );
  }

  // Connect typed output ports

  this->component.set_typedOut_OutputPort(
    0,
    this->get_from_typedOut(0)
  );

  this->component.set_typedReturnOut_OutputPort(
    0,
    this->get_from_typedReturnOut(0)
  );

  // Connect serial input ports

  this->connect_to_serialGuarded(
    0,
    this->component.get_serialGuarded_InputPort(0)
  );

  this->connect_to_serialSync(
    0,
    this->component.get_serialSync_InputPort(0)
  );

  // Connect serial output ports

  for (NATIVE_UINT_TYPE i = 0; i < 5; i++) {
    this->component.set_serialOut_OutputPort(
      i,
      this->get_from_serialOut(i)
    );
  }
}

void PassiveSerialTester ::
  initComponents()
{
  this->init();
  this->component.init(PassiveSerialTester::TEST_INSTANCE_ID);
}
