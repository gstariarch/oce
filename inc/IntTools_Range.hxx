// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntTools_Range_HeaderFile
#define _IntTools_Range_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif


//! The class describes the  1-d range <br>
//!          [myFirst, myLast]. <br>
class IntTools_Range  {
public:

  DEFINE_STANDARD_ALLOC

  
//! Empty constructor <br>
//! <br>
  Standard_EXPORT   IntTools_Range();
  
//! Initialize me by range boundaries <br>
//! <br>
  Standard_EXPORT   IntTools_Range(const Standard_Real aFirst,const Standard_Real aLast);
  
//! Modifier <br>
//! <br>
  Standard_EXPORT     void SetFirst(const Standard_Real aFirst) ;
  
//! Modifier <br>
//! <br>
  Standard_EXPORT     void SetLast(const Standard_Real aLast) ;
  
//! Selector <br>
//! <br>
  Standard_EXPORT     Standard_Real First() const;
  
//! Selector <br>
//! <br>
  Standard_EXPORT     Standard_Real Last() const;
  
//! Selector <br>
//! <br>
  Standard_EXPORT     void Range(Standard_Real& aFirst,Standard_Real& aLast) const;





protected:





private:



Standard_Real myFirst;
Standard_Real myLast;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
