// 
// Created by the DataSnap proxy generator.
// 08/11/2015 21:56:36
// 

#include "uCC.h"

  struct TDSRestParameterMetaData TServerMethods1_requisitarSenha[] =
  {
    {"", 4, 37, "TJSONObject"}
  };

  struct TDSRestParameterMetaData TServerMethods1_requisitarSenha_Cache[] =
  {
    {"", 4, 26, "String"}
  };

  struct TDSRestParameterMetaData TServerMethods1_chamarProximaSenha[] =
  {
    {"", 4, 37, "TJSONObject"}
  };

  struct TDSRestParameterMetaData TServerMethods1_chamarProximaSenha_Cache[] =
  {
    {"", 4, 26, "String"}
  };

  struct TDSRestParameterMetaData TServerMethods1_finalizarAtendimento[] =
  {
    {"senha", 1, 37, "TJSONObject"},
    {"", 4, 37, "TJSONObject"}
  };

  struct TDSRestParameterMetaData TServerMethods1_finalizarAtendimento_Cache[] =
  {
    {"senha", 1, 37, "TJSONObject"},
    {"", 4, 26, "String"}
  };

  struct TDSRestParameterMetaData TServerMethods1_verificarStatusSenha[] =
  {
    {"senha", 1, 37, "TJSONObject"},
    {"", 4, 37, "TJSONObject"}
  };

  struct TDSRestParameterMetaData TServerMethods1_verificarStatusSenha_Cache[] =
  {
    {"senha", 1, 37, "TJSONObject"},
    {"", 4, 26, "String"}
  };

  struct TDSRestParameterMetaData TServerMethods1_getSenhasAtivas[] =
  {
    {"", 4, 37, "TJSONArray"}
  };

  struct TDSRestParameterMetaData TServerMethods1_getSenhasAtivas_Cache[] =
  {
    {"", 4, 26, "String"}
  };

TJSONObject* __fastcall TServerMethods1Client::requisitarSenha(const String& ARequestFilter)
{
  if (FrequisitarSenhaCommand == NULL)
  {
    FrequisitarSenhaCommand = FConnection->CreateCommand();
    FrequisitarSenhaCommand->RequestType = "GET";
    FrequisitarSenhaCommand->Text = "TServerMethods1.requisitarSenha";
    FrequisitarSenhaCommand->Prepare(TServerMethods1_requisitarSenha, 0);
  }
  FrequisitarSenhaCommand->Execute(ARequestFilter);
  TJSONObject* result = (TJSONObject*)FrequisitarSenhaCommand->Parameters->Parameter[0]->Value->GetJSONValue(FInstanceOwner);
  return result;
}

_di_IDSRestCachedJSONObject __fastcall TServerMethods1Client::requisitarSenha_Cache(const String& ARequestFilter)
{
  if (FrequisitarSenhaCommand_Cache == NULL)
  {
    FrequisitarSenhaCommand_Cache = FConnection->CreateCommand();
    FrequisitarSenhaCommand_Cache->RequestType = "GET";
    FrequisitarSenhaCommand_Cache->Text = "TServerMethods1.requisitarSenha";
    FrequisitarSenhaCommand_Cache->Prepare(TServerMethods1_requisitarSenha_Cache, 0);
  }
  FrequisitarSenhaCommand_Cache->ExecuteCache(ARequestFilter);
  _di_IDSRestCachedJSONObject _resultIntf;
  {
  TDSRestCachedJSONObject* obj(new TDSRestCachedJSONObject(FrequisitarSenhaCommand_Cache->Parameters->Parameter[0]->Value->GetString()));
  obj->GetInterface(_resultIntf);
  }
  return _resultIntf;
}

TJSONObject* __fastcall TServerMethods1Client::chamarProximaSenha(const String& ARequestFilter)
{
  if (FchamarProximaSenhaCommand == NULL)
  {
    FchamarProximaSenhaCommand = FConnection->CreateCommand();
    FchamarProximaSenhaCommand->RequestType = "GET";
    FchamarProximaSenhaCommand->Text = "TServerMethods1.chamarProximaSenha";
    FchamarProximaSenhaCommand->Prepare(TServerMethods1_chamarProximaSenha, 0);
  }
  FchamarProximaSenhaCommand->Execute(ARequestFilter);
  TJSONObject* result = (TJSONObject*)FchamarProximaSenhaCommand->Parameters->Parameter[0]->Value->GetJSONValue(FInstanceOwner);
  return result;
}

