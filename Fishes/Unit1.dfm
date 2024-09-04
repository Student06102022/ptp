object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 445
  ClientWidth = 613
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Image1: TImage
    Left = 40
    Top = 80
    Width = 521
    Height = 345
    Center = True
    Proportional = True
    Stretch = True
  end
  object Label1: TLabel
    Left = 344
    Top = 24
    Width = 30
    Height = 13
    Caption = #1042#1088#1077#1084#1103
  end
  object Label2: TLabel
    Left = 400
    Top = 24
    Width = 31
    Height = 13
    Caption = 'Label2'
  end
  object Label3: TLabel
    Left = 40
    Top = 24
    Width = 53
    Height = 13
    Caption = #1063#1080#1089#1083#1086' '#1088#1099#1073
  end
  object Label4: TLabel
    Left = 156
    Top = 24
    Width = 14
    Height = 13
    Caption = 'y='
  end
  object Label5: TLabel
    Left = 40
    Top = 48
    Width = 53
    Height = 13
    Caption = #1063#1080#1089#1083#1086' '#1088#1099#1073
  end
  object Button1: TButton
    Left = 256
    Top = 19
    Width = 75
    Height = 25
    Caption = 'Create aque'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 486
    Top = 8
    Width = 75
    Height = 25
    Caption = 'Run'
    TabOrder = 1
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 486
    Top = 39
    Width = 75
    Height = 25
    Caption = 'Stop'
    TabOrder = 2
    OnClick = Button3Click
  end
  object Edit1: TEdit
    Left = 99
    Top = 21
    Width = 49
    Height = 21
    TabOrder = 3
    Text = '3'
  end
  object Edit2: TEdit
    Left = 176
    Top = 21
    Width = 41
    Height = 21
    TabOrder = 4
    Text = '20'
  end
  object Edit3: TEdit
    Left = 99
    Top = 48
    Width = 49
    Height = 21
    TabOrder = 5
    Text = '1'
  end
  object Edit4: TEdit
    Left = 176
    Top = 48
    Width = 41
    Height = 21
    TabOrder = 6
    Text = '80'
  end
  object CheckBox1: TCheckBox
    Left = 256
    Top = 50
    Width = 49
    Height = 17
    Caption = 'Look'
    TabOrder = 7
  end
  object CheckBox2: TCheckBox
    Left = 311
    Top = 50
    Width = 97
    Height = 17
    Caption = #1045#1089#1090#1100' '#1082#1072#1088#1087#1086#1074
    TabOrder = 8
  end
  object Timer1: TTimer
    Enabled = False
    Interval = 80
    OnTimer = Timer1Timer
    Left = 16
    Top = 400
  end
end
