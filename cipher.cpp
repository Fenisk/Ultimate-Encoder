//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "cipher.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

AnsiString TextToEncrypt = "";
AnsiString EncryptedText = "";
AnsiString TextToDecode = "";
AnsiString DecodedText = "";
int count = 0;
TForm1 *Form1;
HANDLE thread1;
//CAESAR FUNCTION
void caesar(int nrOfRows, int key, TMemo *Text, TMemo *Cipher)
{
	for(int i = 0; i < nrOfRows; i++)
	{
                TextToEncrypt = Text -> Lines -> Strings[i];
		for (int j = 1; j <= TextToEncrypt.Length(); j++)
		{
			if ((int)TextToEncrypt[j]>64 && (int)TextToEncrypt[j]<91)
			{
				if ((int)TextToEncrypt[j] + key > 90)
				{
					TextToEncrypt[j] = (char)(64 + key - (90 - (int)TextToEncrypt[j]));
				}
				else
				{
					TextToEncrypt[j] = (char)((int)TextToEncrypt[j] + key);
				}
			}

			else if((int)TextToEncrypt[j]>96 && (int)TextToEncrypt[j]<123)
			{
				if ((int)TextToEncrypt[j] + key > 122)
				{
					TextToEncrypt[j] = (char)(96 + key - (122 - (int)TextToEncrypt[j]));
				}
				else
				{
					TextToEncrypt[j] = (char)((int)TextToEncrypt[j] + key);
				}

			}
			else
                        {
                        }

		}
                Cipher -> Lines -> Add(TextToEncrypt);
	}

}
void morse(int nrOfRows, TMemo *Text, TMemo *Cipher)
{
        AnsiString MorseEncoded="";
        for(int i = 0; i < nrOfRows; i++)
	{
                TextToEncrypt = Text -> Lines -> Strings[i];
                MorseEncoded="";

		for (int j = 1; j <= TextToEncrypt.Length(); j++)
		{
			switch (TextToEncrypt[j])
			{
			case 'A':
				MorseEncoded = MorseEncoded + ".-" + "/";
				break;
                        case 'a':
				MorseEncoded = MorseEncoded + ".-" + "/";
				break;
			case 'B':
				MorseEncoded = MorseEncoded + "-..." + "/";
				break;
                        case 'b':
				MorseEncoded = MorseEncoded + "-..." + "/";
				break;
			case 'C':
				MorseEncoded = MorseEncoded + "-.-." + "/";
				break;
                        case 'c':
				MorseEncoded = MorseEncoded + "-.-." + "/";
				break;
			case 'D':
				MorseEncoded = MorseEncoded + "-.." + "/";
				break;
                        case 'd':
				MorseEncoded = MorseEncoded + "-.." + "/";
				break;
                        case 'E':
				MorseEncoded = MorseEncoded + "." + "/";
				break;
                        case 'e':
				MorseEncoded = MorseEncoded + "." + "/";
				break;
			case 'F':
				MorseEncoded = MorseEncoded + "..-." + "/";
				break;
                        case 'f':
				MorseEncoded = MorseEncoded + "..-." + "/";
				break;
			case 'G':
				MorseEncoded = MorseEncoded + "--." + "/";
				break;
                        case 'g':
				MorseEncoded = MorseEncoded + "--." + "/";
				break;
			case 'H':
				MorseEncoded = MorseEncoded + "...." + "/";
				break;
                        case 'h':
				MorseEncoded = MorseEncoded + "...." + "/";
				break;
			case 'I':
				MorseEncoded = MorseEncoded + ".." + "/";
				break;
                        case 'i':
				MorseEncoded = MorseEncoded + ".." + "/";
				break;
			case 'J':
				MorseEncoded = MorseEncoded + ".---" + "/";
				break;
                        case 'j':
				MorseEncoded = MorseEncoded + ".---" + "/";
				break;
			case 'K':
				MorseEncoded = MorseEncoded + "-.-" + "/";
				break;
                        case 'k':
				MorseEncoded = MorseEncoded + "-.-" + "/";
				break;
			case 'L':
				MorseEncoded = MorseEncoded + ".-.." + "/";
				break;
                        case 'l':
				MorseEncoded = MorseEncoded + ".-.." + "/";
				break;
			case 'M':
				MorseEncoded = MorseEncoded + "--" + "/";
				break;
                        case 'm':
				MorseEncoded = MorseEncoded + "--" + "/";
				break;
			case 'N':
				MorseEncoded = MorseEncoded + "-." + "/";
				break;
                        case 'n':
				MorseEncoded = MorseEncoded + "-." + "/";
				break;
			case 'O':
				MorseEncoded = MorseEncoded + "---" + "/";
				break;
                        case 'o':
				MorseEncoded = MorseEncoded + "---" + "/";
				break;
			case 'P':
				MorseEncoded = MorseEncoded + ".--." + "/";
				break;
                        case 'p':
				MorseEncoded = MorseEncoded + ".--." + "/";
				break;
			case 'Q':
				MorseEncoded = MorseEncoded + "--.-" + "/";
				break;
                        case 'q':
				MorseEncoded = MorseEncoded + "--.-" + "/";
				break;
			case 'R':
				MorseEncoded = MorseEncoded + ".-." + "/";
				break;
                        case 'r':
				MorseEncoded = MorseEncoded + ".-." + "/";
				break;
			case 'S':
				MorseEncoded = MorseEncoded + "..." + "/";
				break;
                        case 's':
				MorseEncoded = MorseEncoded + "..." + "/";
				break;
			case 'T':
				MorseEncoded = MorseEncoded + "-" + "/";
				break;
                        case 't':
				MorseEncoded = MorseEncoded + "-" + "/";
				break;
			case 'U':
				MorseEncoded = MorseEncoded + "..-" + "/";
				break;
                        case 'u':
				MorseEncoded = MorseEncoded + "..-" + "/";
				break;
			case 'V':
				MorseEncoded = MorseEncoded + "...-" + "/";
				break;
                        case 'v':
				MorseEncoded = MorseEncoded + "...-" + "/";
				break;
			case 'W':
				MorseEncoded = MorseEncoded + ".--" + "/";
				break;
                        case 'w':
				MorseEncoded = MorseEncoded + ".--" + "/";
				break;
			case 'X':
				MorseEncoded = MorseEncoded + "-..-" + "/";
				break;
                        case 'x':
				MorseEncoded = MorseEncoded + "-..-" + "/";
				break;
			case 'Y':
				MorseEncoded = MorseEncoded + "-.--" + "/";
				break;
                        case 'y':
				MorseEncoded = MorseEncoded + "-.--" + "/";
				break;
			case 'Z':
				MorseEncoded = MorseEncoded + "--.." + "/";
				break;
                        case 'z':
				MorseEncoded = MorseEncoded + "--.." + "/";
				break;
			case '1':
				MorseEncoded = MorseEncoded + ".----" + "/";
				break;
			case '2':
				MorseEncoded = MorseEncoded + "..---" + "/";
				break;
			case '3':
				MorseEncoded = MorseEncoded + "...--" + "/";
				break;
			case '4':
				MorseEncoded = MorseEncoded + "....-" + "/";
				break;
			case '5':
				MorseEncoded = MorseEncoded + "....." + "/";
				break;
			case '6':
				MorseEncoded = MorseEncoded + "-...." + "/";
				break;
			case '7':
				MorseEncoded = MorseEncoded + "--..." + "/";
				break;
			case '8':
				MorseEncoded = MorseEncoded + "---.." + "/";
				break;
			case '9':
				MorseEncoded = MorseEncoded + "----." + "/";
				break;
			case '0':
				MorseEncoded = MorseEncoded + "-----" + "/";
				break;
                        case ' ':
                                MorseEncoded = MorseEncoded + "/";
                                break;
			}
		}

                Cipher -> Lines -> Add(MorseEncoded);
	}
}
void PlaySound(AnsiString letter, TMediaPlayer *morse_sounds)
{
        Application -> ProcessMessages();
        morse_sounds -> FileName = "morse_sound/" + letter + "_morse_code.wav";
        morse_sounds -> Open();
        morse_sounds -> Wait = true;
        morse_sounds -> Play();
        morse_sounds -> FileName = "morse_sound/short_silence.wav";
        morse_sounds -> Open();
        morse_sounds -> Wait = true;
        morse_sounds -> Play();

}
void morseSND(int nrOfRows, TMemo *Text, TMemo *Cipher, TMediaPlayer *morse_sounds, TButton *StopMorse)
{
        TextToEncrypt = "";
        for(int i = 0; i < nrOfRows; i++)
	{
                TextToEncrypt += Text -> Lines -> Strings[i];
        }
        for (int j = 1; j <= TextToEncrypt.Length(); j++)
        {
                Application -> ProcessMessages();
                if (TextToEncrypt[j]==' ')
                {
                        morse_sounds -> FileName = "morse_sound/long_silence.wav";
                        morse_sounds -> Open();
                        morse_sounds -> Wait = true;
                        morse_sounds -> Play();
                }
                else
                {
                        PlaySound(TextToEncrypt[j], morse_sounds);
                }
        }
}
void ASCII(int nrOfRows,TMemo *Text,TMemo *Cipher)
{
        EncryptedText="";
        for(int i = 0; i < nrOfRows; i++)
	{
                TextToEncrypt = TextToEncrypt + Text -> Lines -> Strings[i];
        }
        for (int j = 1; j <= TextToEncrypt.Length(); j++)
        {
                EncryptedText = EncryptedText + (int)TextToEncrypt[j] + " ";
        }
        Cipher -> Lines -> Add(EncryptedText);
}
void binary(int nrOfRows, TMemo *Text, TMemo *Cipher)
{
        EncryptedText = "";
        int binary = 0;
        for (int i = 0; i < nrOfRows; i++)
        {
                TextToEncrypt = Text -> Lines -> Strings[i];
                for(int j = 1; j <= TextToEncrypt.Length(); j++)
                {
                        int tab[8] = {0};
                        binary = (int)TextToEncrypt[j];
                        for(int g = 0; g < 8; g++)
                        {
                                if (binary == 0)
                                {
                                        break;
                                }
                                tab[g] = binary%2;
                                binary = binary/2;
                        }
                        for (int g = 7; g >= 0; g--)
                        {
                                EncryptedText = EncryptedText + tab[g];
                        }
                        EncryptedText = EncryptedText + " ";
                }
                Cipher -> Lines -> Add(EncryptedText);
                EncryptedText = "";
        }
}
void hexagonal(int nrOfRows, TMemo *Text, TMemo *Cipher)
{
        EncryptedText="";
        for (int i = 0; i < nrOfRows; i++)
        {
                TextToEncrypt = Text -> Lines -> Strings[i];
                for(int j = 1; j <= TextToEncrypt.Length(); j++)
                {
                        int help;
                        int tab[2] = { 0 };
                        help = (int)TextToEncrypt[j];
                        for (int g=1; g >= 0; g--)
                        {
                                tab[g] = help % 16;
                                help = help / 16;
                        }
                        for (int h = 0; h < 2; h++)
                        {
                                switch (tab[h])
                                {
                                case 10:
                                        EncryptedText = EncryptedText + "A";
                                        break;
                                case 11:
                                        EncryptedText = EncryptedText + "B";
                                        break;
                                case 12:
                                        EncryptedText = EncryptedText + "C";
                                        break;
                                case 13:
                                        EncryptedText = EncryptedText + "D";
                                        break;
                                case 14:
                                        EncryptedText = EncryptedText + "E";
                                        break;
                                case 15:
                                        EncryptedText = EncryptedText + "F";
			       	        break;
                                default:
                                        EncryptedText = EncryptedText + tab[h];
                                        break;
                                }
		        }
                        EncryptedText = EncryptedText + " ";
                }
                Cipher -> Lines -> Add(EncryptedText);
                EncryptedText="";
        }
}
void Base64(int nrOfRows, TMemo *Text, TMemo *Cipher)
{
        EncryptedText = "";
        TextToEncrypt = "";
        for(int i=0; i < nrOfRows; i++)
        {
                TextToEncrypt = TextToEncrypt + Text -> Lines -> Strings[i];
        }
                AnsiString binary = "";
                //CREATING A BINARY STRING
                for (int j = 1; j <= TextToEncrypt.Length(); j++)
                {
                        //HELP = ASCII DECIMAL CHARACTER
                        int help;
                        help = (int)TextToEncrypt[j];

                        //BINARY ARRAY WITH 8 BITS
                        int tab_binary[8] = { 0 };

                        //FILLING BINARY ARRAY
                        for (int g = 7; g >= 0; g--)
                        {
                                tab_binary[g] = help % 2;
                                help = help / 2;
                        }
			
                        //FROM ARRAY TO STRING
                        for (int k = 0; k < 8; k++)
                        {
                                binary = binary + tab_binary[k];
                        }
                }

                //ADDING EXTRA 0 TO LAST SEGMENT
                while (binary.Length() % 6 != 0)
                {
                        binary = binary + "0";
                }

                //ADDING "=" IF NECESSERY
                while (binary.Length() % 24 != 0)
                {
                        binary = binary + "=";
                }

                for(int f = 1; f <= binary.Length(); f = f + 6)
                {
                        if (binary[f] == '=' && binary[f + 1] == '=' && binary[f + 2] == '=' && binary[f + 3] == '=' && binary[f + 4] == '=' && binary[f + 5] == '=')
                        {
                                EncryptedText = EncryptedText + "=";
                        }
                        else
                        {
                                int to_decimal=0;
                                int first = binary[f] - '0';
                                int second = binary[f+1] - '0';
                                int third = binary[f+2] - '0';
                                int fourth = binary[f+3] - '0';
                                int fifth = binary[f+4] - '0';
                                int sixth = binary[f+5] - '0';
                                to_decimal = 32 * first + 16 * second + 8 * third + 4 * fourth + 2 * fifth + 1 * sixth;
                                switch (to_decimal)
                                {
                                case 0:
                                        EncryptedText = EncryptedText + "A";
                                        break;
                                case 1:
			       	        EncryptedText = EncryptedText + "B";
                                        break;
                                case 2:
                                        EncryptedText = EncryptedText + "C";
                                        break;
                                case 3:
                                        EncryptedText = EncryptedText + "D";
                                        break;
                                case 4:
                                        EncryptedText = EncryptedText + "E";
                                        break;
                                case 5:
                                        EncryptedText = EncryptedText + "F";
                                        break;
                                case 6:
                                        EncryptedText = EncryptedText + "G";
                                        break;
                                case 7:
                                        EncryptedText = EncryptedText + "H";
                                        break;
                                case 8:
                                        EncryptedText = EncryptedText + "I";
                                        break;
                                case 9:
                                        EncryptedText = EncryptedText + "J";
                                        break;
                                case 10:
                                        EncryptedText = EncryptedText + "K";
                                        break;
                                case 11:
                                        EncryptedText = EncryptedText + "L";
                                        break;
                                case 12:
                                        EncryptedText = EncryptedText + "M";
                                        break;
                                case 13:
                                        EncryptedText = EncryptedText + "N";
                                        break;
                                case 14:
                                        EncryptedText = EncryptedText + "O";
                                        break;
                                case 15:
                                        EncryptedText = EncryptedText + "P";
                                        break;
                                case 16:
                                        EncryptedText = EncryptedText + "Q";
                                        break;
                                case 17:
                                        EncryptedText = EncryptedText + "R";
                                        break;
                                case 18:
                                        EncryptedText = EncryptedText + "S";
                                        break;
                                case 19:
                                        EncryptedText = EncryptedText + "T";
                                        break;
                                case 20:
                                        EncryptedText = EncryptedText + "U";
                                        break;
                                case 21:
                                        EncryptedText = EncryptedText + "V";
                                        break;
                                case 22:
                                        EncryptedText = EncryptedText + "W";
                                        break;
                                case 23:
                                        EncryptedText = EncryptedText + "X";
                                        break;
                                case 24:
                                        EncryptedText = EncryptedText + "Y";
                                        break;
                                case 25:
                                        EncryptedText = EncryptedText + "Z";
                                        break;
                                case 26:
                                        EncryptedText = EncryptedText + "a";
                                        break;
                                case 27:
                                        EncryptedText = EncryptedText + "b";
                                        break;
                                case 28:
                                        EncryptedText = EncryptedText + "c";
                                        break;
                                case 29:
                                        EncryptedText = EncryptedText + "d";
                                        break;
                                case 30:
                                        EncryptedText = EncryptedText + "e";
                                        break;
                                case 31:
                                        EncryptedText = EncryptedText + "f";
                                        break;
                                case 32:
                                        EncryptedText = EncryptedText + "g";
                                        break;
                                case 33:
                                        EncryptedText = EncryptedText + "h";
                                        break;
                                case 34:
                                        EncryptedText = EncryptedText + "i";
                                        break;
                                case 35:
                                        EncryptedText = EncryptedText + "j";
                                        break;
                                case 36:
                                        EncryptedText = EncryptedText + "k";
                                        break;
                                case 37:
                                        EncryptedText = EncryptedText + "l";
                                        break;
                                case 38:
                                        EncryptedText = EncryptedText + "m";
                                        break;
                                case 39:
                                        EncryptedText = EncryptedText + "n";
                                        break;
                                case 40:
                                        EncryptedText = EncryptedText + "o";
                                        break;
                                case 41:
                                        EncryptedText = EncryptedText + "p";
                                        break;
                                case 42:
                                        EncryptedText = EncryptedText + "q";
                                        break;
                                case 43:
                                        EncryptedText = EncryptedText + "r";
                                        break;
                                case 44:
                                        EncryptedText = EncryptedText + "s";
                                        break;
                                case 45:
                                        EncryptedText = EncryptedText + "t";
                                        break;
                                case 46:
                                        EncryptedText = EncryptedText + "u";
                                        break;
                                case 47:
                                        EncryptedText = EncryptedText + "v";
                                        break;
                                case 48:
                                        EncryptedText = EncryptedText + "w";
                                        break;
                                case 49:
                                        EncryptedText = EncryptedText + "x";
                                        break;
                                case 50:
                                        EncryptedText = EncryptedText + "y";
                                        break;
                                case 51:
                                        EncryptedText = EncryptedText + "z";
                                        break;
                                case 52:
                                        EncryptedText = EncryptedText + "0";
                                        break;
                                case 53:
                                        EncryptedText = EncryptedText + "1";
                                        break;
                                case 54:
                                        EncryptedText = EncryptedText + "2";
                                        break;
                                case 55:
                                        EncryptedText = EncryptedText + "3";
                                        break;
                                case 56:
                                        EncryptedText = EncryptedText + "4";
                                        break;
                                case 57:
                                        EncryptedText = EncryptedText + "5";
                                        break;
                                case 58:
                                        EncryptedText = EncryptedText + "6";
                                        break;
                                case 59:
                                        EncryptedText = EncryptedText + "7";
                                        break;
                                case 60:
                                        EncryptedText = EncryptedText + "8";
                                        break;
                                case 61:
                                        EncryptedText = EncryptedText + "9";
                                        break;
                                case 62:
                                        EncryptedText = EncryptedText + "+";
                                        break;
                                case 63:
                                        EncryptedText = EncryptedText + "/";
                                        break;
                                default:
                                        break;
                                }
                        }
                }
                Cipher -> Lines -> Add(EncryptedText);
}
void de_morse(int nrOfRows, TMemo *Text, TMemo *Cipher)
{
        AnsiString MorseDecoded="";
        TextToDecode = "";
        for(int i = 0; i < nrOfRows; i++)
	{
                TextToDecode = TextToDecode + Text -> Lines -> Strings[i];
        }
        for (int j = 1; j <= TextToDecode.Length();)
        {
                if (TextToDecode[j]=='/')
                {
                        MorseDecoded = MorseDecoded + " ";
                        j++;
                }
                else
                {
                        AnsiString Help = "";
                        while (TextToDecode[j] != '/')
                        {
                                Help = Help + TextToDecode[j];
                                j++;
                        }
                        j++;
                        if (Help == ".-")       MorseDecoded = MorseDecoded + "A";
                        else if (Help == "-...") MorseDecoded = MorseDecoded + "B";
                        else if (Help == "-.-.") MorseDecoded = MorseDecoded + "C";
                        else if (Help == "-..") MorseDecoded = MorseDecoded + "D";
                        else if (Help == ".") MorseDecoded = MorseDecoded + "E";
                        else if (Help == "..-.") MorseDecoded = MorseDecoded + "F";
                        else if (Help == "--.") MorseDecoded = MorseDecoded + "G";
                        else if (Help == "....") MorseDecoded = MorseDecoded + "H";
                        else if (Help == "..") MorseDecoded = MorseDecoded + "I";
                        else if (Help == ".---") MorseDecoded = MorseDecoded + "J";
                        else if (Help == "-.-") MorseDecoded = MorseDecoded + "K";
                        else if (Help == ".-..") MorseDecoded = MorseDecoded + "L";
                        else if (Help == "--") MorseDecoded = MorseDecoded + "M";
                        else if (Help == "-.") MorseDecoded = MorseDecoded + "N";
                        else if (Help == "---") MorseDecoded = MorseDecoded + "O";
                        else if (Help == ".--.") MorseDecoded = MorseDecoded + "P";
                        else if (Help == "--.-") MorseDecoded = MorseDecoded + "Q";
                        else if (Help == ".-.") MorseDecoded = MorseDecoded + "R";
                        else if (Help == "...") MorseDecoded = MorseDecoded + "S";
                        else if (Help == "-") MorseDecoded = MorseDecoded + "T";
                        else if (Help == "..-") MorseDecoded = MorseDecoded + "U";
                        else if (Help == "...-") MorseDecoded = MorseDecoded + "V";
                        else if (Help == ".--") MorseDecoded = MorseDecoded + "W";
                        else if (Help == "-..-") MorseDecoded = MorseDecoded + "X";
                        else if (Help == "-.--") MorseDecoded = MorseDecoded + "Y";
                        else if (Help == "--..") MorseDecoded = MorseDecoded + "Z";
                        else if (Help == ".----") MorseDecoded = MorseDecoded + "1";
                        else if (Help == "..---") MorseDecoded = MorseDecoded + "2";
                        else if (Help == "...--") MorseDecoded = MorseDecoded + "3";
                        else if (Help == "....-") MorseDecoded = MorseDecoded + "4";
                        else if (Help == ".....") MorseDecoded = MorseDecoded + "5";
                        else if (Help == "-....") MorseDecoded = MorseDecoded + "6";
                        else if (Help == "--...") MorseDecoded = MorseDecoded + "7";
                        else if (Help == "---..") MorseDecoded = MorseDecoded + "8";
                        else if (Help == "----.") MorseDecoded = MorseDecoded + "9";
                        else if (Help == "-----") MorseDecoded = MorseDecoded + "0";
                        else if (Help == ".-.-.-") MorseDecoded = MorseDecoded + ".";
                        else if (Help == "--..--") MorseDecoded = MorseDecoded + ",";
                        else if (Help == ".----.") MorseDecoded = MorseDecoded + "'";
                        else if (Help == ".-..-.") MorseDecoded = MorseDecoded + "\"";
                        else if (Help == "..--.-") MorseDecoded = MorseDecoded + "_";
                        else if (Help == "---...") MorseDecoded = MorseDecoded + ":";
                        else if (Help == "-.-.-.") MorseDecoded = MorseDecoded + ";";
                        else if (Help == "..--..") MorseDecoded = MorseDecoded + "?";
                        else if (Help == "-.-.--") MorseDecoded = MorseDecoded + "!";
                        else if (Help == "-....-") MorseDecoded = MorseDecoded + "-";
                        else if (Help == ".-.-.") MorseDecoded = MorseDecoded + "+";
                        else if (Help == "-..-.") MorseDecoded = MorseDecoded + "/";
                        else if (Help == "-.--.") MorseDecoded = MorseDecoded + "(";
                        else if (Help == "-.--.-") MorseDecoded = MorseDecoded + ")";
                        else if (Help == "-...-") MorseDecoded = MorseDecoded + "=";
                        else if (Help == ".--.-.") MorseDecoded = MorseDecoded + "@";
                        else if (Help == "...-.-") MorseDecoded = MorseDecoded + "End of work";
                        else if (Help == "........") MorseDecoded = MorseDecoded + "Error";
                        else if (Help == "-.-") MorseDecoded = MorseDecoded + "Invitation to Transmit";
                        else if (Help == "-.-.-") MorseDecoded = MorseDecoded + "Starting Signal";
                        else if (Help == ".-.-.") MorseDecoded = MorseDecoded + "New Page Signal";
                        else if (Help == "...-.") MorseDecoded = MorseDecoded + "Understood";
                        else if (Help == ".-...") MorseDecoded = MorseDecoded + "Wait";
                        else
                        {
                                Application -> MessageBox("The entered morse code is incorrect", "Error", MB_OK | MB_ICONASTERISK);
                                break;
                        }
                }


        }
        Cipher -> Lines -> Add(MorseDecoded);
}
void de_ASCII(int nrOfRows,TMemo *Text,TMemo *Cipher)
{
        TextToDecode = "";
        DecodedText = "";
        AnsiString Help = "";
        for(int i = 0; i < nrOfRows; i++)
	{
                TextToDecode = TextToDecode + Text -> Lines -> Strings[i];
        }
        for (int j = 1; j <= TextToDecode.Length(); j++)
        {
                Help = "";
                while(TextToDecode[j] != ' ')
                {
                        Help = Help + TextToDecode[j];
                        j++;
                }
                DecodedText = DecodedText + (char) StrToInt(Help);
        }
        Cipher -> Lines -> Add(DecodedText);
}
void de_binary(int nrOfRows,TMemo *Text,TMemo *Cipher)
{
        DecodedText = "";
        TextToDecode = "";
        for (int i = 0; i < nrOfRows; i++)
        {
                TextToDecode = TextToDecode + Text -> Lines -> Strings[i];
        }
        for(int j = 1; j <= TextToDecode.Length(); j++)
        {
                int decimal=0;
                int tab[8]={0};
                for(int g=7; TextToDecode[j] != ' '; g--)
                {
                        tab[g] = StrToInt(TextToDecode[j]);
                        j++;
                }
                decimal = 128 * tab[7] + 64 * tab[6] + 32 * tab[5] + 16 * tab[4] + 8 * tab[3] + 4 * tab[2] + 2 * tab[1] + 1 * tab[0];
                DecodedText = DecodedText + (char)decimal;
        }
        Cipher -> Lines -> Add(DecodedText);
}
void de_hexagonal(int nrOfRows,TMemo *Text,TMemo *Cipher)
{
        DecodedText = "";
        TextToDecode = "";
        for(int i=0; i < nrOfRows; i++)
        {
                TextToDecode = TextToDecode + Text -> Lines -> Strings[i];
        }
        for (int j = 1; j <= TextToDecode.Length(); j=j+3)
        {
                int decimal = 0;
                int letter = 0;
                if(TextToDecode[j+1] == 'A') letter =10;
                else if(TextToDecode[j+1] == 'B') letter =11;
                else if(TextToDecode[j+1] == 'C') letter =12;
                else if(TextToDecode[j+1] == 'D') letter =13;
                else if(TextToDecode[j+1] == 'E') letter =14;
                else if(TextToDecode[j+1] == 'F') letter =15;
                else
                {
                        try
                        {
                                letter = StrToInt(TextToDecode[j+1]);
                        }
                        catch (...)
                        {
                                Application -> MessageBox("The entered text can not be decoded in hexadecimal","Error",MB_OK | MB_ICONASTERISK);
                                break;
                        }
                }
                try
                {
                        decimal = StrToInt(TextToDecode[j]) * 16 + letter;
                }
                catch(...)
                {
                        Application -> MessageBox("The entered text can not be decoded in hexadecimal","Error",MB_OK | MB_ICONASTERISK);
                        break;
                }

                DecodedText = DecodedText + (char)decimal;
        }
        Cipher -> Lines -> Add(DecodedText);
}
void de_base64(int nrOfRows,TMemo *Text,TMemo *Cipher)
{
        DecodedText = "";
        TextToDecode = "";
        for (int i=0; i < nrOfRows; i++)
        {
                TextToDecode = TextToDecode + Text -> Lines -> Strings[i];
        }
        AnsiString BinaryString = "";
        int number = 0;
        bool error = false;
        for (int l=1; l <= TextToDecode.Length(); l++)
        {
                switch (TextToDecode[l])
                {
                case 'A':
                        number = 0;
                        break;
                case 'B':
                        number = 1;
                        break;
                case 'C':
                        number = 2;
                        break;
                case 'D':
                        number = 3;
                        break;
                case 'E':
                        number = 4;
                        break;
                case 'F':
                        number = 5;
                        break;
                case 'G':
                        number = 6;
                        break;
                case 'H':
                        number = 7;
                        break;
                case 'I':
                        number = 8;
                        break;
                case 'J':
                        number = 9;
                        break;
                case 'K':
                        number = 10;
                        break;
                case 'L':
                        number = 11;
                        break;
                case 'M':
                        number = 12;
                        break;
                case 'N':
                        number = 13;
                        break;
                case 'O':
                        number = 14;
                        break;
                case 'P':
                        number = 15;
                        break;
                case 'Q':
                        number = 16;
                        break;
                case 'R':
                        number = 17;
                        break;
                case 'S':
                        number = 18;
                        break;
                case 'T':
                        number = 19;
                        break;
                case 'U':
                        number = 20;
                        break;
                case 'V':
                        number = 21;
                        break;
                case 'W':
                        number = 22;
                        break;
                case 'X':
                        number = 23;
                        break;
                case 'Y':
                        number = 24;
                        break;
                case 'Z':
                        number = 25;
                        break;
                case 'a':
                        number = 26;
                        break;
                case 'b':
                        number = 27;
                        break;
                case 'c':
                        number = 28;
                        break;
                case 'd':
                        number = 29;
                        break;
                case 'e':
                        number = 30;
                        break;
                case 'f':
                        number = 31;
                        break;
                case 'g':
                        number = 32;
                        break;
                case 'h':
                        number = 33;
                        break;
                case 'i':
                        number = 34;
                        break;
                case 'j':
                        number = 35;
                        break;
                case 'k':
                        number = 36;
                        break;
                case 'l':
                        number = 37;
                        break;
                case 'm':
                        number = 38;
                        break;
                case 'n':
                        number = 39;
                        break;
                case 'o':
                        number = 40;
                        break;
                case 'p':
                        number = 41;
                        break;
                case 'q':
                        number = 42;
                        break;
                case 'r':
                        number = 43;
                        break;
                case 's':
                        number = 44;
                        break;
                case 't':
                        number = 45;
                        break;
                case 'u':
                        number = 46;
                        break;
                case 'v':
                        number = 47;
                        break;
                case 'w':
                        number = 48;
                        break;
                case 'x':
                        number = 49;
                        break;
                case 'y':
                        number = 50;
                        break;
                case 'z':
                        number = 51;
                        break;
                case '0':
                        number = 52;
                        break;
                case '1':
                        number = 53;
                        break;
                case '2':
                        number = 54;
                        break;
                case '3':
                        number = 55;
                        break;
                case '4':
                        number = 56;
                        break;
                case '5':
                        number = 57;
                        break;
                case '6':
                        number = 58;
                        break;
                case '7':
                        number = 59;
                        break;
                case '8':
                        number = 60;
                        break;
                case '9':
                        number = 61;
                        break;
                case '+':
                        number = 62;
                        break;
                case '/':
                        number = 63;
                        break;
                case '=':
                        number = 64;
                        break;
                default:
                        if(!error)
                        {
                                Application -> MessageBox("The entered basic64 code is incorrect","Error", MB_OK | MB_ICONASTERISK);
                                error = true;
                        }
                        break;
                }
                if (number == 64) break;
                //CREATING BINARY ARRAY
                int array[6] = {0};
                for (int k=5; k>=0; k--)
                {
                        array[k] = number%2;
                        number = number/2;
                }
                //FROM ARRAY TO ANSISTRING
                AnsiString Help = "";
                for (int h=0; h<=5; h++)
                {
                        Help = Help + array[h];
                }
                BinaryString = BinaryString + Help;
        }
        //DELETING EXTRA '0' WHEN THE LENGTH %8 != 0
        AnsiString FullBinaryString="";
        int length = BinaryString.Length() - BinaryString.Length()%8;
        for(int g=1;g <= length;g++)
        {
                FullBinaryString = FullBinaryString + BinaryString[g];
        }
        //DECODING BINARY STRING
        for (int t=1; t<=FullBinaryString.Length(); t+=8)
        {
                int first = FullBinaryString[t] - '0';
                int second = FullBinaryString[t+1] - '0';
                int third = FullBinaryString[t+2] - '0';
                int fourth = FullBinaryString[t+3] - '0';
                int fifth = FullBinaryString[t+4] - '0';
                int sixth = FullBinaryString[t+5] - '0';
                int seventh = FullBinaryString[t+6] - '0';
                int eighth = FullBinaryString[t+7] - '0';
                int ascii = 128*first + 64*second + 32*third + 16*fourth + 8*fifth + 4*sixth + 2*seventh + eighth;
                DecodedText = DecodedText + (char)ascii;
        }
        Cipher -> Lines -> Add(DecodedText);
}
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{

}
//CLEARING TEXT AFTER CLICKING ON MEMO
void __fastcall TForm1::TextClick(TObject *Sender)
{

        while (count!=1)
        {
                Text -> Clear();
                Cipher -> Clear();
                count=1;
        }
}
//ENCODE BUTTON ONCLICK
void __fastcall TForm1::EncodeButtonClick(TObject *Sender)
{
        if(count==1)
        {
                Cipher -> Lines -> Clear();
                int nrOfRows=nrOfRows = Text -> Lines -> Count;
                if(TypeOfCipher->Items->Strings[TypeOfCipher->ItemIndex] == TypeOfCipher->Items->Strings[0])
                {
                        int key=0;
                        AnsiString help = EditShift -> Text;
                        try
                        {
                                key = help.ToInt();
                                key = key % 26;
                                if(key < 0)
                                {
                                        throw 1;
                                }
                                caesar(nrOfRows,key,Text,Cipher);
                        }
                        catch (int i)
                        {
                                if (i == 1)
                                {
                                        Application -> MessageBox("The entered value of shift must be non-negative", "Error", MB_OK | MB_ICONASTERISK);
                                }
                        }
                        catch (...)
                        {
                                Application -> MessageBox("The entered value in Shift Text box is incorrect","Error", MB_OK | MB_ICONERROR);
                        }

                }
                else if(TypeOfCipher->Items->Strings[TypeOfCipher->ItemIndex]==TypeOfCipher->Items->Strings[1])
                {
                        morse(nrOfRows,Text,Cipher);
                }
                else if(TypeOfCipher->Items->Strings[TypeOfCipher->ItemIndex]==TypeOfCipher->Items->Strings[2])
                {
                        ASCII(nrOfRows,Text,Cipher);
                }
                else if(TypeOfCipher->Items->Strings[TypeOfCipher->ItemIndex]==TypeOfCipher->Items->Strings[3])
                {
                        binary(nrOfRows,Text,Cipher);
                }
                else if(TypeOfCipher->Items->Strings[TypeOfCipher->ItemIndex]==TypeOfCipher->Items->Strings[4])
                {
                        hexagonal(nrOfRows,Text,Cipher);
                }
                else if(TypeOfCipher->Items->Strings[TypeOfCipher->ItemIndex]==TypeOfCipher->Items->Strings[5])
                {
                        Base64(nrOfRows,Text,Cipher);
                }
        }
}
//CHANGING ELEMENTS WHEN USER PICK OTHER ONES
void __fastcall TForm1::TypeOfCipherChange(TObject *Sender)
{
        if(TypeOfCipher->Items->Strings[TypeOfCipher->ItemIndex]==TypeOfCipher->Items->Strings[0])
        {
                ShiftText -> Visible = true;
                EditShift -> Visible = true;
                morseButton -> Visible = false;
                SaveMorse -> Visible = false;
                StopMorse -> Visible = false;
        }
        else if(TypeOfCipher->Items->Strings[TypeOfCipher->ItemIndex]==TypeOfCipher->Items->Strings[1])
        {
                morseButton -> Visible = true;
                StopMorse -> Visible = true;
                SaveMorse -> Visible = true;
                ShiftText -> Visible = false;
                EditShift -> Visible = false;
        }
        else
        {
                ShiftText -> Visible = false;
                StopMorse -> Visible = false;
                EditShift -> Visible = false;
                morseButton -> Visible = false;
                SaveMorse -> Visible = false;
        }
}
//---------------------------------------------------------------------------




