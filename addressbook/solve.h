#pragma once
#include<iostream>
#include<string>
#include<cstdio>
#include<fstream>
#include<locale>
#include<codecvt>
#include<Windows.h>
using namespace std;
class solve
{
public:

	wstring op, add, phon, name;
	bool fl;

	solve(wstring a, wstring b, wstring c, wstring d, bool fl)
	{
		op = a, add = b, phon = c, name = d;
		fl = fl;
	}
	void todo(wstring &);
};