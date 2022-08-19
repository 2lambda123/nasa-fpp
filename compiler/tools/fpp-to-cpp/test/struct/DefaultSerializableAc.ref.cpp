// ======================================================================
// \title  DefaultSerializableAc.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for Default struct
// ======================================================================

#include "cstdio"
#include "cstring"

#include "DefaultSerializableAc.hpp"
#include "Fw/Types/Assert.hpp"
#include "Fw/Types/StringUtils.hpp"

// ----------------------------------------------------------------------
// StringSize40 class
// ----------------------------------------------------------------------

Default::StringSize40 ::
  StringSize40() :
    StringBase()
{
  this->m_buf[0] = 0;
}

Default::StringSize40 ::
  StringSize40(const char* src) :
    StringBase()
{
  Fw::StringUtils::string_copy(this->m_buf, src, sizeof(this->m_buf));
}

Default::StringSize40 ::
  StringSize40(const Fw::StringBase& src) :
    StringBase()
{
  Fw::StringUtils::string_copy(this->m_buf, src.toChar(), sizeof(this->m_buf));
}

Default::StringSize40 ::
  StringSize40(const StringSize40& src) :
    StringBase()
{
  Fw::StringUtils::string_copy(this->m_buf, src.toChar(), sizeof(this->m_buf));
}

Default::StringSize40 ::
  ~StringSize40()
{

}

Default::StringSize40& Default::StringSize40 ::
  operator=(const StringSize40& other)
{
  if (this == &other) {
    return *this;
  }

  Fw::StringUtils::string_copy(this->m_buf, other.toChar(), sizeof(this->m_buf));
  return *this;
}

Default::StringSize40& Default::StringSize40 ::
  operator=(const Fw::StringBase& other)
{
  if (this == &other) {
    return *this;
  }

  Fw::StringUtils::string_copy(this->m_buf, other.toChar(), sizeof(this->m_buf));
  return *this;
}

Default::StringSize40& Default::StringSize40 ::
  operator=(const char* other)
{
  Fw::StringUtils::string_copy(this->m_buf, other, sizeof(this->m_buf));
  return *this;
}

const char* Default::StringSize40 ::
  toChar() const
{
  return this->m_buf;
}

NATIVE_UINT_TYPE Default::StringSize40 ::
  getCapacity() const
{
  return sizeof(this->m_buf);
}

// ----------------------------------------------------------------------
// Constructors
// ----------------------------------------------------------------------

Default ::
  Default() :
    Serializable(),
    mU32(54),
    mS1("hello"),
    mF64(0.0)
{

}

Default ::
  Default(
      U32 mU32,
      const StringSize40& mS1,
      F64 mF64
  ) :
    Serializable(),
    mU32(mU32),
    mS1(mS1),
    mF64(mF64)
{

}

Default ::
  Default(const Default& obj) :
    Serializable(),
    mU32(obj.mU32),
    mS1(obj.mS1),
    mF64(obj.mF64)
{

}

// ----------------------------------------------------------------------
// Operators
// ----------------------------------------------------------------------

Default& Default ::
  operator=(const Default& obj)
{
  if (this == &obj) {
    return *this;
  }

  set(obj.mU32, obj.mS1, obj.mF64);
  return *this;
}

bool Default ::
  operator==(const Default& obj) const
{
  return (
    (this->mU32 == obj.mU32) &&
    (this->mS1 == obj.mS1) &&
    (this->mF64 == obj.mF64)
  );
}

bool Default ::
  operator!=(const Default& obj) const
{
  return !(*this == obj);
}

#ifdef BUILD_UT

std::ostream& operator<<(std::ostream& os, const Default& obj) {
  Fw::String s;
  obj.toString(s);
  os << s.toChar();
  return os;
}

#endif

// ----------------------------------------------------------------------
// Member functions
// ----------------------------------------------------------------------

Fw::SerializeStatus Default ::
  serialize(Fw::SerializeBufferBase& buffer) const
{
  Fw::SerializeStatus status;

  status = buffer.serialize(this->mU32);
  if (status != Fw::FW_SERIALIZE_OK) {
    return status;
  }
  status = buffer.serialize(this->mS1);
  if (status != Fw::FW_SERIALIZE_OK) {
    return status;
  }
  status = buffer.serialize(this->mF64);
  if (status != Fw::FW_SERIALIZE_OK) {
    return status;
  }

  return status;
}

Fw::SerializeStatus Default ::
  deserialize(Fw::SerializeBufferBase& buffer)
{
  Fw::SerializeStatus status;

  status = buffer.deserialize(this->mU32);
  if (status != Fw::FW_SERIALIZE_OK) {
    return status;
  }
  status = buffer.deserialize(this->mS1);
  if (status != Fw::FW_SERIALIZE_OK) {
    return status;
  }
  status = buffer.deserialize(this->mF64);
  if (status != Fw::FW_SERIALIZE_OK) {
    return status;
  }

  return status;
}

#if FW_SERIALIZABLE_TO_STRING || BUILD_UT

void Default ::
  toString(Fw::StringBase& sb) const
{
  static const char* formatString =
    "( "
    "mU32 = %" PRIu32 ", "
    "mS1 = %s, "
    "mF64 = %f"
    " )";

  char outputString[FW_SERIALIZABLE_TO_STRING_BUFFER_SIZE];
  (void) snprintf(
    outputString,
    FW_SERIALIZABLE_TO_STRING_BUFFER_SIZE,
    formatString,
    this->mU32,
    this->mS1.toChar(),
    this->mF64
  );

  outputString[FW_SERIALIZABLE_TO_STRING_BUFFER_SIZE-1] = 0; // NULL terminate
  sb = outputString;
}

#endif

// ----------------------------------------------------------------------
// Setter functions
// ----------------------------------------------------------------------

void Default ::
  set(
      U32 mU32,
      const StringSize40& mS1,
      F64 mF64
  )
{
  this->mU32 = mU32;
  this->mS1 = mS1;
  this->mF64 = mF64;
}

void Default ::
  setmU32(U32 mU32)
{
  this->mU32 = mU32;
}

void Default ::
  setmS1(const StringSize40& mS1)
{
  this->mS1 = mS1;
}

void Default ::
  setmF64(F64 mF64)
{
  this->mF64 = mF64;
}
