// ======================================================================
// \title  QueuedGetProductsTester.cpp
// \author [user name]
// \brief  cpp file for QueuedGetProducts component test harness implementation class
// ======================================================================

#include "QueuedGetProductsTester.hpp"

// ----------------------------------------------------------------------
// Construction and destruction
// ----------------------------------------------------------------------

QueuedGetProductsTester ::
  QueuedGetProductsTester() :
    QueuedGetProductsGTestBase("QueuedGetProductsTester", QueuedGetProductsTester::MAX_HISTORY_SIZE),
    component("QueuedGetProducts")
{
  this->initComponents();
  this->connectPorts();
}

QueuedGetProductsTester ::
  ~QueuedGetProductsTester()
{

}

// ----------------------------------------------------------------------
// Tests
// ----------------------------------------------------------------------

void QueuedGetProductsTester ::
  toDo()
{
  // TODO
}

// ----------------------------------------------------------------------
// Handlers for typed from ports
// ----------------------------------------------------------------------

void QueuedGetProductsTester ::
  from_noArgsOut_handler(FwIndexType portNum)
{
  this->pushFromPortEntry_noArgsOut();
}

U32 QueuedGetProductsTester ::
  from_noArgsReturnOut_handler(FwIndexType portNum)
{
  this->pushFromPortEntry_noArgsReturnOut();
  // TODO: Return a value
}

void QueuedGetProductsTester ::
  from_typedOut_handler(
      FwIndexType portNum,
      U32 u32,
      F32 f32,
      bool b,
      const Ports::TypedPortStrings::StringSize80& str1,
      const E& e,
      const A& a,
      const S& s
  )
{
  this->pushFromPortEntry_typedOut(u32, f32, b, str1, e, a, s);
}

F32 QueuedGetProductsTester ::
  from_typedReturnOut_handler(
      FwIndexType portNum,
      U32 u32,
      F32 f32,
      bool b,
      const Ports::TypedReturnPortStrings::StringSize80& str2,
      const E& e,
      const A& a,
      const S& s
  )
{
  this->pushFromPortEntry_typedReturnOut(u32, f32, b, str2, e, a, s);
  // TODO: Return a value
}
