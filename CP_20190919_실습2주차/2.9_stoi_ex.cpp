#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str="",str2="";
	int year = 0, month = 0, day = 0;
	int year2 = 0, month2 = 0, day2 = 0;

	//cout << "yyyy-mm-dd : ";
	getline(cin, str, '\n');
	//cout << "yyyy-mm-dd : ";
	getline(cin, str2, '\n');

	year = stoi(str.substr(0, 4));
	month = stoi(str.substr(5, 2));
	day = stoi(str.substr(8));

	year2 = stoi(str2.substr(0, 4));
	month2 = stoi(str2.substr(5, 2));
	day2 = stoi(str2.substr(8));

	cout << year << "�� " << month << "�� " << day << "��" << endl;
	cout << year2 << "�� " << month2 << "�� " << day2 << "��" << endl;
	cout << "���̴� : " << (day2 - day) <<"��"<<endl;
	return 0;
}

