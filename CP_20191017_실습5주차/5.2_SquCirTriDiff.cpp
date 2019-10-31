#include <iostream>
using namespace std;
class SquCirDiff {
private:
	double length; // ������
public:
	void setLength(double val)
	{
		length = val;
	}

	double getSquRound()
	{
		return 8 * length;
	}

	double getCirRound()
	{
		return 2 * 3.14 * length;
	}

	double getSquCirAreaDiff() {
		return (4 - 3.14) * length * length;
	}

	double getCirTriAreaDiff() {
		return (3.14 - 2) * length * length;
	}
};

int main() {
	SquCirDiff a;
	double len;

	cin >> len;
	a.setLength(len);
	cout << "���簢���� �ѷ��� ���̴� : " << a.getSquRound() << endl;
	cout << "���� �ѷ��� ���̴� : " << a.getCirRound() << endl;
	cout << "�� ������ ������ ���̴� : " << a.getSquCirAreaDiff() << endl;
	cout << "���� �ﰢ���� ������ ���̴� : " << a.getCirTriAreaDiff() << endl;
	return 0;
}