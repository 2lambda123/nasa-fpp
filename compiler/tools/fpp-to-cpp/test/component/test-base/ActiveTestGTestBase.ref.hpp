// ======================================================================
// \title  ActiveTestGTestBase.hpp
// \author Generated by fpp-to-cpp
// \brief  hpp file for ActiveTest component Google Test harness base class
// ======================================================================

#ifndef M_ActiveTestGTestBase_HPP
#define M_ActiveTestGTestBase_HPP

#include "gtest/gtest.h"
#include "test-base/ActiveTestTesterBase.hpp"

// ----------------------------------------------------------------------
// Macros for typed user from port history assertions
// ----------------------------------------------------------------------

#define ASSERT_FROM_PORT_HISTORY_SIZE(size) \
  this->assertFromPortHistory_size(__FILE__, __LINE__, size)

#define ASSERT_from_typedOut_SIZE(size) \
  this->assert_from_typedOut_size(__FILE__, __LINE__, size)

#define ASSERT_from_typedOut(index, _u32, _f32, _b, _str1, _e, _a, _s) \
  { \
    ASSERT_GT(this->fromPortHistory_typedOut->size(), static_cast<U32>(index)) \
      << "\n" \
      << __FILE__ << ":" << __LINE__ << "\n" \
      << "  Value:    Index into history of typedOut\n" \
      << "  Expected: Less than size of history (" \
      << this->fromPortHistory_typedOut->size() << ")\n" \
      << "  Actual:   " << index << "\n"; \
      const FromPortEntry_typedOut& _e = \
        this->fromPortHistory_typedOut->at(index); \
    ASSERT_EQ(_u32, _e.u32) \
      << "\n" \
      << __FILE__ << ":" << __LINE__ << "\n" \
      << "  Value:    Value of argument u32 at index " \
      << index \
      << " in history of typedOut\n" \
      << "  Expected: " << _u32 << "\n" \
      << "  Actual:   " << _e.u32 << "\n"; \
    ASSERT_EQ(_f32, _e.f32) \
      << "\n" \
      << __FILE__ << ":" << __LINE__ << "\n" \
      << "  Value:    Value of argument f32 at index " \
      << index \
      << " in history of typedOut\n" \
      << "  Expected: " << _f32 << "\n" \
      << "  Actual:   " << _e.f32 << "\n"; \
    ASSERT_EQ(_b, _e.b) \
      << "\n" \
      << __FILE__ << ":" << __LINE__ << "\n" \
      << "  Value:    Value of argument b at index " \
      << index \
      << " in history of typedOut\n" \
      << "  Expected: " << _b << "\n" \
      << "  Actual:   " << _e.b << "\n"; \
    ASSERT_EQ(_str1, _e.str1) \
      << "\n" \
      << __FILE__ << ":" << __LINE__ << "\n" \
      << "  Value:    Value of argument str1 at index " \
      << index \
      << " in history of typedOut\n" \
      << "  Expected: " << _str1 << "\n" \
      << "  Actual:   " << _e.str1 << "\n"; \
    ASSERT_EQ(_e, _e.e) \
      << "\n" \
      << __FILE__ << ":" << __LINE__ << "\n" \
      << "  Value:    Value of argument e at index " \
      << index \
      << " in history of typedOut\n" \
      << "  Expected: " << _e << "\n" \
      << "  Actual:   " << _e.e << "\n"; \
    ASSERT_EQ(_a, _e.a) \
      << "\n" \
      << __FILE__ << ":" << __LINE__ << "\n" \
      << "  Value:    Value of argument a at index " \
      << index \
      << " in history of typedOut\n" \
      << "  Expected: " << _a << "\n" \
      << "  Actual:   " << _e.a << "\n"; \
    ASSERT_EQ(_s, _e.s) \
      << "\n" \
      << __FILE__ << ":" << __LINE__ << "\n" \
      << "  Value:    Value of argument s at index " \
      << index \
      << " in history of typedOut\n" \
      << "  Expected: " << _s << "\n" \
      << "  Actual:   " << _e.s << "\n"; \
  }

#define ASSERT_from_typedReturnOut_SIZE(size) \
  this->assert_from_typedReturnOut_size(__FILE__, __LINE__, size)

