// ======================================================================
// \title  ActiveSyncProductsGTestBase.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for ActiveSyncProducts component Google Test harness base class
// ======================================================================

#include "test-base/ActiveSyncProductsGTestBase.hpp"

// ----------------------------------------------------------------------
// Construction and destruction
// ----------------------------------------------------------------------

ActiveSyncProductsGTestBase ::
  ActiveSyncProductsGTestBase(
      const char* const compName,
      const U32 maxHistorySize
  ) :
    ActiveSyncProductsTesterBase(compName, maxHistorySize)
{

}

ActiveSyncProductsGTestBase ::
  ~ActiveSyncProductsGTestBase()
{

}

// ----------------------------------------------------------------------
// From ports
// ----------------------------------------------------------------------

void ActiveSyncProductsGTestBase ::
  assertFromPortHistory_size(
      const char* const __callSiteFileName,
      const U32 __callSiteLineNumber,
      const U32 size
  ) const
{
  ASSERT_EQ(size, this->fromPortHistorySize)
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Total size of all from port histories\n"
    << "  Expected: " << size << "\n"
    << "  Actual:   " << this->fromPortHistorySize << "\n";
}

void ActiveSyncProductsGTestBase ::
  assert_from_noArgsOut_size(
      const char* const __callSiteFileName,
      const U32 __callSiteLineNumber,
      const U32 size
  ) const
{
  ASSERT_EQ(size, this->fromPortHistorySize_noArgsOut)
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Size of history for noArgsOut\n"
    << "  Expected: " << size << "\n"
    << "  Actual:   " << this->fromPortHistorySize_noArgsOut << "\n";
}

void ActiveSyncProductsGTestBase ::
  assert_from_noArgsReturnOut_size(
      const char* const __callSiteFileName,
      const U32 __callSiteLineNumber,
      const U32 size
  ) const
{
  ASSERT_EQ(size, this->fromPortHistorySize_noArgsReturnOut)
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Size of history for noArgsReturnOut\n"
    << "  Expected: " << size << "\n"
    << "  Actual:   " << this->fromPortHistorySize_noArgsReturnOut << "\n";
}

void ActiveSyncProductsGTestBase ::
  assert_from_typedOut_size(
      const char* const __callSiteFileName,
      const U32 __callSiteLineNumber,
      const U32 size
  ) const
{
  ASSERT_EQ(size, this->fromPortHistory_typedOut->size())
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Size of history for typedOut\n"
    << "  Expected: " << size << "\n"
    << "  Actual:   " << this->fromPortHistory_typedOut->size() << "\n";
}

void ActiveSyncProductsGTestBase ::
  assert_from_typedReturnOut_size(
      const char* const __callSiteFileName,
      const U32 __callSiteLineNumber,
      const U32 size
  ) const
{
  ASSERT_EQ(size, this->fromPortHistory_typedReturnOut->size())
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Size of history for typedReturnOut\n"
    << "  Expected: " << size << "\n"
    << "  Actual:   " << this->fromPortHistory_typedReturnOut->size() << "\n";
}

// ----------------------------------------------------------------------
// Data Product Request
// ----------------------------------------------------------------------

void ActiveSyncProductsGTestBase ::
  assertProductRequest_size(
      const char* const __callSiteFileName,
      const U32 __callSiteLineNumber,
      const U32 size
  ) const
{
  ASSERT_EQ(size, this->productRequestHistory->size())
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Size of product request history\n"
    << "  Expected: " << size << "\n"
    << "  Actual:   " << this->productRequestHistory->size() << "\n";
}

void ActiveSyncProductsGTestBase ::
  assertProductRequest(
      const char* const __callSiteFileName,
      const U32 __callSiteLineNumber,
      const U32 __index,
      FwDpIdType id,
      FwSizeType size
  ) const
{
  ASSERT_LT(__index, this->productRequestHistory->size())
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Index into product request history\n"
    << "  Expected: Less than size of product request history ("
    << this->productRequestHistory->size() << ")\n"
    << "  Actual:   " << __index << "\n";
  const DpRequest& e = this->productRequestHistory->at(__index);
  ASSERT_EQ(id, e.id)
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Id at index "
    << __index
    << " in product request history\n"
    << "  Expected: " << id << "\n"
    << "  Actual:   " << e.id << "\n";
  ASSERT_EQ(size, e.size)
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Size at index "
    << __index
    << " in product request history\n"
    << "  Expected: " << size << "\n"
    << "  Actual:   " << e.size << "\n";
}

// ----------------------------------------------------------------------
// Data Product Send
// ----------------------------------------------------------------------

void ActiveSyncProductsGTestBase ::
  assertProductSend_size(
      const char* const __callSiteFileName,
      const U32 __callSiteLineNumber,
      const U32 size
  ) const
{
  ASSERT_EQ(size, this->productSendHistory->size())
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Size of product send history\n"
    << "  Expected: " << size << "\n"
    << "  Actual:   " << this->productSendHistory->size() << "\n";
}

void ActiveSyncProductsGTestBase ::
  assertProductSend(
      const char* const __callSiteFileName,
      const U32 __callSiteLineNumber,
      const U32 __index,
      FwDpIdType id,
      Fw::Buffer buffer
  ) const
{
  ASSERT_LT(__index, this->productSendHistory->size())
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Index into product send history\n"
    << "  Expected: Less than size of product send history ("
    << this->productSendHistory->size() << ")\n"
    << "  Actual:   " << __index << "\n";
  const DpSend& e = this->productSendHistory->at(__index);
  ASSERT_EQ(id, e.id)
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Id at index "
    << __index
    << " in product send history\n"
    << "  Expected: " << id << "\n"
    << "  Actual:   " << e.id << "\n";
  ASSERT_EQ(buffer, e.buffer)
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Size at index "
    << __index
    << " in product send history\n"
    << "  Expected: " << buffer << "\n"
    << "  Actual:   " << e.buffer << "\n";
}
