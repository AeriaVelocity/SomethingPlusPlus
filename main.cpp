#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#ifndef _WIN32
#include <unistd.h>
#include <sys/types.h> 
#endif
using namespace std;

int main(int argc, char *argv[])
{
	if (argc > 2)
	{
		cerr << "We don't accept " << argv[2] << "here. Sorry." << endl;
		return EXIT_FAILURE;
	}
	else
	{
		string Username;
		string PasswordField;
		string CorrectPassword;
	    if (argc > 1)
		{
			Username = string(argv[1]);
		}
		else
		{
			#ifdef _WIN32
			Username = "mike-rosoft";
			#else
			Username = getlogin();
			#endif
		}
		cout << "Logging into Something++ as " << Username;
		#ifdef _WIN32
		cout << " on Michaelsoft Binbows";
		#endif
		#ifdef __APPLE__
		cout << " on Appilitosh Oh Ess Eks";
		cout << "\n(unless you're on macOS 11 or later, in which case, my bad)"
		#endif
		cout << endl;
		string KeyFileName = Username + ".keyfile";
		ifstream KeyCPassword (KeyFileName);
		if (KeyCPassword.fail())
		{
			string PasswordCreate = "";
			ofstream KeyFPassword (KeyFileName);
			cout << "Please enter a password, or leave it blank if you want no password.\n> ";
			getline(cin, PasswordCreate);
			if (PasswordCreate == "")
			{
				KeyFPassword << "nopassword" << endl;
			}
			else
			{
				KeyFPassword << PasswordCreate << endl;
			}
		}
		else
		{
			getline(KeyCPassword, CorrectPassword);
			KeyCPassword.close();
		}
		if (CorrectPassword == "nopassword")
		{
			PasswordField = CorrectPassword;
		}
		else
		{
			cout << "Please enter your password\n> ";
			getline(cin, PasswordField);
		}
		if (PasswordField == CorrectPassword)
		{
			cout << "Welcome, " << Username << "!" << endl;
			cout << "Enter a command!\n";
			string Command = "";
			int LoginFun = 0;
			while (Command != "bye")
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
					switch (LoginFun)
					{
						case 1:
							cout << "in\n" << endl;
							break;
						case 2:
							cout << "What? I already logged in.\n" << endl;
							break;
						case 3:
							cout << "As in... I literally logged 'in' to the console.\n" << 
							"What did you expect?\n" << endl;
							break;
						default:
							cout << "in\n" << endl;
							break;
					}
				} 
				else if (Command == "bye")
				{
					cout << "Okay, see you!\n" << endl;
				}
				else if (Command == "help")
				{
					string HelpVar;
					cout << "Welcome to help. Press Enter to continue.";
					getline(cin, HelpVar);
					cout << "Thank you for using help. Press Enter to exit.\n";
					getline(cin, HelpVar);
					cout << endl;
				}
				else if (Command == "run")
				{
					cout << "There is nowhere you can run.\n" << endl;
				}
				else if (Command == "cat")
				{
					cout << "meow\n" << endl;
				}
				else if (Command == "neko")
				{
					cout << "nya\n" << endl;
				}
				else if (Command == "dog")
				{
					cout << "woof\n" << endl;
				}
				else if (Command == "inu")
				{
					cout << "wan\n" << endl;
				}
				else if (Command == "suicide")
				{
					#ifdef _WIN32
					cout << "Unable to kill something.exe." << endl;
					#else
					cout << "Unable to kill something." << endl;
					#endif
					cout << "The driver DPRSSD.DLL was not found.\n" << endl;
				}
				else
				{
					cout << Command << " doesn't exist. Type it again, maybe something'll happen!\n" << endl;
				}
			}
			return 0;
		}
		else
		{
			if (PasswordField == "your password")
			{
				cerr << "Very funny.\n";
			}
			else
			{
				cerr << "NO NO NO NO NO\n";
			}
		}
	}
	return 0;
}
