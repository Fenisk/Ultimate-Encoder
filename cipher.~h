//---------------------------------------------------------------------------

#ifndef cipherH
#define cipherH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <MPlayer.hpp>

//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TMemo *Text;
        TMemo *Cipher;
        TComboBox *TypeOfCipher;
        TButton *EncodeButton;
        TButton *CopyButton;
        TButton *DecodeButton;
        TEdit *EditShift;
        TLabel *ShiftText;
        TMediaPlayer *morse_sounds;
        TButton *morseButton;
        TButton *SaveMorse;
        TButton *StopMorse;
        void __fastcall TextClick(TObject *Sender);
        void __fastcall EncodeButtonClick(TObject *Sender);
        void __fastcall TypeOfCipherChange(TObject *Sender);
        void __fastcall morseButtonClick(TObject *Sender);
        void __fastcall TextKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall CipherKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall DecodeButtonClick(TObject *Sender);
        void __fastcall CopyButtonClick(TObject *Sender);
        void __fastcall StopMorseClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
