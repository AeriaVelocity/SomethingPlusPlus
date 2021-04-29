#include <iostream>
#include <fstream>
#include <cstring>
#include <cctype>
#include <string>
#include "progdefs.h"
using namespace std;

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		cout << NoArgsErr;
        return 1;
	}
	else if (argc < 3)
	{
		cout << NoUsernameErr;
        return 1;
	}
	else
	{
	    string Username = "";
		Username = argv[2];
		std::string PasswordField;
		if (strcmp(argv[1], "login") == 0)
		{
			cout << "Please enter your password: ";
			getline(cin, PasswordField);
			if (PasswordField == CorrectPassword)
			{
				cout << "Welcome, " << Username << "! Creating key file..." << endl;
				FILE *KeyFilePointer;
				KeyFilePointer = fopen("keyfile.kfl", "w");
				fclose(KeyFilePointer);
				cout << "Enter a command!\n";
				string Command = "";
                int LoginFun = 0;
				while (Command != "exit")
                {
                    cout << Username << " > ";
                    getline(cin, Command);
                    if (Command == "cd")
                    {
                        cout << "There is no CD in the computer.\n" <<
                        "Not only that, but there are no CD drivers in this program.\n" << endl;
                    } 
                    else if (Command == "ls")
                    {
                        cout << "There are no lemons to salvage.\n" <<
                        "Please install a basket in your computer's hard drive and fill it with lemons.\n" << endl;
                    } 
                    else if (Command == "dir")
                    {
                        cout << "Unable to drive in the road.\n" <<
                        "The driver CAR.DLL was not found.\n" << endl;
                    } 
                    else if (Command == "login")
                    {
                        LoginFun++;
                        if (LoginFun > 0 and LoginFun < 2)
                        {
                            cout << "in\n" << endl;
                        }
                        else if (LoginFun > 1 and LoginFun < 3)
                        {
                            cout << "What? I already DID log in.\n" << endl;
                        }
                        else if (LoginFun > 2 and LoginFun < 4)
                        {
                            cout << "As in... literally logged 'in' to the console.\n" << 
                            "What did you expect?\n" << endl;
                        }
                        else
                        {
                            cout << "in\n" << endl;
                        }
                    } 
                    else if (Command == "exit")
                    {
                        cout << "Okay, see you!" << endl;
                    }
                }
                return 0;
			}
			else
			{
				if (PasswordField[0] == '*')
				{
					cout << "NO NO NO NO NO\n";
				}
				else if (PasswordField == "your password")
				{
					cout << "Very funny.\n";
				}
				else
				{
					cout << "That's not obfuscated enough.\n";
				}
			}

		}
		else
		{
			printf("You need to log in first!\n");
		}

	}
	return 0;
}
