object frmPrincipal: TfrmPrincipal
  Left = 0
  Top = 0
  Caption = 'Painel do Atendente'
  ClientHeight = 401
  ClientWidth = 764
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Calibri'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 5
    Width = 39
    Height = 13
    Caption = 'Servidor'
  end
  object lbPorta: TLabel
    Left = 111
    Top = 5
    Width = 26
    Height = 13
    Caption = 'Porta'
  end
  object Label2: TLabel
    Left = 8
    Top = 51
    Width = 66
    Height = 33
    Caption = 'Senha'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -27
    Font.Name = 'Calibri'
    Font.Style = []
    ParentFont = False
  end
  object lbSenha: TLabel
    Left = 190
    Top = 96
    Width = 30
    Height = 163
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -133
    Font.Name = 'Calibri'
    Font.Style = []
    ParentFont = False
  end
  object edServidor: TEdit
    Left = 8
    Top = 24
    Width = 97
    Height = 21
    TabOrder = 0
    Text = '127.0.0.1'
    OnExit = edServidorExit
  end
  object edPorta: TEdit
    Left = 111
    Top = 24
    Width = 40
    Height = 21
    TabOrder = 1
    Text = '50000'
    OnExit = edPortaExit
  end
  object btnChamar: TButton
    Left = 190
    Top = 328
    Width = 163
    Height = 49
    Caption = 'Chamar'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -27
    Font.Name = 'Calibri'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
    OnClick = btnChamarClick
  end
  object btnFinalizar: TButton
    Left = 414
    Top = 328
    Width = 155
    Height = 49
    Caption = 'Finalizar'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -27
    Font.Name = 'Calibri'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
    OnClick = btnFinalizarClick
  end
end
