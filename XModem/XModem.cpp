#include "stdafx.h"
#include <fstream>
#include <string.h>
#include <windows.h>
#include "iostream"
#include "string"
#include "XModemReceive.h"
#include "XModemSend.h"

using namespace std;

LPWSTR ConvertToLPWSTR(const string& s)
{
	LPWSTR ws = new wchar_t[s.size() + 1]; // +1 for zero at the end
	copy(s.begin(), s.end(), ws);
	ws[s.size()] = 0; // zero at the end
	return ws;
}

int main()
{
	int choice;
	cout << "Choose the function: \n1.Send\n2.Receive\n";
	cin >> choice;
	cout << "Wybierz port:\n";
	string port;
	cin.ignore();
	getline(cin, port);
	if (choice == 1)
	{
		Send(ConvertToLPWSTR(port));
	}
	else if (choice == 2)
	{
		Receive(ConvertToLPWSTR(port));
	}
	
	return 0;
}