_di_IDSRestCachedJSONObject __fastcall TServerMethods1Client::chamarProximaSenha_Cache(const String& ARequestFilter)
{
  if (FchamarProximaSenhaCommand_Cache == NULL)
  {
    FchamarProximaSenhaCommand_Cache = FConnection->CreateCommand();
    FchamarProximaSenhaCommand_Cache->RequestType = "GET";
    FchamarProximaSenhaCommand_Cache->Text = "TServerMethods1.chamarProximaSenha";
    FchamarProximaSenhaCommand_Cache->Prepare(TServerMethods1_chamarProximaSenha_Cache, 0);
  }
  FchamarProximaSenhaCommand_Cache->ExecuteCache(ARequestFilter);
  _di_IDSRestCachedJSONObject _resultIntf;
  {
  TDSRestCachedJSONObject* obj(new TDSRestCachedJSONObject(FchamarProximaSenhaCommand_Cache->Parameters->Parameter[0]->Value->GetString()));
  obj->GetInterface(_resultIntf);
  }
  return _resultIntf;
}

TJSONObject* __fastcall TServerMethods1Client::finalizarAtendimento(TJSONObject* senha, const String& ARequestFilter)
{
  if (FfinalizarAtendimentoCommand == NULL)
  {
    FfinalizarAtendimentoCommand = FConnection->CreateCommand();
    FfinalizarAtendimentoCommand->RequestType = "POST";
    FfinalizarAtendimentoCommand->Text = "TServerMethods1.\"finalizarAtendimento\"";
    FfinalizarAtendimentoCommand->Prepare(TServerMethods1_finalizarAtendimento, 1);
  }
  FfinalizarAtendimentoCommand->Parameters->Parameter[0]->Value->SetJSONValue(senha, FInstanceOwner);
  FfinalizarAtendimentoCommand->Execute(ARequestFilter);
  TJSONObject* result = (TJSONObject*)FfinalizarAtendimentoCommand->Parameters->Parameter[1]->Value->GetJSONValue(FInstanceOwner);
  return result;
}

_di_IDSRestCachedJSONObject __fastcall TServerMethods1Client::finalizarAtendimento_Cache(TJSONObject* senha, const String& ARequestFilter)
{
  if (FfinalizarAtendimentoCommand_Cache == NULL)
  {
    FfinalizarAtendimentoCommand_Cache = FConnection->CreateCommand();
    FfinalizarAtendimentoCommand_Cache->RequestType = "POST";
    FfinalizarAtendimentoCommand_Cache->Text = "TServerMethods1.\"finalizarAtendimento\"";
    FfinalizarAtendimentoCommand_Cache->Prepare(TServerMethods1_finalizarAtendimento_Cache, 1);
  }
  FfinalizarAtendimentoCommand_Cache->Parameters->Parameter[0]->Value->SetJSONValue(senha, FInstanceOwner);
  FfinalizarAtendimentoCommand_Cache->ExecuteCache(ARequestFilter);
  _di_IDSRestCachedJSONObject _resultIntf;
  {
  TDSRestCachedJSONObject* obj(new TDSRestCachedJSONObject(FfinalizarAtendimentoCommand_Cache->Parameters->Parameter[1]->Value->GetString()));
  obj->GetInterface(_resultIntf);
  }
  return _resultIntf;
}

TJSONObject* __fastcall TServerMethods1Client::verificarStatusSenha(TJSONObject* senha, const String& ARequestFilter)
{
  if (FverificarStatusSenhaCommand == NULL)
  {
    FverificarStatusSenhaCommand = FConnection->CreateCommand();
    FverificarStatusSenhaCommand->RequestType = "POST";
    FverificarStatusSenhaCommand->Text = "TServerMethods1.\"verificarStatusSenha\"";
    FverificarStatusSenhaCommand->Prepare(TServerMethods1_verificarStatusSenha, 1);
  }
  FverificarStatusSenhaCommand->Parameters->Parameter[0]->Value->SetJSONValue(senha, FInstanceOwner);
  FverificarStatusSenhaCommand->Execute(ARequestFilter);
  TJSONObject* result = (TJSONObject*)FverificarStatusSenhaCommand->Parameters->Parameter[1]->Value->GetJSONValue(FInstanceOwner);
  return result;
}