#define ASSERT_from_typedReturnOut(index, _u32, _f32, _b, _str2, _e, _a, _s) \
  { \
    ASSERT_GT(this->fromPortHistory_typedReturnOut->size(), static_cast<U32>(index)) \
      << "\n" \
      << __FILE__ << ":" << __LINE__ << "\n" \
      << "  Value:    Index into history of typedReturnOut\n" \
      << "  Expected: Less than size of history (" \
      << this->fromPortHistory_typedReturnOut->size() << ")\n" \
      << "  Actual:   " << index << "\n"; \
      const FromPortEntry_typedReturnOut& _e = \
        this->fromPortHistory_typedReturnOut->at(index); \
    ASSERT_EQ(_u32, _e.u32) \
      << "\n" \
      << __FILE__ << ":" << __LINE__ << "\n" \
      << "  Value:    Value of argument u32 at index " \
      << index \
      << " in history of typedReturnOut\n" \
      << "  Expected: " << _u32 << "\n" \
      << "  Actual:   " << _e.u32 << "\n"; \
    ASSERT_EQ(_f32, _e.f32) \
      << "\n" \
      << __FILE__ << ":" << __LINE__ << "\n" \
      << "  Value:    Value of argument f32 at index " \
      << index \
      << " in history of typedReturnOut\n" \
      << "  Expected: " << _f32 << "\n" \
      << "  Actual:   " << _e.f32 << "\n"; \
    ASSERT_EQ(_b, _e.b) \
      << "\n" \
      << __FILE__ << ":" << __LINE__ << "\n" \
      << "  Value:    Value of argument b at index " \
      << index \
      << " in history of typedReturnOut\n" \
      << "  Expected: " << _b << "\n" \
      << "  Actual:   " << _e.b << "\n"; \
    ASSERT_EQ(_str2, _e.str2) \
      << "\n" \
      << __FILE__ << ":" << __LINE__ << "\n" \
      << "  Value:    Value of argument str2 at index " \
      << index \
      << " in history of typedReturnOut\n" \
      << "  Expected: " << _str2 << "\n" \
      << "  Actual:   " << _e.str2 << "\n"; \
    ASSERT_EQ(_e, _e.e) \
      << "\n" \
      << __FILE__ << ":" << __LINE__ << "\n" \
      << "  Value:    Value of argument e at index " \
      << index \
      << " in history of typedReturnOut\n" \
      << "  Expected: " << _e << "\n" \
      << "  Actual:   " << _e.e << "\n"; \
    ASSERT_EQ(_a, _e.a) \
      << "\n" \
      << __FILE__ << ":" << __LINE__ << "\n" \
      << "  Value:    Value of argument a at index " \
      << index \
      << " in history of typedReturnOut\n" \
      << "  Expected: " << _a << "\n" \
      << "  Actual:   " << _e.a << "\n"; \
    ASSERT_EQ(_s, _e.s) \
      << "\n" \
      << __FILE__ << ":" << __LINE__ << "\n" \
      << "  Value:    Value of argument s at index " \
      << index \
      << " in history of typedReturnOut\n" \
      << "  Expected: " << _s << "\n" \
      << "  Actual:   " << _e.s << "\n"; \
  }

// ----------------------------------------------------------------------
// Macros for command history assertions
// ----------------------------------------------------------------------

#define ASSERT_CMD_RESPONSE_SIZE(size) \
  this->assertCmdResponse_size(__FILE__, __LINE__, size)

#define ASSERT_CMD_RESPONSE(index, opCode, cmdSeq, response) \
  this->assertCmdResponse(__FILE__, __LINE__, index, opCode, cmdSeq, response)

// ----------------------------------------------------------------------
// Macros for event history assertions
// ----------------------------------------------------------------------

#define ASSERT_EVENTS_SIZE(size) \
  this->assertEvents_size(__FILE__, __LINE__, size)

#define ASSERT_EVENTS_EventActivityHigh_SIZE(size) \
  this->assertEvents_EventActivityHigh_size(__FILE__, __LINE__, size)

#define ASSERT_EVENTS_EventActivityLowThrottled_SIZE(size) \
  this->assertEvents_EventActivityLowThrottled_size(__FILE__, __LINE__, size)