void __fastcall TForm1::morseButtonClick(TObject *Sender)
{
        if(count ==1)
        {
                int nrOfRows = Text -> Lines -> Count;
                morseSND(nrOfRows,Text,Cipher,morse_sounds,StopMorse);
        }
}
//---------------------------------------------------------------------------



void __fastcall TForm1::TextKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
        if(Shift.Contains(ssCtrl))
        {
                if(Key == 'a' || Key == 'A')
                {
                        Text -> SelectAll();
                }
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CipherKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
        if(Shift.Contains(ssCtrl))
        {
                if(Key == 'a' || Key == 'A')
                {
                        Cipher -> SelectAll();
                }
        }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
        morse_sounds -> Close();
}
//---------------------------------------------------------------------------




void __fastcall TForm1::DecodeButtonClick(TObject *Sender)
{
        if(count==1)
        {
                Cipher -> Lines -> Clear();
                int nrOfRows=nrOfRows = Text -> Lines -> Count;
                if(TypeOfCipher->Items->Strings[TypeOfCipher->ItemIndex] == TypeOfCipher->Items->Strings[0])
                {
                        int key=0;
                        AnsiString help = EditShift -> Text;
                        try
                        {
                                key = help.ToInt();
                                key = key % 26;
                                key = 26 - key;
                                if(key < 0)
                                {
                                        throw 1;
                                }
                                caesar(nrOfRows,key,Text,Cipher);
                        }
                        catch (int i)
                        {
                                if (i == 1)
                                {
                                        Application -> MessageBox("The entered value of shift must be non-negative", "Error", MB_OK | MB_ICONASTERISK);
                                }
                        }
                        catch (...)
                        {
                                Application -> MessageBox("The entered value in Shift Text box is incorrect","Error", MB_OK | MB_ICONERROR);
                        }

                }
                else if(TypeOfCipher->Items->Strings[TypeOfCipher->ItemIndex]==TypeOfCipher->Items->Strings[1])
                {
                        de_morse(nrOfRows,Text,Cipher);
                }
                else if(TypeOfCipher->Items->Strings[TypeOfCipher->ItemIndex]==TypeOfCipher->Items->Strings[2])
                {
                        de_ASCII(nrOfRows,Text,Cipher);
                }
                else if(TypeOfCipher->Items->Strings[TypeOfCipher->ItemIndex]==TypeOfCipher->Items->Strings[3])
                {
                        de_binary(nrOfRows,Text,Cipher);
                }
                else if(TypeOfCipher->Items->Strings[TypeOfCipher->ItemIndex]==TypeOfCipher->Items->Strings[4])
                {
                        de_hexagonal(nrOfRows,Text,Cipher);
                }
                else if(TypeOfCipher->Items->Strings[TypeOfCipher->ItemIndex]==TypeOfCipher->Items->Strings[5])
                {
                        de_base64(nrOfRows,Text,Cipher);
                }
        }
}
//---------------------------------------------------------------------------



void __fastcall TForm1::CopyButtonClick(TObject *Sender)
{
        Cipher -> SelectAll();
        Cipher -> CopyToClipboard();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::StopMorseClick(TObject *Sender)
{
        morse_sounds -> Stop();
}
//---------------------------------------------------------------------------

