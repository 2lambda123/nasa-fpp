// ======================================================================
// \title  PassiveGetPortsOnly.template.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for PassiveGetPortsOnly component implementation class
// ======================================================================

#include "FpConfig.hpp"
#include "impl/PassiveGetPortsOnly.hpp"

// ----------------------------------------------------------------------
// Component construction and destruction
// ----------------------------------------------------------------------

PassiveGetPortsOnly ::
  PassiveGetPortsOnly(const char* const compName) :
    PassiveGetPortsOnlyComponentBase(compName)
{

}

PassiveGetPortsOnly ::
  ~PassiveGetPortsOnly()
{

}

// ----------------------------------------------------------------------
// Handler implementations for user-defined typed input ports
// ----------------------------------------------------------------------

void PassiveGetPortsOnly ::
  noArgsGuarded_handler(NATIVE_INT_TYPE portNum)
{
  // TODO
}

U32 PassiveGetPortsOnly ::
  noArgsReturnGuarded_handler(NATIVE_INT_TYPE portNum)
{
  // TODO return
}

U32 PassiveGetPortsOnly ::
  noArgsReturnSync_handler(NATIVE_INT_TYPE portNum)
{
  // TODO return
}

void PassiveGetPortsOnly ::
  noArgsSync_handler(NATIVE_INT_TYPE portNum)
{
  // TODO
}

void PassiveGetPortsOnly ::
  typedGuarded_handler(
      NATIVE_INT_TYPE portNum,
      U32 u32,
      F32 f32,
      bool b,
      const Ports::TypedPortStrings::StringSize80& str1,
      const E& e,
      const A& a,
      const S& s
  )
{
  // TODO
}

F32 PassiveGetPortsOnly ::
  typedReturnGuarded_handler(
      NATIVE_INT_TYPE portNum,
      U32 u32,
      F32 f32,
      bool b,
      const Ports::TypedReturnPortStrings::StringSize80& str2,
      const E& e,
      const A& a,
      const S& s
  )
{
  // TODO return
}

F32 PassiveGetPortsOnly ::
  typedReturnSync_handler(
      NATIVE_INT_TYPE portNum,
      U32 u32,
      F32 f32,
      bool b,
      const Ports::TypedReturnPortStrings::StringSize80& str2,
      const E& e,
      const A& a,
      const S& s
  )
{
  // TODO return
}

void PassiveGetPortsOnly ::
  typedSync_handler(
      NATIVE_INT_TYPE portNum,
      U32 u32,
      F32 f32,
      bool b,
      const Ports::TypedPortStrings::StringSize80& str1,
      const E& e,
      const A& a,
      const S& s
  )
{
  // TODO
}
