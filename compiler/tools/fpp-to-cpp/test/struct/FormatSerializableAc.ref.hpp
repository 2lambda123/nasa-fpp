// ======================================================================
// \title  FormatSerializableAc.hpp
// \author Generated by fpp-to-cpp
// \brief  hpp file for Format struct
// ======================================================================

#ifndef FormatSerializableAc_HPP
#define FormatSerializableAc_HPP

#include "Fw/Types/BasicTypes.hpp"
#include "Fw/Types/Serializable.hpp"
#include "Fw/Types/String.hpp"

class Format :
  public Fw::Serializable
{

  public:

    // ----------------------------------------------------------------------
    // Constants
    // ----------------------------------------------------------------------

    enum {
      //! The size of the serial representation
      SERIALIZED_SIZE =
        sizeof(I32) +
        sizeof(U32) +
        sizeof(I32) +
        sizeof(U32) +
        sizeof(I32) +
        sizeof(U32) +
        sizeof(I32) +
        sizeof(U32) +
        sizeof(I32) +
        sizeof(U32) +
        sizeof(F32) +
        sizeof(F32) +
        sizeof(F32) +
        sizeof(F32) +
        sizeof(F32) +
        sizeof(F32) +
        sizeof(F32)
    };

  public:

    // ----------------------------------------------------------------------
    // Constructors
    // ----------------------------------------------------------------------

    //! Constructor (default value)
    Format();

    //! Member constructor
    Format(
        I32 m1,
        U32 m2,
        I32 m3,
        U32 m4,
        I32 m5,
        U32 m6,
        I32 m7,
        U32 m8,
        I32 m9,
        U32 m10,
        F32 m11,
        F32 m12,
        F32 m13,
        F32 m14,
        F32 m15,
        F32 m16,
        F32 m17
    );

    //! Copy constructor
    Format(
        const Format& obj //!< The source object
    );

  public:

    // ----------------------------------------------------------------------
    // Operators
    // ----------------------------------------------------------------------

    //! Copy assignment operator
    Format& operator=(
        const Format& obj //!< The source object
    );

    //! Equality operator
    bool operator==(
        const Format& obj //!< The other object
    ) const;

    //! Inequality operator
    bool operator!=(
        const Format& obj //!< The other object
    ) const;

#ifdef BUILD_UT

    //! Ostream operator
    friend std::ostream& operator<<(
        std::ostream& os, //!< The ostream
        const Format& obj //!< The object
    );

#endif

  public:

    // ----------------------------------------------------------------------
    // Member functions
    // ----------------------------------------------------------------------

    //! Serialization
    Fw::SerializeStatus serialize(
        Fw::SerializeBufferBase& buffer //!< The serial buffer
    ) const;

    //! Deserialization
    Fw::SerializeStatus deserialize(
        Fw::SerializeBufferBase& buffer //!< The serial buffer
    );

#if FW_SERIALIZABLE_TO_STRING || BUILD_UT

    //! Convert struct to string
    void toString(
        Fw::StringBase& sb //!< The StringBase object to hold the result
    ) const;

#endif

    // ----------------------------------------------------------------------
    // Getter functions
    // ----------------------------------------------------------------------

    //! Get member m1
    I32 getm1() const
    {
      return this->m1;
    }

    //! Get member m2
    U32 getm2() const
    {
      return this->m2;
    }

    //! Get member m3
    I32 getm3() const
    {
      return this->m3;
    }

    //! Get member m4
    U32 getm4() const
    {
      return this->m4;
    }

    //! Get member m5
    I32 getm5() const
    {
      return this->m5;
    }

    //! Get member m6
    U32 getm6() const
    {
      return this->m6;
    }

    //! Get member m7
    I32 getm7() const
    {
      return this->m7;
    }

    //! Get member m8
    U32 getm8() const
    {
      return this->m8;
    }

    //! Get member m9
    I32 getm9() const
    {
      return this->m9;
    }

    //! Get member m10
    U32 getm10() const
    {
      return this->m10;
    }

    //! Get member m11
    F32 getm11() const
    {
      return this->m11;
    }

    //! Get member m12
    F32 getm12() const
    {
      return this->m12;
    }

    //! Get member m13
    F32 getm13() const
    {
      return this->m13;
    }

    //! Get member m14
    F32 getm14() const
    {
      return this->m14;
    }

    //! Get member m15
    F32 getm15() const
    {
      return this->m15;
    }

    //! Get member m16
    F32 getm16() const
    {
      return this->m16;
    }

    //! Get member m17
    F32 getm17() const
    {
      return this->m17;
    }

    // ----------------------------------------------------------------------
    // Setter functions
    // ----------------------------------------------------------------------

    //! Set all members
    void set(
        I32 m1,
        U32 m2,
        I32 m3,
        U32 m4,
        I32 m5,
        U32 m6,
        I32 m7,
        U32 m8,
        I32 m9,
        U32 m10,
        F32 m11,
        F32 m12,
        F32 m13,
        F32 m14,
        F32 m15,
        F32 m16,
        F32 m17
    );

    //! Set member m1
    void setm1(I32 m1);

    //! Set member m2
    void setm2(U32 m2);

    //! Set member m3
    void setm3(I32 m3);

    //! Set member m4
    void setm4(U32 m4);

    //! Set member m5
    void setm5(I32 m5);

    //! Set member m6
    void setm6(U32 m6);

    //! Set member m7
    void setm7(I32 m7);

    //! Set member m8
    void setm8(U32 m8);

    //! Set member m9
    void setm9(I32 m9);

    //! Set member m10
    void setm10(U32 m10);

    //! Set member m11
    void setm11(F32 m11);

    //! Set member m12
    void setm12(F32 m12);

    //! Set member m13
    void setm13(F32 m13);

    //! Set member m14
    void setm14(F32 m14);

    //! Set member m15
    void setm15(F32 m15);

    //! Set member m16
    void setm16(F32 m16);

    //! Set member m17
    void setm17(F32 m17);

  protected:

    // ----------------------------------------------------------------------
    // Member variables
    // ----------------------------------------------------------------------

    I32 m1;
    U32 m2;
    I32 m3;
    U32 m4;
    I32 m5;
    U32 m6;
    I32 m7;
    U32 m8;
    I32 m9;
    U32 m10;
    F32 m11;
    F32 m12;
    F32 m13;
    F32 m14;
    F32 m15;
    F32 m16;
    F32 m17;

};

#endif
