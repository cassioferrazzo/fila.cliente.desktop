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
	TSMClient* FSMClient;
	TSMClient* GetSMClient(void);
public:		// User declarations
	__fastcall TCM(TComponent* Owner);
	__fastcall ~TCM();
	__property bool InstanceOwner = {read=FInstanceOwner, write=FInstanceOwner};
	__property TSMClient* SMClient = {read=GetSMClient, write=FSMClient};
};
//---------------------------------------------------------------------------
extern PACKAGE TCM *CM;
//---------------------------------------------------------------------------
#endif
