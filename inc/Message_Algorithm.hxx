// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Message_Algorithm_HeaderFile
#define _Message_Algorithm_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Message_Algorithm_HeaderFile
#include <Handle_Message_Algorithm.hxx>
#endif

#ifndef _Message_ExecStatus_HeaderFile
#include <Message_ExecStatus.hxx>
#endif
#ifndef _Handle_Message_Messenger_HeaderFile
#include <Handle_Message_Messenger.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfTransient_HeaderFile
#include <Handle_TColStd_HArray1OfTransient.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Message_Status_HeaderFile
#include <Message_Status.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Handle_TCollection_HExtendedString_HeaderFile
#include <Handle_TCollection_HExtendedString.hxx>
#endif
#ifndef _Message_Gravity_HeaderFile
#include <Message_Gravity.hxx>
#endif
#ifndef _Handle_TColStd_HPackedMapOfInteger_HeaderFile
#include <Handle_TColStd_HPackedMapOfInteger.hxx>
#endif
#ifndef _Handle_TColStd_HSequenceOfHExtendedString_HeaderFile
#include <Handle_TColStd_HSequenceOfHExtendedString.hxx>
#endif
class Message_Messenger;
class TColStd_HArray1OfTransient;
class TCollection_AsciiString;
class TCollection_HAsciiString;
class TCollection_ExtendedString;
class TCollection_HExtendedString;
class TColStd_HPackedMapOfInteger;
class TColStd_HSequenceOfHExtendedString;
class TColStd_SequenceOfHExtendedString;


//! Class Message_Algorithm is intended to be the base class for <br>
//!          classes implementing algorithms or any operations that need <br>
//!          to provide extended information on its execution to the <br>
//!          caller / user. <br>
//! <br>
//!          It provides generic mechanism for management of the execution <br>
//!          status, collection and output of messages. <br>
//! <br>
//!          The algorithm uses methods SetStatus() to set an execution status. <br>
//!          It is possible to associate a status with a number or a string <br>
//!          (second argument of SetStatus() methods) to indicate precisely <br>
//!          the item (object, element etc.) in the input data which caused <br>
//!          the problem. <br>
//! <br>
//!          Each execution status generated by the algorithm has associated <br>
//!          text message that should be defined in the resouce file loaded <br>
//!          with call to Message_MsgFile::LoadFile(). <br>
//! <br>
//!          The messages corresponding to the statuses generated during the <br>
//!          algorithm execution are output to Message_Messenger using <br>
//!          methods SendMessages(). If status have associated numbers <br>
//!          or strings, they are included in the message body in place of <br>
//!          "%s" placeholder which should be present in the message text. <br>
//! <br>
//!          The name of the message text in the resource file is constructed <br>
//!          from name of the class and name of the status, separated by dot, <br>
//!          for instance: <br>
//! <br>
//!          .TObj_CheckModel.Alarm2 <br>
//!          Error: Some objects (%s) have references to dead object(s) <br>
//! <br>
//!          If message for the status is not found with prefix of <br>
//!          the current class type, the same message is searched for the base <br>
//!          class(es) recursively. <br>
//! <br>
//!          The messages are output to the messenger, stored in the field; <br>
//!          though messenger can be changed, it is guaranteed to be non-null. <br>
//!          By default, Message::DefaultMessenger() is used. <br>
class Message_Algorithm : public MMgt_TShared {

public:

