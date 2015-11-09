//---------------------------------------------------------------------------

#ifndef frmPrincipal1H
#define frmPrincipal1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "TSenha1.h"
//---------------------------------------------------------------------------
class TfrmPrincipal : public TForm
{
__published:	// IDE-managed Components
	TEdit *edServidor;
	TLabel *Label1;
	TEdit *edPorta;
	TLabel *lbPorta;
	TButton *btnChamar;
	TButton *btnFinalizar;
	TLabel *Label2;
	TLabel *lbSenha;
	void __fastcall edServidorExit(TObject *Sender);
	void __fastcall edPortaExit(TObject *Sender);
	void __fastcall btnChamarClick(TObject *Sender);
	void __fastcall btnFinalizarClick(TObject *Sender);
private:	// User declarations
	TSenha *senha;
public:		// User declarations
	__fastcall TfrmPrincipal(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmPrincipal *frmPrincipal;
//---------------------------------------------------------------------------
#endif
