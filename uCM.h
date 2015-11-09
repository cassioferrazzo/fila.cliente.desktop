//----------------------------------------------------------------------------

#ifndef uCMH
#define uCMH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include "uCC.h"
#include <Datasnap.DSClientRest.hpp>
#include <IPPeerClient.hpp>
//----------------------------------------------------------------------------
class TCM : public TDataModule
{
__published:	// IDE-managed Components
	TDSRestConnection *DSRestConnection1;
private:	// User declarations
	bool FInstanceOwner;
	TServerMethods1Client* FServerMethods1Client;
	TServerMethods1Client* GetServerMethods1Client(void);
public:		// User declarations
	__fastcall TCM(TComponent* Owner);
	__fastcall ~TCM();
	__property bool InstanceOwner = {read=FInstanceOwner, write=FInstanceOwner};
	__property TServerMethods1Client* ServerMethods1Client = {read=GetServerMethods1Client, write=FServerMethods1Client};
};
//---------------------------------------------------------------------------
extern PACKAGE TCM *CM;
//---------------------------------------------------------------------------
#endif