_di_IDSRestCachedJSONObject __fastcall TServerMethods1Client::verificarStatusSenha_Cache(TJSONObject* senha, const String& ARequestFilter)
{
  if (FverificarStatusSenhaCommand_Cache == NULL)
  {
    FverificarStatusSenhaCommand_Cache = FConnection->CreateCommand();
    FverificarStatusSenhaCommand_Cache->RequestType = "POST";
    FverificarStatusSenhaCommand_Cache->Text = "TServerMethods1.\"verificarStatusSenha\"";
    FverificarStatusSenhaCommand_Cache->Prepare(TServerMethods1_verificarStatusSenha_Cache, 1);
  }
  FverificarStatusSenhaCommand_Cache->Parameters->Parameter[0]->Value->SetJSONValue(senha, FInstanceOwner);
  FverificarStatusSenhaCommand_Cache->ExecuteCache(ARequestFilter);
  _di_IDSRestCachedJSONObject _resultIntf;
  {
  TDSRestCachedJSONObject* obj(new TDSRestCachedJSONObject(FverificarStatusSenhaCommand_Cache->Parameters->Parameter[1]->Value->GetString()));
  obj->GetInterface(_resultIntf);
  }
  return _resultIntf;
}

TJSONArray* __fastcall TServerMethods1Client::getSenhasAtivas(const String& ARequestFilter)
{
  if (FgetSenhasAtivasCommand == NULL)
  {
    FgetSenhasAtivasCommand = FConnection->CreateCommand();
    FgetSenhasAtivasCommand->RequestType = "GET";
    FgetSenhasAtivasCommand->Text = "TServerMethods1.getSenhasAtivas";
    FgetSenhasAtivasCommand->Prepare(TServerMethods1_getSenhasAtivas, 0);
  }
  FgetSenhasAtivasCommand->Execute(ARequestFilter);
  TJSONArray* result = (TJSONArray*)FgetSenhasAtivasCommand->Parameters->Parameter[0]->Value->GetJSONValue(FInstanceOwner);
  return result;
}

_di_IDSRestCachedJSONArray __fastcall TServerMethods1Client::getSenhasAtivas_Cache(const String& ARequestFilter)
{
  if (FgetSenhasAtivasCommand_Cache == NULL)
  {
    FgetSenhasAtivasCommand_Cache = FConnection->CreateCommand();
    FgetSenhasAtivasCommand_Cache->RequestType = "GET";
    FgetSenhasAtivasCommand_Cache->Text = "TServerMethods1.getSenhasAtivas";
    FgetSenhasAtivasCommand_Cache->Prepare(TServerMethods1_getSenhasAtivas_Cache, 0);
  }
  FgetSenhasAtivasCommand_Cache->ExecuteCache(ARequestFilter);
  _di_IDSRestCachedJSONArray _resultIntf;
  {
  TDSRestCachedJSONArray* obj(new TDSRestCachedJSONArray(FgetSenhasAtivasCommand_Cache->Parameters->Parameter[0]->Value->GetString()));
  obj->GetInterface(_resultIntf);
  }
  return _resultIntf;
}


__fastcall  TServerMethods1Client::TServerMethods1Client(TDSRestConnection *ARestConnection): TDSAdminRestClient(ARestConnection)
{
}

__fastcall  TServerMethods1Client::TServerMethods1Client(TDSRestConnection *ARestConnection, bool AInstanceOwner): TDSAdminRestClient(ARestConnection, AInstanceOwner)
{
}

__fastcall  TServerMethods1Client::~TServerMethods1Client()
{
  delete FrequisitarSenhaCommand;
  delete FrequisitarSenhaCommand_Cache;
  delete FchamarProximaSenhaCommand;
  delete FchamarProximaSenhaCommand_Cache;
  delete FfinalizarAtendimentoCommand;
  delete FfinalizarAtendimentoCommand_Cache;
  delete FverificarStatusSenhaCommand;
  delete FverificarStatusSenhaCommand_Cache;
  delete FgetSenhasAtivasCommand;
  delete FgetSenhasAtivasCommand_Cache;
}

