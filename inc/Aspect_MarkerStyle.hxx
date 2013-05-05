// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Aspect_MarkerStyle_HeaderFile
#define _Aspect_MarkerStyle_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Aspect_TypeOfMarker_HeaderFile
#include <Aspect_TypeOfMarker.hxx>
#endif
#ifndef _Handle_TShort_HArray1OfShortReal_HeaderFile
#include <Handle_TShort_HArray1OfShortReal.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfBoolean_HeaderFile
#include <Handle_TColStd_HArray1OfBoolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class TShort_HArray1OfShortReal;
class TColStd_HArray1OfBoolean;
class Aspect_MarkerStyleDefinitionError;
class TColStd_Array1OfReal;
class TColStd_Array1OfBoolean;
class TShort_Array1OfShortReal;


//! This class defines a Marker Style. <br>
//!	    The Style can be Predefined or defined by the user <br>
//!	    A user defined style must be described in the space <-1,+1> <br>
class Aspect_MarkerStyle  {
public:

  DEFINE_STANDARD_ALLOC

  //! Creates a marker style with the default value of <br>
//!	    MarkerStyle type : POINT <br>
//! <br>
  Standard_EXPORT   Aspect_MarkerStyle();
  //! Creates the marker style <aType>. <br>
  Standard_EXPORT   Aspect_MarkerStyle(const Aspect_TypeOfMarker aType);
  //! Creates a marker style from a implicit draw point <br>
  Standard_EXPORT   Aspect_MarkerStyle(const TColStd_Array1OfReal& aXpoint,const TColStd_Array1OfReal& aYpoint);
  //! Creates a marker style from a move-draw point descriptor . <br>
//! Each coordinate <aXpoint(i),aYpoint(i)> must be defined <br>
  Standard_EXPORT   Aspect_MarkerStyle(const TColStd_Array1OfReal& aXpoint,const TColStd_Array1OfReal& aYpoint,const TColStd_Array1OfBoolean& aSpoint);
  //! Updates the marker style <me> from the definition of the <br>
//!          marker style <Other>. <br>
  Standard_EXPORT     Aspect_MarkerStyle& Assign(const Aspect_MarkerStyle& Other) ;
    Aspect_MarkerStyle& operator =(const Aspect_MarkerStyle& Other) 
{
  return Assign(Other);
}
  //! Returns the type of the marker style <me> <br>
  Standard_EXPORT     Aspect_TypeOfMarker Type() const;
  //! Returns the components length of the marker descriptors <br>
  Standard_EXPORT     Standard_Integer Length() const;
  //! Returns the point and status of a marker style <br>
  Standard_EXPORT     Standard_Boolean Values(const Standard_Integer aRank,Standard_Real& aX,Standard_Real& aY) const;
  //! Returns the X vector of a marker style descriptor <br>
  Standard_EXPORT    const TShort_Array1OfShortReal& XValues() const;
  //! Returns the Y vector of a marker style descriptor <br>
  Standard_EXPORT    const TShort_Array1OfShortReal& YValues() const;
  //! Returns the State vector of a marker style descriptor <br>
  Standard_EXPORT    const TColStd_Array1OfBoolean& SValues() const;
  
  Standard_EXPORT     Standard_Boolean IsEqual(const Aspect_MarkerStyle& Other) const;
    Standard_Boolean operator==(const Aspect_MarkerStyle& Other) const
{
  return IsEqual(Other);
}
  
  Standard_EXPORT     Standard_Boolean IsNotEqual(const Aspect_MarkerStyle& Other) const;
    Standard_Boolean operator!=(const Aspect_MarkerStyle& Other) const
{
  return IsNotEqual(Other);
}





protected:





private:

  //! Set MyMarkerDescriptor with the predefined style values <br>
//!	    according of current type <br>
  Standard_EXPORT     void SetPredefinedStyle() ;


Aspect_TypeOfMarker MyMarkerType;
Handle_TShort_HArray1OfShortReal MyXpoint;
Handle_TShort_HArray1OfShortReal MyYpoint;
Handle_TColStd_HArray1OfBoolean MySpoint;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
