// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColGeom_SequenceOfCurve_HeaderFile
#define _TColGeom_SequenceOfCurve_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BaseSequence.hxx>
#include <Handle_Geom_Curve.hxx>
#include <Handle_TColGeom_SequenceNodeOfSequenceOfCurve.hxx>
#include <Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class Geom_Curve;
class TColGeom_SequenceNodeOfSequenceOfCurve;



class TColGeom_SequenceOfCurve  : public TCollection_BaseSequence
{
public:

  DEFINE_STANDARD_ALLOC

  
    TColGeom_SequenceOfCurve();
  
  Standard_EXPORT TColGeom_SequenceOfCurve(const TColGeom_SequenceOfCurve& Other);
  
  Standard_EXPORT   void Clear() ;
~TColGeom_SequenceOfCurve()
{
  Clear();
}
  
  Standard_EXPORT  const  TColGeom_SequenceOfCurve& Assign (const TColGeom_SequenceOfCurve& Other) ;
 const  TColGeom_SequenceOfCurve& operator = (const TColGeom_SequenceOfCurve& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void Append (const Handle(Geom_Curve)& T) ;
  
      void Append (TColGeom_SequenceOfCurve& S) ;
  
  Standard_EXPORT   void Prepend (const Handle(Geom_Curve)& T) ;
  
      void Prepend (TColGeom_SequenceOfCurve& S) ;
  
      void InsertBefore (const Standard_Integer Index, const Handle(Geom_Curve)& T) ;
  
      void InsertBefore (const Standard_Integer Index, TColGeom_SequenceOfCurve& S) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer Index, const Handle(Geom_Curve)& T) ;
  
      void InsertAfter (const Standard_Integer Index, TColGeom_SequenceOfCurve& S) ;
  
  Standard_EXPORT  const  Handle(Geom_Curve)& First()  const;
  
  Standard_EXPORT  const  Handle(Geom_Curve)& Last()  const;
  
      void Split (const Standard_Integer Index, TColGeom_SequenceOfCurve& Sub) ;
  
  Standard_EXPORT  const  Handle(Geom_Curve)& Value (const Standard_Integer Index)  const;
 const  Handle(Geom_Curve)& operator() (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const Handle(Geom_Curve)& I) ;
  
  Standard_EXPORT   Handle(Geom_Curve)& ChangeValue (const Standard_Integer Index) ;
  Handle(Geom_Curve)& operator() (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT   void Remove (const Standard_Integer Index) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer FromIndex, const Standard_Integer ToIndex) ;




protected:





private:





};

#define SeqItem Handle(Geom_Curve)
#define SeqItem_hxx <Geom_Curve.hxx>
#define TCollection_SequenceNode TColGeom_SequenceNodeOfSequenceOfCurve
#define TCollection_SequenceNode_hxx <TColGeom_SequenceNodeOfSequenceOfCurve.hxx>
#define Handle_TCollection_SequenceNode Handle_TColGeom_SequenceNodeOfSequenceOfCurve
#define TCollection_SequenceNode_Type_() TColGeom_SequenceNodeOfSequenceOfCurve_Type_()
#define TCollection_Sequence TColGeom_SequenceOfCurve
#define TCollection_Sequence_hxx <TColGeom_SequenceOfCurve.hxx>

#include <TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _TColGeom_SequenceOfCurve_HeaderFile
