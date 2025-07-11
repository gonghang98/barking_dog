#include <iostream>
#include <algorithm>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int arr[9] = { 0 };
	int answer[7] = { 0 };
	int total = 0;
	int a=0,i,j,k;
	
	for (int i = 0; i < 9; i++)
	{
		cin >> arr[i];
		total += arr[i];
	}
	sort(arr, arr + 9);

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 9; j++)
		{
			if ((total - arr[i] - arr[j]) == 100)
			{
				for (k = 0; k < 9; k++)
				{
					if (k != i && k != j)
					{
						answer[a++] = arr[k];
					}
				}
				break;
			}
		}
		if ((total - arr[i] - arr[j]) == 100)
			break;
	}
	for (i = 0; i < 7; i++)
	{
		cout << answer[i] << "\n";
	}

	return 0;

}