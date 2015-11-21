// 
// Created by the DataSnap proxy generator.
// 21/11/2015 00:28:24
// 

#include "uCC.h"

  struct TDSRestParameterMetaData TSM_requisitarSenha[] =
  {
    {"", 4, 37, "TJSONObject"}
  };

  struct TDSRestParameterMetaData TSM_requisitarSenha_Cache[] =
  {
    {"", 4, 26, "String"}
  };

  struct TDSRestParameterMetaData TSM_chamarProximaSenha[] =
  {
    {"", 4, 37, "TJSONObject"}
  };

  struct TDSRestParameterMetaData TSM_chamarProximaSenha_Cache[] =
  {
    {"", 4, 26, "String"}
  };

  struct TDSRestParameterMetaData TSM_finalizarAtendimento[] =
  {
    {"senha", 1, 37, "TJSONObject"},
    {"", 4, 37, "TJSONObject"}
  };

  struct TDSRestParameterMetaData TSM_finalizarAtendimento_Cache[] =
  {
    {"senha", 1, 37, "TJSONObject"},
    {"", 4, 26, "String"}
  };

  struct TDSRestParameterMetaData TSM_finalizarAtendimentoById[] =
  {
    {"id", 1, 6, "Integer"}
  };

  struct TDSRestParameterMetaData TSM_verificarStatusSenha[] =
  {
    {"senha", 1, 37, "TJSONObject"},
    {"", 4, 37, "TJSONObject"}
  };

  struct TDSRestParameterMetaData TSM_verificarStatusSenha_Cache[] =
  {
    {"senha", 1, 37, "TJSONObject"},
    {"", 4, 26, "String"}
  };

  struct TDSRestParameterMetaData TSM_getSenhasAtivas[] =
  {
    {"", 4, 37, "TJSONArray"}
  };

  struct TDSRestParameterMetaData TSM_getSenhasAtivas_Cache[] =
  {
    {"", 4, 26, "String"}
  };

  struct TDSRestParameterMetaData TSM_verificarStatusSenhaById[] =
  {
    {"id", 1, 6, "Integer"},
    {"", 4, 37, "TJSONObject"}
  };

  struct TDSRestParameterMetaData TSM_verificarStatusSenhaById_Cache[] =
  {
    {"id", 1, 6, "Integer"},
    {"", 4, 26, "String"}
  };

TJSONObject* __fastcall TSMClient::requisitarSenha(const String& ARequestFilter)
{
  if (FrequisitarSenhaCommand == NULL)
  {
    FrequisitarSenhaCommand = FConnection->CreateCommand();
    FrequisitarSenhaCommand->RequestType = "GET";
    FrequisitarSenhaCommand->Text = "TSM.requisitarSenha";
    FrequisitarSenhaCommand->Prepare(TSM_requisitarSenha, 0);
  }
  FrequisitarSenhaCommand->Execute(ARequestFilter);
  TJSONObject* result = (TJSONObject*)FrequisitarSenhaCommand->Parameters->Parameter[0]->Value->GetJSONValue(FInstanceOwner);
  return result;
}

_di_IDSRestCachedJSONObject __fastcall TSMClient::requisitarSenha_Cache(const String& ARequestFilter)
{
  if (FrequisitarSenhaCommand_Cache == NULL)
  {
    FrequisitarSenhaCommand_Cache = FConnection->CreateCommand();
    FrequisitarSenhaCommand_Cache->RequestType = "GET";
    FrequisitarSenhaCommand_Cache->Text = "TSM.requisitarSenha";
    FrequisitarSenhaCommand_Cache->Prepare(TSM_requisitarSenha_Cache, 0);
  }
  FrequisitarSenhaCommand_Cache->ExecuteCache(ARequestFilter);
  _di_IDSRestCachedJSONObject _resultIntf;
  {
  TDSRestCachedJSONObject* obj(new TDSRestCachedJSONObject(FrequisitarSenhaCommand_Cache->Parameters->Parameter[0]->Value->GetString()));
  obj->GetInterface(_resultIntf);
  }
  return _resultIntf;
}

TJSONObject* __fastcall TSMClient::chamarProximaSenha(const String& ARequestFilter)
{
  if (FchamarProximaSenhaCommand == NULL)
  {
    FchamarProximaSenhaCommand = FConnection->CreateCommand();
    FchamarProximaSenhaCommand->RequestType = "GET";
    FchamarProximaSenhaCommand->Text = "TSM.chamarProximaSenha";
    FchamarProximaSenhaCommand->Prepare(TSM_chamarProximaSenha, 0);
  }
  FchamarProximaSenhaCommand->Execute(ARequestFilter);
  TJSONObject* result = (TJSONObject*)FchamarProximaSenhaCommand->Parameters->Parameter[0]->Value->GetJSONValue(FInstanceOwner);
  return result;
}

