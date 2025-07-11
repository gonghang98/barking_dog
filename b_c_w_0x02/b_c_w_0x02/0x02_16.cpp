#include <iostream>
#include <algorithm>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a = 0;
	int time[20] = { 0 };
	int y_money = 0, m_money = 0;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> time[i];
		y_money += ((time[i] / 30) + 1) * 10;
		m_money += ((time[i] / 60) + 1) * 15;

	}
	if (y_money < m_money)
	{
		cout << "Y " << y_money;
	}
	else if (y_money > m_money)
	{
		cout << "M " << m_money;
	}
	else
	{
		cout << "Y M " << y_money;
	}


	return 0;
}