#define ASSERT_EVENTS_EventActivityLowThrottled(size, _u32, _f32, _b) \
  this->assertEvents_EventActivityLowThrottled(__FILE__, __LINE__, size, _u32, _f32, _b)

#define ASSERT_EVENTS_EventCommand_SIZE(size) \
  this->assertEvents_EventCommand_size(__FILE__, __LINE__, size)

#define ASSERT_EVENTS_EventCommand(size, _str1, _str2) \
  this->assertEvents_EventCommand(__FILE__, __LINE__, size, _str1, _str2)

#define ASSERT_EVENTS_EventDiagnostic_SIZE(size) \
  this->assertEvents_EventDiagnostic_size(__FILE__, __LINE__, size)

#define ASSERT_EVENTS_EventDiagnostic(size, _e) \
  this->assertEvents_EventDiagnostic(__FILE__, __LINE__, size, _e)

#define ASSERT_EVENTS_EventFatalThrottled_SIZE(size) \
  this->assertEvents_EventFatalThrottled_size(__FILE__, __LINE__, size)

#define ASSERT_EVENTS_EventFatalThrottled(size, _a) \
  this->assertEvents_EventFatalThrottled(__FILE__, __LINE__, size, _a)

#define ASSERT_EVENTS_EventWarningHigh_SIZE(size) \
  this->assertEvents_EventWarningHigh_size(__FILE__, __LINE__, size)

#define ASSERT_EVENTS_EventWarningHigh(size, _s) \
  this->assertEvents_EventWarningHigh(__FILE__, __LINE__, size, _s)

#define ASSERT_EVENTS_EventWarningLowThrottled_SIZE(size) \
  this->assertEvents_EventWarningLowThrottled_size(__FILE__, __LINE__, size)

// ----------------------------------------------------------------------
// Macros for telemetry history assertions
// ----------------------------------------------------------------------

#define ASSERT_TLM_SIZE(size) \
  this->assertTlm_size(__FILE__, __LINE__, size)

#define ASSERT_TLM_ChannelU32Format_SIZE(size) \
  this->assertTlm_ChannelU32Format_size(__FILE__, __LINE__, size)

#define ASSERT_TLM_ChannelU32Format(index, value) \
  this->assertTlm_ChannelU32Format(__FILE__, __LINE__, index, value)

#define ASSERT_TLM_ChannelF32Format_SIZE(size) \
  this->assertTlm_ChannelF32Format_size(__FILE__, __LINE__, size)

#define ASSERT_TLM_ChannelF32Format(index, value) \
  this->assertTlm_ChannelF32Format(__FILE__, __LINE__, index, value)

#define ASSERT_TLM_ChannelStringFormat_SIZE(size) \
  this->assertTlm_ChannelStringFormat_size(__FILE__, __LINE__, size)

#define ASSERT_TLM_ChannelStringFormat(index, value) \
  this->assertTlm_ChannelStringFormat(__FILE__, __LINE__, index, value)

#define ASSERT_TLM_ChannelEnum_SIZE(size) \
  this->assertTlm_ChannelEnum_size(__FILE__, __LINE__, size)

#define ASSERT_TLM_ChannelEnum(index, value) \
  this->assertTlm_ChannelEnum(__FILE__, __LINE__, index, value)

#define ASSERT_TLM_ChannelArrayFreq_SIZE(size) \
  this->assertTlm_ChannelArrayFreq_size(__FILE__, __LINE__, size)

#define ASSERT_TLM_ChannelArrayFreq(index, value) \
  this->assertTlm_ChannelArrayFreq(__FILE__, __LINE__, index, value)

#define ASSERT_TLM_ChannelStructFreq_SIZE(size) \
  this->assertTlm_ChannelStructFreq_size(__FILE__, __LINE__, size)

#define ASSERT_TLM_ChannelStructFreq(index, value) \
  this->assertTlm_ChannelStructFreq(__FILE__, __LINE__, index, value)

#define ASSERT_TLM_ChannelU32Limits_SIZE(size) \
  this->assertTlm_ChannelU32Limits_size(__FILE__, __LINE__, size)

