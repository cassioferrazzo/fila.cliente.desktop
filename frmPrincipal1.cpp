// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "frmPrincipal1.h"
#include "uCM.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmPrincipal *frmPrincipal;

// ---------------------------------------------------------------------------
__fastcall TfrmPrincipal::TfrmPrincipal(TComponent* Owner) : TForm(Owner) {
	senha = new TSenha;
}

// ---------------------------------------------------------------------------
void __fastcall TfrmPrincipal::edServidorExit(TObject *Sender) {

	CM->DSRestConnection1->Host = edServidor->Text;
}

// ---------------------------------------------------------------------------
void __fastcall TfrmPrincipal::edPortaExit(TObject *Sender) {

	CM->DSRestConnection1->Port = StrToIntDef(edPorta->Text,8080);
}

// ---------------------------------------------------------------------------
void __fastcall TfrmPrincipal::btnChamarClick(TObject *Sender) {

	senha->fromJSON(CM->SMClient->chamarProximaSenha());
	lbSenha->Caption = senha->codigo;
}

// ---------------------------------------------------------------------------
void __fastcall TfrmPrincipal::btnFinalizarClick(TObject *Sender) {

	CM->SMClient->finalizarAtendimento(senha->toJSON());
}
// ---------------------------------------------------------------------------
