// ======================================================================
// \title  Modules2SerializableAc.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for Modules2 struct
// ======================================================================

#include <cstdio>
#include <cstring>

#include "Fw/Types/Assert.hpp"
#include "Fw/Types/StringUtils.hpp"
#include "Modules2SerializableAc.hpp"

namespace M {

  // ----------------------------------------------------------------------
  // Constructors
  // ----------------------------------------------------------------------

  Modules2 ::
    Modules2() :
      Serializable(),
      m_x()
  {

  }

  Modules2 ::
    Modules2(const M::Modules1& x) :
      Serializable(),
      m_x(x)
  {

  }

  Modules2 ::
    Modules2(const Modules2& obj) :
      Serializable(),
      m_x(obj.m_x)
  {

  }

  // ----------------------------------------------------------------------
  // Operators
  // ----------------------------------------------------------------------

  Modules2& Modules2 ::
    operator=(const Modules2& obj)
  {
    if (this == &obj) {
      return *this;
    }

    set(obj.m_x);
    return *this;
  }

  bool Modules2 ::
    operator==(const Modules2& obj) const
  {
    return (this->m_x == obj.m_x);
  }

  bool Modules2 ::
    operator!=(const Modules2& obj) const
  {
    return !(*this == obj);
  }

#ifdef BUILD_UT

  std::ostream& operator<<(std::ostream& os, const Modules2& obj) {
    Fw::String s;
    obj.toString(s);
    os << s.toChar();
    return os;
  }

#endif

  // ----------------------------------------------------------------------
  // Member functions
  // ----------------------------------------------------------------------

  Fw::SerializeStatus Modules2 ::
    serialize(Fw::SerializeBufferBase& buffer) const
  {
    Fw::SerializeStatus status;

    status = buffer.serialize(this->m_x);
    if (status != Fw::FW_SERIALIZE_OK) {
      return status;
    }

    return status;
  }

  Fw::SerializeStatus Modules2 ::
    deserialize(Fw::SerializeBufferBase& buffer)
  {
    Fw::SerializeStatus status;

    status = buffer.deserialize(this->m_x);
    if (status != Fw::FW_SERIALIZE_OK) {
      return status;
    }

    return status;
  }

#if FW_SERIALIZABLE_TO_STRING

  void Modules2 ::
    toString(Fw::StringBase& sb) const
  {
    static const char* formatString =
      "( "
      "x = %s"
      " )";

    // Declare strings to hold any serializable toString() arguments
    Fw::String xStr;

    // Call toString for arrays and serializable types
    this->m_x.toString(xStr);

    sb.format(
      formatString,
      xStr.toChar()
    );
  }

#endif

  // ----------------------------------------------------------------------
  // Setter functions
  // ----------------------------------------------------------------------

  void Modules2 ::
    set(const M::Modules1& x)
  {
    this->m_x = x;
  }

  void Modules2 ::
    setx(const M::Modules1& x)
  {
    this->m_x = x;
  }

}
