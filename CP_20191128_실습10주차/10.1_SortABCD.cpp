#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	string input, w;
	vector<string> input_vec;
	vector<int> output_vec;

	getline(cin, input);
	for (stringstream stst(input); (stst >> w);)	// ���ڿ� input���� ������� ���ڿ� ��Ʈ�� stst����
	{	// ���ڿ� ��Ʈ�� stst�� �̿��Ͽ� �� �ܾ w�� �Է�
		// stst�� ���� �ܾ ���ٸ� NULL ��ȯ							 
		input_vec.push_back(w);	// �ܾ� w�� input_vec�� �߰�
	}
	for (int i = 1; i < input_vec.size(); i += 2)
		output_vec.push_back(atoi(input_vec[i].c_str()));
	
	sort(output_vec.begin(), output_vec.end());
	for (int j = 0; j < output_vec.size(); j++)
		cout << output_vec[j] << " ";
	
	return 0;
}