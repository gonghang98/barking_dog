#include <iostream>
#include <stack>
#include<string>
using namespace std;

int main(void)
{
	stack<int> S;
	int n, m;
	string str;
	cin >> n;
	while (n--)
	{
		cin >> str;
		if (str == "push")
		{
			cin >> m;
			S.push(m);
		}
		else if (str == "pop")
		{
			if (S.empty()) cout << -1 << '\n';
			else
			{
				cout << S.top() << '\n';
				S.pop();
			}
		}
		else if (str == "size") cout << S.size() << '\n';
		else if (str == "empty")
		{
			if (S.empty()) cout << 1 << '\n';
			else cout << 0 << '\n';
		}
		else
		{
			if (S.empty()) cout << -1 << '\n';
			else cout << S.top() << '\n';
		}

	}

	return 0;

}
