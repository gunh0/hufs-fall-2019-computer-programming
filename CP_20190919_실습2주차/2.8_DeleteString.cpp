#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	getline(cin, s);
	int index = s.find("computer");
	for (int i = 0; i < s.length(); i++)	// ���ڿ� s�� ���̱��� Loop
	{
		if (i == index)
			i += 7;	// computer�� 8�����̱� ������...
		else
			cout << s[i];
	}
	return 0;
}

