#include <iostream>
#include <algorithm>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, b, c, d, e;
	int arr[5] = { 0 };
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + 5);
	cout << (arr[0] + arr[1] + arr[2] + arr[3] + arr[4]) / 5 << "\n";
	cout << arr[2];




	return 0;

}