#define ASSERT_TLM_ChannelU32Limits(index, value) \
  this->assertTlm_ChannelU32Limits(__FILE__, __LINE__, index, value)

#define ASSERT_TLM_ChannelF32Limits_SIZE(size) \
  this->assertTlm_ChannelF32Limits_size(__FILE__, __LINE__, size)

#define ASSERT_TLM_ChannelF32Limits(index, value) \
  this->assertTlm_ChannelF32Limits(__FILE__, __LINE__, index, value)

#define ASSERT_TLM_ChannelF64_SIZE(size) \
  this->assertTlm_ChannelF64_size(__FILE__, __LINE__, size)

#define ASSERT_TLM_ChannelF64(index, value) \
  this->assertTlm_ChannelF64(__FILE__, __LINE__, index, value)

#define ASSERT_TLM_ChannelU32OnChange_SIZE(size) \
  this->assertTlm_ChannelU32OnChange_size(__FILE__, __LINE__, size)

#define ASSERT_TLM_ChannelU32OnChange(index, value) \
  this->assertTlm_ChannelU32OnChange(__FILE__, __LINE__, index, value)

#define ASSERT_TLM_ChannelEnumOnChange_SIZE(size) \
  this->assertTlm_ChannelEnumOnChange_size(__FILE__, __LINE__, size)

#define ASSERT_TLM_ChannelEnumOnChange(index, value) \
  this->assertTlm_ChannelEnumOnChange(__FILE__, __LINE__, index, value)

// ----------------------------------------------------------------------
// Macros for product request assertions
// ----------------------------------------------------------------------

#define ASSERT_PRODUCT_REQUEST_SIZE(size) \
  this->assertProductRequest_size(__FILE__, __LINE__, size)

#define ASSERT_PRODUCT_REQUEST(index, id, size) \
  this->assertProductRequest(__FILE__, __LINE__, index, id, size)

// ----------------------------------------------------------------------
// Macros for product send assertions
// ----------------------------------------------------------------------

#define ASSERT_PRODUCT_SEND_SIZE(size) \
  this->assertProductSend_size(__FILE__, __LINE__, size)

#define ASSERT_PRODUCT_SEND(index, id, buffer) \
  this->assertProductSend(__FILE__, __LINE__, index, id, buffer)

namespace M {

