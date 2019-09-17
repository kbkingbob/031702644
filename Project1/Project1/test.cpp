#include <iostream>
using namespace std;
int main()
{
	cout << "!!!ABCDEFG!!!" << endl; // prints !!!Hello World!!!
	_wsetlocale(LC_ALL, L"chs");//这一句很重要！
	const wchar_t *str = L"你好";
	wcout << str << endl;
	return 0;
}