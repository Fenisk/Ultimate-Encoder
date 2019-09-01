object Form1: TForm1
  Left = 599
  Top = 538
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'Ultimate Encoder  v1.0'
  ClientHeight = 420
  ClientWidth = 1002
  Color = clBtnFace
  Font.Charset = EASTEUROPE_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = '@Arial Unicode MS'
  Font.Style = []
  OldCreateOrder = False
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 15
  object ShiftText: TLabel
    Left = 416
    Top = 72
    Width = 91
    Height = 21
    Caption = 'Shift Text by:'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = '@Arial Unicode MS'
    Font.Style = []
    ParentFont = False
    Visible = False
  end
  object Text: TMemo
    Left = 40
    Top = 56
    Width = 345
    Height = 289
    TabStop = False
    BevelOuter = bvNone
    Ctl3D = True
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = '@Arial Unicode MS'
    Font.Style = []
    Lines.Strings = (
      'Write your text to encrypt/decrypt')
    ParentCtl3D = False
    ParentFont = False
    ScrollBars = ssVertical
    TabOrder = 0
    OnClick = TextClick
    OnKeyDown = TextKeyDown
  end
  object Cipher: TMemo
    Left = 616
    Top = 56
    Width = 345
    Height = 289
    TabStop = False
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = '@Arial Unicode MS'
    Font.Style = []
    Lines.Strings = (
      'Your encrypted/decrypted text')
    ParentFont = False
    ScrollBars = ssVertical
    TabOrder = 1
    OnKeyDown = CipherKeyDown
  end
  object TypeOfCipher: TComboBox
    Left = 432
    Top = 16
    Width = 145
    Height = 29
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = '@Arial Unicode MS'
    Font.Style = []
    ItemHeight = 21
    ParentFont = False
    TabOrder = 2
    OnChange = TypeOfCipherChange
    Items.Strings = (
      'Caesar Cipher'
      'Morse Code'
      'ASCII Code'
      'Binary'
      'Hexadecimal'
      'Base64')
  end
  object EncodeButton: TButton
    Left = 440
    Top = 120
    Width = 121
    Height = 49
    Caption = 'Encode'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = '@Arial Unicode MS'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
    OnClick = EncodeButtonClick
  end
  object CopyButton: TButton
    Left = 440
    Top = 280
    Width = 121
    Height = 49
    Caption = 'Copy'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = '@Arial Unicode MS'
    Font.Style = []
    ParentFont = False
    TabOrder = 4
    OnClick = CopyButtonClick
  end
  object DecodeButton: TButton
    Left = 440
    Top = 200
    Width = 121
    Height = 49
    Caption = 'Decode'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = '@Arial Unicode MS'
    Font.Style = []
    ParentFont = False
    TabOrder = 5
    OnClick = DecodeButtonClick
  end
  object EditShift: TEdit
    Left = 512
    Top = 72
    Width = 73
    Height = 26
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = '@Arial Unicode MS'
    Font.Style = []
    ParentFont = False
    ParentShowHint = False
    ShowHint = False
    TabOrder = 6
    Text = '0'
    Visible = False
  end
  object morse_sounds: TMediaPlayer
    Left = 8
    Top = 8
    Width = 29
    Height = 30
    VisibleButtons = []
    Visible = False
    TabOrder = 7
  end
  object morseButton: TButton
    Left = 624
    Top = 16
    Width = 145
    Height = 33
    Caption = 'Play Sound'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = '@Arial Unicode MS'
    Font.Style = []
    ParentFont = False
    TabOrder = 8
    Visible = False
    OnClick = morseButtonClick
  end
  object SaveMorse: TButton
    Left = 720
    Top = 360
    Width = 145
    Height = 33
    Caption = 'Save'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = '@Arial Unicode MS'
    Font.Style = []
    ParentFont = False
    TabOrder = 9
    Visible = False
  end
  object StopMorse: TButton
    Left = 808
    Top = 16
    Width = 145
    Height = 33
    Caption = 'Stop'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = '@Arial Unicode MS'
    Font.Style = []
    ParentFont = False
    TabOrder = 10
    OnClick = StopMorseClick
  end
end
