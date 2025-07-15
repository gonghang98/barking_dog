//code:3273
#include <iostream>
#include <algorithm>
using namespace std;

int arr[100001] = { 0 };
bool save_num[2000001] = {  };
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a,i,x,j,b = 0;
	
	cin >> a;
	for (i = 0; i < a; i++)
	{
		cin >> arr[i];
	}

	cin >> x;
	for (i = 0; i < a; i++)
	{
		if (x - arr[i] > 0 && save_num[x-arr[i]])
		{
			b++;
		}
		save_num[arr[i]] = true;
	}

	cout << b;
	return 0;
}