  //! \class ActiveTestGTestBase
  //! \brief Auto-generated base for ActiveTest component Google Test harness
  class ActiveTestGTestBase :
    public ActiveTestTesterBase
  {

    protected:

      // ----------------------------------------------------------------------
      // Construction and destruction
      // ----------------------------------------------------------------------

      //! Construct object ActiveTestGTestBase
      ActiveTestGTestBase(
          const char* const compName, //!< The component name
          const U32 maxHistorySize //!< The maximum size of each history
      );

      //! Destroy object ActiveTestGTestBase
      ~ActiveTestGTestBase();

    protected:

      // ----------------------------------------------------------------------
      // From ports
      // ----------------------------------------------------------------------

      //! From ports
      void assertFromPortHistory_size(
          const char* const __callSiteFileName, //!< The name of the file containing the call site
          const U32 __callSiteLineNumber, //!< The line number of the call site
          const U32 size //!< The asserted size
      ) const;

      //! From port: typedOut
      void assert_from_typedOut(
          const char* const __callSiteFileName, //!< The name of the file containing the call site
          const U32 __callSiteLineNumber, //!< The line number of the call site
          const U32 size //!< The asserted size
      ) const;

      //! From port: typedReturnOut
      void assert_from_typedReturnOut(
          const char* const __callSiteFileName, //!< The name of the file containing the call site
          const U32 __callSiteLineNumber, //!< The line number of the call site
          const U32 size //!< The asserted size
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Commands
      // ----------------------------------------------------------------------

      //! Assert size of command response history
      void assertCmdResponse_size(
          const char* const __callSiteFileName, //!< The name of the file containing the call site
          const U32 __callSiteLineNumber, //!< The line number of the call site
          const U32 size //!< The asserted size
      ) const;

      //! Assert the command response history at index
      void assertCmdResponse(
          const char* const __callSiteFileName, //!< The name of the file containing the call site
          const U32 __callSiteLineNumber, //!< The line number of the call site
          const U32 __index, //!< The index
          FwOpcodeType opCode, //!< The opcode
          U32 cmdSeq, //!< The command sequence number
          Fw::CmdResponse response //!< The command response
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Events
      // ----------------------------------------------------------------------

      //! Assert the size of event history
      void assertEvents_size(
          const char* const __callSiteFileName, //!< The name of the file containing the call site
          const U32 __callSiteLineNumber, //!< The line number of the call site
          const U32 size //!< The asserted size
      ) const;

      //! Event: EventActivityHigh
      void assertEvents_EventActivityHigh_size(
          const char* const __callSiteFileName, //!< The name of the file containing the call site
          const U32 __callSiteLineNumber, //!< The line number of the call site
          const U32 size //!< The asserted size
      ) const;

      //! Event: EventActivityLowThrottled
      void assertEvents_EventActivityLowThrottled_size(
          const char* const __callSiteFileName, //!< The name of the file containing the call site
          const U32 __callSiteLineNumber, //!< The line number of the call site
          const U32 size //!< The asserted size
      ) const;

      //! Event: EventActivityLowThrottled
      void assertEvents_EventActivityLowThrottled(
          const char* const __callSiteFileName, //!< The name of the file containing the call site
          const U32 __callSiteLineNumber, //!< The line number of the call site
          const U32 __index, //!< The index
          const U32 u32, //!< A U32
          const F32 f32, //!< An F32
          const bool b //!< A boolean
      ) const;

      //! Event: EventCommand
      void assertEvents_EventCommand_size(
          const char* const __callSiteFileName, //!< The name of the file containing the call site
          const U32 __callSiteLineNumber, //!< The line number of the call site
          const U32 size //!< The asserted size
      ) const;

      //! Event: EventCommand
      void assertEvents_EventCommand(
          const char* const __callSiteFileName, //!< The name of the file containing the call site
          const U32 __callSiteLineNumber, //!< The line number of the call site
          const U32 __index, //!< The index
          const char* const str1, //!< A string
          const char* const str2 //!< Another string
      ) const;

      //! Event: EventDiagnostic
      void assertEvents_EventDiagnostic_size(
          const char* const __callSiteFileName, //!< The name of the file containing the call site
          const U32 __callSiteLineNumber, //!< The line number of the call site
          const U32 size //!< The asserted size
      ) const;

      //! Event: EventDiagnostic
      void assertEvents_EventDiagnostic(
          const char* const __callSiteFileName, //!< The name of the file containing the call site
          const U32 __callSiteLineNumber, //!< The line number of the call site
          const U32 __index, //!< The index
          const E& e //!< An enum
      ) const;

      //! Event: EventFatalThrottled
      void assertEvents_EventFatalThrottled_size(
          const char* const __callSiteFileName, //!< The name of the file containing the call site
          const U32 __callSiteLineNumber, //!< The line number of the call site
          const U32 size //!< The asserted size
      ) const;

      //! Event: EventFatalThrottled
      void assertEvents_EventFatalThrottled(
          const char* const __callSiteFileName, //!< The name of the file containing the call site
          const U32 __callSiteLineNumber, //!< The line number of the call site
          const U32 __index, //!< The index
          const A& a //!< An array
      ) const;

      //! Event: EventWarningHigh
      void assertEvents_EventWarningHigh_size(
          const char* const __callSiteFileName, //!< The name of the file containing the call site
          const U32 __callSiteLineNumber, //!< The line number of the call site
          const U32 size //!< The asserted size
      ) const;

      //! Event: EventWarningHigh
      void assertEvents_EventWarningHigh(
          const char* const __callSiteFileName, //!< The name of the file containing the call site
          const U32 __callSiteLineNumber, //!< The line number of the call site
          const U32 __index, //!< The index
          const S& s //!< A struct
      ) const;

      //! Event: EventWarningLowThrottled
      void assertEvents_EventWarningLowThrottled_size(
          const char* const __callSiteFileName, //!< The name of the file containing the call site
          const U32 __callSiteLineNumber, //!< The line number of the call site
          const U32 size //!< The asserted size
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Telemetry
      // ----------------------------------------------------------------------

      //! Assert the size of telemetry history
      void assertTlm_size(
          const char* const __callSiteFileName, //!< The name of the file containing the call site
          const U32 __callSiteLineNumber, //!< The line number of the call site
          const U32 size //!< The asserted size
      ) const;

      //! Channel: ChannelU32Format
      void assertTlm_ChannelU32Format_size(
          const char* const __callSiteFileName, //!< The name of the file containing the call site
          const U32 __callSiteLineNumber, //!< The line number of the call site
          const U32 size //!< The asserted size
      ) const;

      //! Channel: ChannelU32Format
      void assertTlm_ChannelU32Format(
          const char* const __callSiteFileName, //!< The name of the file containing the call site
          const U32 __callSiteLineNumber, //!< The line number of the call site
          const U32 __index, //!< The index
          const U32 val //!< The channel value
      ) const;

      //! Channel: ChannelF32Format
      void assertTlm_ChannelF32Format_size(
          const char* const __callSiteFileName, //!< The name of the file containing the call site
          const U32 __callSiteLineNumber, //!< The line number of the call site
          const U32 size //!< The asserted size
      ) const;

      //! Channel: ChannelF32Format
      void assertTlm_ChannelF32Format(
          const char* const __callSiteFileName, //!< The name of the file containing the call site
          const U32 __callSiteLineNumber, //!< The line number of the call site
          const U32 __index, //!< The index
          const F32 val //!< The channel value
      ) const;

      //! Channel: ChannelStringFormat
      void assertTlm_ChannelStringFormat_size(
          const char* const __callSiteFileName, //!< The name of the file containing the call site
          const U32 __callSiteLineNumber, //!< The line number of the call site
          const U32 size //!< The asserted size
      ) const;

      //! Channel: ChannelStringFormat
      void assertTlm_ChannelStringFormat(
          const char* const __callSiteFileName, //!< The name of the file containing the call site
          const U32 __callSiteLineNumber, //!< The line number of the call site
          const U32 __index, //!< The index
          const char* const val //!< The channel value
      ) const;

      //! Channel: ChannelEnum
      void assertTlm_ChannelEnum_size(
          const char* const __callSiteFileName, //!< The name of the file containing the call site
          const U32 __callSiteLineNumber, //!< The line number of the call site
          const U32 size //!< The asserted size
      ) const;

      //! Channel: ChannelEnum
      void assertTlm_ChannelEnum(
          const char* const __callSiteFileName, //!< The name of the file containing the call site
          const U32 __callSiteLineNumber, //!< The line number of the call site
          const U32 __index, //!< The index
          const E& val //!< The channel value
      ) const;

      //! Channel: ChannelArrayFreq
      void assertTlm_ChannelArrayFreq_size(
          const char* const __callSiteFileName, //!< The name of the file containing the call site
          const U32 __callSiteLineNumber, //!< The line number of the call site
          const U32 size //!< The asserted size
      ) const;

      //! Channel: ChannelArrayFreq
      void assertTlm_ChannelArrayFreq(
          const char* const __callSiteFileName, //!< The name of the file containing the call site
          const U32 __callSiteLineNumber, //!< The line number of the call site
          const U32 __index, //!< The index
          const A& val //!< The channel value
      ) const;

      //! Channel: ChannelStructFreq
      void assertTlm_ChannelStructFreq_size(
          const char* const __callSiteFileName, //!< The name of the file containing the call site
          const U32 __callSiteLineNumber, //!< The line number of the call site
          const U32 size //!< The asserted size
      ) const;

      //! Channel: ChannelStructFreq
      void assertTlm_ChannelStructFreq(
          const char* const __callSiteFileName, //!< The name of the file containing the call site
          const U32 __callSiteLineNumber, //!< The line number of the call site
          const U32 __index, //!< The index
          const S& val //!< The channel value
      ) const;

      //! Channel: ChannelU32Limits
      void assertTlm_ChannelU32Limits_size(
          const char* const __callSiteFileName, //!< The name of the file containing the call site
          const U32 __callSiteLineNumber, //!< The line number of the call site
          const U32 size //!< The asserted size
      ) const;

      //! Channel: ChannelU32Limits
      void assertTlm_ChannelU32Limits(
          const char* const __callSiteFileName, //!< The name of the file containing the call site
          const U32 __callSiteLineNumber, //!< The line number of the call site
          const U32 __index, //!< The index
          const U32 val //!< The channel value
      ) const;

      //! Channel: ChannelF32Limits
      void assertTlm_ChannelF32Limits_size(
          const char* const __callSiteFileName, //!< The name of the file containing the call site
          const U32 __callSiteLineNumber, //!< The line number of the call site
          const U32 size //!< The asserted size
      ) const;

      //! Channel: ChannelF32Limits
      void assertTlm_ChannelF32Limits(
          const char* const __callSiteFileName, //!< The name of the file containing the call site
          const U32 __callSiteLineNumber, //!< The line number of the call site
          const U32 __index, //!< The index
          const F32 val //!< The channel value
      ) const;

      //! Channel: ChannelF64
      void assertTlm_ChannelF64_size(
          const char* const __callSiteFileName, //!< The name of the file containing the call site
          const U32 __callSiteLineNumber, //!< The line number of the call site
          const U32 size //!< The asserted size
      ) const;

      //! Channel: ChannelF64
      void assertTlm_ChannelF64(
          const char* const __callSiteFileName, //!< The name of the file containing the call site
          const U32 __callSiteLineNumber, //!< The line number of the call site
          const U32 __index, //!< The index
          const F64 val //!< The channel value
      ) const;

      //! Channel: ChannelU32OnChange
      void assertTlm_ChannelU32OnChange_size(
          const char* const __callSiteFileName, //!< The name of the file containing the call site
          const U32 __callSiteLineNumber, //!< The line number of the call site
          const U32 size //!< The asserted size
      ) const;

      //! Channel: ChannelU32OnChange
      void assertTlm_ChannelU32OnChange(
          const char* const __callSiteFileName, //!< The name of the file containing the call site
          const U32 __callSiteLineNumber, //!< The line number of the call site
          const U32 __index, //!< The index
          const U32 val //!< The channel value
      ) const;

      //! Channel: ChannelEnumOnChange
      void assertTlm_ChannelEnumOnChange_size(
          const char* const __callSiteFileName, //!< The name of the file containing the call site
          const U32 __callSiteLineNumber, //!< The line number of the call site
          const U32 size //!< The asserted size
      ) const;

      //! Channel: ChannelEnumOnChange
      void assertTlm_ChannelEnumOnChange(
          const char* const __callSiteFileName, //!< The name of the file containing the call site
          const U32 __callSiteLineNumber, //!< The line number of the call site
          const U32 __index, //!< The index
          const E& val //!< The channel value
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Data Product Request
      // ----------------------------------------------------------------------

      //! Assert size of product request history
      void assertProductRequest_size(
          const char* const __callSiteFileName, //!< The name of the file containing the call site
          const U32 __callSiteLineNumber, //!< The line number of the call site
          const U32 size //!< The asserted size
      ) const;

      //! Assert the product request history at index
      void assertCmdResponse(
          const char* const __callSiteFileName, //!< The name of the file containing the call site
          const U32 __callSiteLineNumber, //!< The line number of the call site
          const U32 __index, //!< The index
          FwOpcodeType opCode, //!< The opcode
          U32 cmdSeq, //!< The command sequence number
          FwDpIdType id, //!< The container ID
          FwSizeType size //!< The size of the requested buffer
      ) const;

    protected:

      // ----------------------------------------------------------------------
      // Data Product Send
      // ----------------------------------------------------------------------

      //! Assert size of product send history
      void assertProductSend_size(
          const char* const __callSiteFileName, //!< The name of the file containing the call site
          const U32 __callSiteLineNumber, //!< The line number of the call site
          const U32 size //!< The asserted size
      ) const;

      //! Assert the product send history at index
      void assertCmdResponse(
          const char* const __callSiteFileName, //!< The name of the file containing the call site
          const U32 __callSiteLineNumber, //!< The line number of the call site
          const U32 __index, //!< The index
          FwOpcodeType opCode, //!< The opcode
          U32 cmdSeq, //!< The command sequence number
          FwDpIdType id, //!< The container ID
          Fw::Buffer buffer //!< The buffer
      ) const;

  };

}

#endif