_di_IDSRestCachedJSONObject __fastcall TSMClient::chamarProximaSenha_Cache(const String& ARequestFilter)
{
  if (FchamarProximaSenhaCommand_Cache == NULL)
  {
    FchamarProximaSenhaCommand_Cache = FConnection->CreateCommand();
    FchamarProximaSenhaCommand_Cache->RequestType = "GET";
    FchamarProximaSenhaCommand_Cache->Text = "TSM.chamarProximaSenha";
    FchamarProximaSenhaCommand_Cache->Prepare(TSM_chamarProximaSenha_Cache, 0);
  }
  FchamarProximaSenhaCommand_Cache->ExecuteCache(ARequestFilter);
  _di_IDSRestCachedJSONObject _resultIntf;
  {
  TDSRestCachedJSONObject* obj(new TDSRestCachedJSONObject(FchamarProximaSenhaCommand_Cache->Parameters->Parameter[0]->Value->GetString()));
  obj->GetInterface(_resultIntf);
  }
  return _resultIntf;
}

TJSONObject* __fastcall TSMClient::finalizarAtendimento(TJSONObject* senha, const String& ARequestFilter)
{
  if (FfinalizarAtendimentoCommand == NULL)
  {
    FfinalizarAtendimentoCommand = FConnection->CreateCommand();
    FfinalizarAtendimentoCommand->RequestType = "POST";
    FfinalizarAtendimentoCommand->Text = "TSM.\"finalizarAtendimento\"";
    FfinalizarAtendimentoCommand->Prepare(TSM_finalizarAtendimento, 1);
  }
  FfinalizarAtendimentoCommand->Parameters->Parameter[0]->Value->SetJSONValue(senha, FInstanceOwner);
  FfinalizarAtendimentoCommand->Execute(ARequestFilter);
  TJSONObject* result = (TJSONObject*)FfinalizarAtendimentoCommand->Parameters->Parameter[1]->Value->GetJSONValue(FInstanceOwner);
  return result;
}

