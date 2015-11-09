#ifndef uCCH
#define uCCH

#include "Data.DBXCommon.hpp"
#include "System.Classes.hpp"
#include "System.SysUtils.hpp"
#include "Data.DB.hpp"
#include "Data.SqlExpr.hpp"
#include "Data.DBXDBReaders.hpp"
#include "Data.DBXCDSReaders.hpp"
#include "DataSnap.DSProxyRest.hpp"

  class TServerMethods1Client : public TDSAdminRestClient
  {
  private:
    TDSRestCommand *FrequisitarSenhaCommand;
    TDSRestCommand *FrequisitarSenhaCommand_Cache;
    TDSRestCommand *FchamarProximaSenhaCommand;
    TDSRestCommand *FchamarProximaSenhaCommand_Cache;
    TDSRestCommand *FfinalizarAtendimentoCommand;
    TDSRestCommand *FfinalizarAtendimentoCommand_Cache;
    TDSRestCommand *FverificarStatusSenhaCommand;
    TDSRestCommand *FverificarStatusSenhaCommand_Cache;
    TDSRestCommand *FgetSenhasAtivasCommand;
    TDSRestCommand *FgetSenhasAtivasCommand_Cache;
  public:
    __fastcall TServerMethods1Client(TDSRestConnection *ARestConnection);
    __fastcall TServerMethods1Client(TDSRestConnection *ADBXConnection, bool AInstanceOwner);
    __fastcall ~TServerMethods1Client();
    TJSONObject* __fastcall requisitarSenha(const String& ARequestFilter = String());
    _di_IDSRestCachedJSONObject __fastcall requisitarSenha_Cache(const String& ARequestFilter = String());
    TJSONObject* __fastcall chamarProximaSenha(const String& ARequestFilter = String());
    _di_IDSRestCachedJSONObject __fastcall chamarProximaSenha_Cache(const String& ARequestFilter = String());
    TJSONObject* __fastcall finalizarAtendimento(TJSONObject* senha, const String& ARequestFilter = String());
    _di_IDSRestCachedJSONObject __fastcall finalizarAtendimento_Cache(TJSONObject* senha, const String& ARequestFilter = String());
    TJSONObject* __fastcall verificarStatusSenha(TJSONObject* senha, const String& ARequestFilter = String());
    _di_IDSRestCachedJSONObject __fastcall verificarStatusSenha_Cache(TJSONObject* senha, const String& ARequestFilter = String());
    TJSONArray* __fastcall getSenhasAtivas(const String& ARequestFilter = String());
    _di_IDSRestCachedJSONArray __fastcall getSenhasAtivas_Cache(const String& ARequestFilter = String());
  };

#endif
