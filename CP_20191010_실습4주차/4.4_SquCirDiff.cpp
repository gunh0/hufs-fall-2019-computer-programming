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
		return (4-3.14) * length * length;
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
	return 0;
}