_di_IDSRestCachedJSONObject __fastcall TSMClient::finalizarAtendimento_Cache(TJSONObject* senha, const String& ARequestFilter)
{
  if (FfinalizarAtendimentoCommand_Cache == NULL)
  {
    FfinalizarAtendimentoCommand_Cache = FConnection->CreateCommand();
    FfinalizarAtendimentoCommand_Cache->RequestType = "POST";
    FfinalizarAtendimentoCommand_Cache->Text = "TSM.\"finalizarAtendimento\"";
    FfinalizarAtendimentoCommand_Cache->Prepare(TSM_finalizarAtendimento_Cache, 1);
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

void __fastcall TSMClient::finalizarAtendimentoById(int id)
{
  if (FfinalizarAtendimentoByIdCommand == NULL)
  {
    FfinalizarAtendimentoByIdCommand = FConnection->CreateCommand();
    FfinalizarAtendimentoByIdCommand->RequestType = "GET";
    FfinalizarAtendimentoByIdCommand->Text = "TSM.finalizarAtendimentoById";
    FfinalizarAtendimentoByIdCommand->Prepare(TSM_finalizarAtendimentoById, 0);
  }
  FfinalizarAtendimentoByIdCommand->Parameters->Parameter[0]->Value->SetInt32(id);
  FfinalizarAtendimentoByIdCommand->Execute();
}

TJSONObject* __fastcall TSMClient::verificarStatusSenha(TJSONObject* senha, const String& ARequestFilter)
{
  if (FverificarStatusSenhaCommand == NULL)
  {
    FverificarStatusSenhaCommand = FConnection->CreateCommand();
    FverificarStatusSenhaCommand->RequestType = "POST";
    FverificarStatusSenhaCommand->Text = "TSM.\"verificarStatusSenha\"";
    FverificarStatusSenhaCommand->Prepare(TSM_verificarStatusSenha, 1);
  }
  FverificarStatusSenhaCommand->Parameters->Parameter[0]->Value->SetJSONValue(senha, FInstanceOwner);
  FverificarStatusSenhaCommand->Execute(ARequestFilter);
  TJSONObject* result = (TJSONObject*)FverificarStatusSenhaCommand->Parameters->Parameter[1]->Value->GetJSONValue(FInstanceOwner);
  return result;
}

_di_IDSRestCachedJSONObject __fastcall TSMClient::verificarStatusSenha_Cache(TJSONObject* senha, const String& ARequestFilter)
{
  if (FverificarStatusSenhaCommand_Cache == NULL)
  {
    FverificarStatusSenhaCommand_Cache = FConnection->CreateCommand();
    FverificarStatusSenhaCommand_Cache->RequestType = "POST";
    FverificarStatusSenhaCommand_Cache->Text = "TSM.\"verificarStatusSenha\"";
    FverificarStatusSenhaCommand_Cache->Prepare(TSM_verificarStatusSenha_Cache, 1);
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

TJSONArray* __fastcall TSMClient::getSenhasAtivas(const String& ARequestFilter)
{
  if (FgetSenhasAtivasCommand == NULL)
  {
    FgetSenhasAtivasCommand = FConnection->CreateCommand();
    FgetSenhasAtivasCommand->RequestType = "GET";
    FgetSenhasAtivasCommand->Text = "TSM.getSenhasAtivas";
    FgetSenhasAtivasCommand->Prepare(TSM_getSenhasAtivas, 0);
  }
  FgetSenhasAtivasCommand->Execute(ARequestFilter);
  TJSONArray* result = (TJSONArray*)FgetSenhasAtivasCommand->Parameters->Parameter[0]->Value->GetJSONValue(FInstanceOwner);
  return result;
}

_di_IDSRestCachedJSONArray __fastcall TSMClient::getSenhasAtivas_Cache(const String& ARequestFilter)
{
  if (FgetSenhasAtivasCommand_Cache == NULL)
  {
    FgetSenhasAtivasCommand_Cache = FConnection->CreateCommand();
    FgetSenhasAtivasCommand_Cache->RequestType = "GET";
    FgetSenhasAtivasCommand_Cache->Text = "TSM.getSenhasAtivas";
    FgetSenhasAtivasCommand_Cache->Prepare(TSM_getSenhasAtivas_Cache, 0);
  }
  FgetSenhasAtivasCommand_Cache->ExecuteCache(ARequestFilter);
  _di_IDSRestCachedJSONArray _resultIntf;
  {
  TDSRestCachedJSONArray* obj(new TDSRestCachedJSONArray(FgetSenhasAtivasCommand_Cache->Parameters->Parameter[0]->Value->GetString()));
  obj->GetInterface(_resultIntf);
  }
  return _resultIntf;
}

TJSONObject* __fastcall TSMClient::verificarStatusSenhaById(int id, const String& ARequestFilter)
{
  if (FverificarStatusSenhaByIdCommand == NULL)
  {
    FverificarStatusSenhaByIdCommand = FConnection->CreateCommand();
    FverificarStatusSenhaByIdCommand->RequestType = "GET";
    FverificarStatusSenhaByIdCommand->Text = "TSM.verificarStatusSenhaById";
    FverificarStatusSenhaByIdCommand->Prepare(TSM_verificarStatusSenhaById, 1);
  }
  FverificarStatusSenhaByIdCommand->Parameters->Parameter[0]->Value->SetInt32(id);
  FverificarStatusSenhaByIdCommand->Execute(ARequestFilter);
  TJSONObject* result = (TJSONObject*)FverificarStatusSenhaByIdCommand->Parameters->Parameter[1]->Value->GetJSONValue(FInstanceOwner);
  return result;
}

_di_IDSRestCachedJSONObject __fastcall TSMClient::verificarStatusSenhaById_Cache(int id, const String& ARequestFilter)
{
  if (FverificarStatusSenhaByIdCommand_Cache == NULL)
  {
    FverificarStatusSenhaByIdCommand_Cache = FConnection->CreateCommand();
    FverificarStatusSenhaByIdCommand_Cache->RequestType = "GET";
    FverificarStatusSenhaByIdCommand_Cache->Text = "TSM.verificarStatusSenhaById";
    FverificarStatusSenhaByIdCommand_Cache->Prepare(TSM_verificarStatusSenhaById_Cache, 1);
  }
  FverificarStatusSenhaByIdCommand_Cache->Parameters->Parameter[0]->Value->SetInt32(id);
  FverificarStatusSenhaByIdCommand_Cache->ExecuteCache(ARequestFilter);
  _di_IDSRestCachedJSONObject _resultIntf;
  {
  TDSRestCachedJSONObject* obj(new TDSRestCachedJSONObject(FverificarStatusSenhaByIdCommand_Cache->Parameters->Parameter[1]->Value->GetString()));
  obj->GetInterface(_resultIntf);
  }
  return _resultIntf;
}


__fastcall  TSMClient::TSMClient(TDSRestConnection *ARestConnection): TDSAdminRestClient(ARestConnection)
{
}

__fastcall  TSMClient::TSMClient(TDSRestConnection *ARestConnection, bool AInstanceOwner): TDSAdminRestClient(ARestConnection, AInstanceOwner)
{
}

__fastcall  TSMClient::~TSMClient()
{
  delete FrequisitarSenhaCommand;
  delete FrequisitarSenhaCommand_Cache;
  delete FchamarProximaSenhaCommand;
  delete FchamarProximaSenhaCommand_Cache;
  delete FfinalizarAtendimentoCommand;
  delete FfinalizarAtendimentoCommand_Cache;
  delete FfinalizarAtendimentoByIdCommand;
  delete FverificarStatusSenhaCommand;
  delete FverificarStatusSenhaCommand_Cache;
  delete FgetSenhasAtivasCommand;
  delete FgetSenhasAtivasCommand_Cache;
  delete FverificarStatusSenhaByIdCommand;
  delete FverificarStatusSenhaByIdCommand_Cache;
}