  //! Empty constructor <br>
  Standard_EXPORT   Message_Algorithm();
  //! Sets status with no parameter <br>
  Standard_EXPORT     void SetStatus(const Message_Status& theStat) ;
  //! Sets status with integer parameter <br>
  Standard_EXPORT     void SetStatus(const Message_Status& theStat,const Standard_Integer theInt) ;
  //! Sets status with string parameter. <br>
//!          If noRepetitions is True, the parameter will be added only <br>
//!          if it has not been yet recorded for the same status flag <br>
        void SetStatus(const Message_Status& theStat,const Standard_CString theStr,const Standard_Boolean noRepetitions = Standard_True) ;
  //! Sets status with string parameter <br>
//!          If noRepetitions is True, the parameter will be added only <br>
//!          if it has not been yet recorded for the same status flag <br>
        void SetStatus(const Message_Status& theStat,const TCollection_AsciiString& theStr,const Standard_Boolean noRepetitions = Standard_True) ;
  //! Sets status with string parameter <br>
//!          If noRepetitions is True, the parameter will be added only <br>
//!          if it has not been yet recorded for the same status flag <br>
        void SetStatus(const Message_Status& theStat,const Handle(TCollection_HAsciiString)& theStr,const Standard_Boolean noRepetitions = Standard_True) ;
  //! Sets status with string parameter <br>
//!          If noRepetitions is True, the parameter will be added only <br>
//!          if it has not been yet recorded for the same status flag <br>
        void SetStatus(const Message_Status& theStat,const TCollection_ExtendedString& theStr,const Standard_Boolean noRepetitions = Standard_True) ;
  //! Sets status with string parameter <br>
//!          If noRepetitions is True, the parameter will be added only <br>
//!          if it has not been yet recorded for the same status flag <br>
  Standard_EXPORT     void SetStatus(const Message_Status& theStat,const Handle(TCollection_HExtendedString)& theStr,const Standard_Boolean noRepetitions = Standard_True) ;
  //! Returns copy of exec status of algorithm <br>
       const Message_ExecStatus& GetStatus() const;
  //! Returns exec status of algorithm <br>
        Message_ExecStatus& ChangeStatus() ;
  //! Clear exec status of algorithm <br>
  Standard_EXPORT     void ClearStatus() ;
  //! Sets messenger to algorithm <br>
  Standard_EXPORT     void SetMessenger(const Handle(Message_Messenger)& theMsgr) ;
  //! Returns messenger of algorithm. <br>
//!          The returned handle is always non-null and can <br>
//!          be used for sending messages. <br>
        Handle_Message_Messenger GetMessenger() const;
  //! Print messages for all status flags that have been set during <br>
//!          algorithm execution, excluding statuses that are NOT set <br>
//!          in theFilter. <br>
//! <br>
//!          The messages are taken from resource file, names being <br>
//!          constructed as {dynamic class type}.{status name}, <br>
//!          for instance, "Message_Algorithm.Fail5". <br>
//!          If message is not found in resources for this class and all <br>
//!          its base types, surrogate text is printed. <br>
//! <br>
//!          For the statuses having number or string parameters, <br>
//!          theMaxCount defines maximal number of numbers or strings to be <br>
//!          included in the message <br>
//! <br>
//!          Note that this method is virtual; this allows descendant <br>
//!          classes to customize message output (e.g. by adding <br>
//!          messages from other sub-algorithms) <br>
  Standard_EXPORT   virtual  void SendStatusMessages(const Message_ExecStatus& theFilter,const Message_Gravity theTraceLevel = Message_Warning,const Standard_Integer theMaxCount = 20) const;
  //! Convenient variant of SendStatusMessages() with theFilter <br>
//!          having defined all WARN, ALARM, and FAIL (but not DONE) <br>
//!          status flags <br>
  Standard_EXPORT     void SendMessages(const Message_Gravity theTraceLevel = Message_Warning,const Standard_Integer theMaxCount = 20) const;
  //! Add statuses to this algorithm from other algorithm <br>
//!          (including messages) <br>
  Standard_EXPORT     void AddStatus(const Handle(Message_Algorithm)& theOther) ;
  //! Add statuses to this algorithm from other algorithm, but <br>
//!          only those items are moved that correspond to statuses <br>
//!          set in theStatus <br>
  Standard_EXPORT     void AddStatus(const Message_ExecStatus& theStatus,const Handle(Message_Algorithm)& theOther) ;
  //! Return the numbers associated with the indicated status; <br>
//!          Null handle if no such status or no numbers associated with it <br>
  Standard_EXPORT     Handle_TColStd_HPackedMapOfInteger GetMessageNumbers(const Message_Status& theStatus) const;
  //! Return the strings associated with the indicated status; <br>
//!          Null handle if no such status or no strings associated with it <br>
  Standard_EXPORT     Handle_TColStd_HSequenceOfHExtendedString GetMessageStrings(const Message_Status& theStatus) const;
  //! Prepares a string containing a list of integers contained <br>
//!          in theError map, but not more than theMaxCount <br>
  Standard_EXPORT   static  TCollection_ExtendedString PrepareReport(const Handle(TColStd_HPackedMapOfInteger)& theError,const Standard_Integer theMaxCount) ;
  //! Prepares a string containing a list of names contained <br>
//!          in theReportSeq sequence, but not more than theMaxCount <br>
  Standard_EXPORT   static  TCollection_ExtendedString PrepareReport(const TColStd_SequenceOfHExtendedString& theReportSeq,const Standard_Integer theMaxCount) ;




  DEFINE_STANDARD_RTTI(Message_Algorithm)

protected:


Message_ExecStatus myStatus;
Handle_Message_Messenger myMessenger;


private: 


Handle_TColStd_HArray1OfTransient myReportIntegers;
Handle_TColStd_HArray1OfTransient myReportStrings;


};


#include <Message_Algorithm.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
