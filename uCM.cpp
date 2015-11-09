//----------------------------------------------------------------------------

#pragma hdrstop
#include <stdio.h>
#include <memory>

#include "uCM.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma classgroup "Vcl.Controls.TControl"
#pragma resource "*.dfm"
TCM *CM;
//---------------------------------------------------------------------------
__fastcall TCM::TCM(TComponent* Owner)
	: TDataModule(Owner)
{
	FInstanceOwner = true;
}

__fastcall TCM::~TCM()
{
	delete FServerMethods1Client;
}

TServerMethods1Client* TCM::GetServerMethods1Client(void)
{
	if (FServerMethods1Client == NULL)
		FServerMethods1Client= new TServerMethods1Client(DSRestConnection1, FInstanceOwner);
	return FServerMethods1Client;
};

