//code:3273
#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a,i,x,j,b = 0;
	int arr[1000000] = { 0 };
	cin >> a;
	for (i = 0; i < a; i++)
	{
		cin >> arr[i];
	}

	cin >> x;

	for (i = 0; i < a; i++)
	{
		for (j = i+1; j < a; j++)
		{
			if ((arr[i] + arr[j]) == x)
			{
				b++;
			}
		}
	}
	cout << b;
	return 0;
}