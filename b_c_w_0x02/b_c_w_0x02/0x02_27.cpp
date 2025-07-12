#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n_num[9] = { 0 };
	int max, max_num =1;
	
	cin >> n_num[0];
	max = n_num[0];
	for (int i = 1; i < 9; i++)
	{
		cin >> n_num[i];
		if (max < n_num[i])
		{
			max = n_num[i];
			max_num = i + 1;
		}
	}
	cout << max << "\n" << max_num;


	return 0;
}