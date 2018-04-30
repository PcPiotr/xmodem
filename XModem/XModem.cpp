#include "stdafx.h"
#include <fstream>
#include <string.h>
#include <windows.h>
#include "iostream"
#include "string"
#include "XModemReceive.h"

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
	cout << "Wybierz port:\n";
	string port;
	getline(cin, port);
	Receive(ConvertToLPWSTR(port));

	

	return 0;
}