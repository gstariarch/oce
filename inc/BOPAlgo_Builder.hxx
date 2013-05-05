// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOPAlgo_Builder_HeaderFile
#define _BOPAlgo_Builder_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _BOPCol_ListOfShape_HeaderFile
#include <BOPCol_ListOfShape.hxx>
#endif
#ifndef _BOPCol_MapOfShape_HeaderFile
#include <BOPCol_MapOfShape.hxx>
#endif
#ifndef _BOPAlgo_PPaveFiller_HeaderFile
#include <BOPAlgo_PPaveFiller.hxx>
#endif
#ifndef _BOPDS_PDS_HeaderFile
#include <BOPDS_PDS.hxx>
#endif
#ifndef _Handle_BOPInt_Context_HeaderFile
#include <Handle_BOPInt_Context.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _BOPCol_DataMapOfShapeListOfShape_HeaderFile
#include <BOPCol_DataMapOfShapeListOfShape.hxx>
#endif
#ifndef _BOPCol_DataMapOfShapeShape_HeaderFile
#include <BOPCol_DataMapOfShapeShape.hxx>
#endif
#ifndef _BOPAlgo_BuilderShape_HeaderFile
#include <BOPAlgo_BuilderShape.hxx>
#endif
#ifndef _BOPCol_BaseAllocator_HeaderFile
#include <BOPCol_BaseAllocator.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _TopAbs_ShapeEnum_HeaderFile
#include <TopAbs_ShapeEnum.hxx>
#endif
#ifndef _BOPCol_ListOfInteger_HeaderFile
#include <BOPCol_ListOfInteger.hxx>
#endif
class BOPInt_Context;
class TopoDS_Shape;
class BOPAlgo_PaveFiller;
class TopTools_ListOfShape;



class BOPAlgo_Builder  : public BOPAlgo_BuilderShape {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   BOPAlgo_Builder();
Standard_EXPORT virtual ~BOPAlgo_Builder();
  
  Standard_EXPORT   BOPAlgo_Builder(const BOPCol_BaseAllocator& theAllocator);
  
  Standard_EXPORT   virtual  void Clear() ;
  
  Standard_EXPORT     BOPAlgo_PPaveFiller PPaveFiller() ;
  
  Standard_EXPORT     BOPDS_PDS PDS() ;
  
  Standard_EXPORT   virtual  void AddArgument(const TopoDS_Shape& theShape) ;
  
  Standard_EXPORT    const BOPCol_ListOfShape& Arguments() const;
  
  Standard_EXPORT   virtual  void Perform() ;
  
  Standard_EXPORT   virtual  void PerformWithFiller(const BOPAlgo_PaveFiller& theFiller) ;
  //! Returns the  list of shapes generated from the <br>
//!          shape theS. <br>
  Standard_EXPORT   virtual const TopTools_ListOfShape& Generated(const TopoDS_Shape& theS) ;
  //! Returns the list of shapes modified from the shape <br>
//!          theS. <br>
  Standard_EXPORT   virtual const TopTools_ListOfShape& Modified(const TopoDS_Shape& theS) ;
  //! Returns true if the shape theS has been deleted. <br>
  Standard_EXPORT   virtual  Standard_Boolean IsDeleted(const TopoDS_Shape& theS) ;
  
  Standard_EXPORT    const BOPCol_DataMapOfShapeListOfShape& Images() const;
  
  Standard_EXPORT     Standard_Boolean IsInterferred(const TopoDS_Shape& theS) const;
  //!  Returns myOrigins. <br>
  Standard_EXPORT    const BOPCol_DataMapOfShapeShape& Origins() const;
  //!  Returns myShapesSD. <br>
  Standard_EXPORT    const BOPCol_DataMapOfShapeShape& ShapesSD() const;
  //!  Returns mySplits. <br>
  Standard_EXPORT    const BOPCol_DataMapOfShapeListOfShape& Splits() const;





protected:

  //!  Prepare information for history support <br>
  Standard_EXPORT   virtual  void PrepareHistory() ;
  
  Standard_EXPORT   virtual  void PerformInternal(const BOPAlgo_PaveFiller& thePF) ;
  
  Standard_EXPORT   virtual  void CheckData() ;
  
  Standard_EXPORT   virtual  void Prepare() ;
  
  Standard_EXPORT     void FillImagesVertices() ;
  
  Standard_EXPORT     void FillImagesEdges() ;
  
  Standard_EXPORT   virtual  void BuildResult(const TopAbs_ShapeEnum theType) ;
  
  Standard_EXPORT     void FillImagesContainers(const TopAbs_ShapeEnum theType) ;
  
  Standard_EXPORT     void FillImagesCompounds() ;
  
  Standard_EXPORT     void FillImagesContainer(const TopoDS_Shape& theS,const TopAbs_ShapeEnum theType) ;
  
  Standard_EXPORT     void FillImagesCompound(const TopoDS_Shape& theS,BOPCol_MapOfShape& theMF) ;
  
  Standard_EXPORT     void FillImagesFaces() ;
  
  Standard_EXPORT   virtual  void BuildSplitFaces() ;
  
  Standard_EXPORT     void FillSameDomainFaces() ;
  
  Standard_EXPORT     void FillImagesFaces1() ;
  
  Standard_EXPORT     void FillInternalVertices(BOPCol_ListOfShape& theLF,BOPCol_ListOfInteger& theLIV) ;
  
  Standard_EXPORT     void FillImagesSolids() ;
  
  Standard_EXPORT     void BuildDraftSolid(const TopoDS_Shape& theSolid,TopoDS_Shape& theDraftSolid,BOPCol_ListOfShape& theLIF) ;
  
  Standard_EXPORT   virtual  void FillIn3DParts(BOPCol_DataMapOfShapeListOfShape& theInParts,BOPCol_DataMapOfShapeShape& theDraftSolids,const BOPCol_BaseAllocator& theAllocator) ;
  
  Standard_EXPORT     void BuildSplitSolids(BOPCol_DataMapOfShapeListOfShape& theInParts,BOPCol_DataMapOfShapeShape& theDraftSolids,const BOPCol_BaseAllocator& theAllocator) ;
  
  Standard_EXPORT     void FillInternalShapes() ;
  
  Standard_EXPORT   virtual  void PostTreat() ;


BOPCol_ListOfShape myArguments;
BOPCol_MapOfShape myMapFence;
BOPAlgo_PPaveFiller myPaveFiller;
BOPDS_PDS myDS;
Handle_BOPInt_Context myContext;
Standard_Integer myEntryPoint;
BOPCol_DataMapOfShapeListOfShape myImages;
BOPCol_DataMapOfShapeShape myShapesSD;
BOPCol_DataMapOfShapeListOfShape mySplits;
BOPCol_DataMapOfShapeShape myOrigins;


private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
