#include <iostream>
using namespace std;
int main()
{
	cout << "!!!ABCDEFG!!!" << endl; // prints !!!Hello World!!!
	_wsetlocale(LC_ALL, L"chs");//��һ�����Ҫ��
	const wchar_t *str = L"���";
	wcout << str << endl;
	return 0;
}