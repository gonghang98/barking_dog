//10773 Á¦·Î
#include <iostream>
#include <stack>
#include<string>
using namespace std;

int main(void)
{
	stack<int> S;
	int n, m, l;

	cin >> n;

	while (n--)
	{
		cin >> m;
		if (m == 0)
		{
			S.pop();
		}
		else
		{
			S.push(m);
		}

	}
	l = 0;
	while (S.empty() != 1)
	{
		l += S.top();
		S.pop();
	}
	cout << l;

	return 0;

}
