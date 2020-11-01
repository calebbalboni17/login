// passanduserwithtries.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	string verification;
	string password;
	string username;
	int tries = 1;
	cout << "please enter your username and password here:" << endl;
	for (tries = 1; 5 >= tries; tries++)
	{
		cout << "username: ";
		cin >> username;
		if (username == "calebbalboni")
		{
			cout << "password:  ";
			cin >> password;
			if (password == "yeet123")
			{
				cout << "that is the right username and password :)";
				cout << "please enter the verification code that you see above" << endl;
				cout << "4834582:  ";
				cin >> verification;
				if (verification == "4834582")
				{
					cout << "that is correct good job";

					return 0;

				}
				else
				{
					cout << "that is wrong try again" << endl;
				}
				

			}
			else
			{
				cout << "that password was incorrect try again :( " << endl;
			}
		
		
		}	

		else
		{
			cout << "that username was wrong please try again :(" << endl;
		}
	
	
	}


}





