//�̿�
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

const int MX = 1000005;
int pre[MX], nxt[MX];
char dat[MX];
int unused = 1;
int cursor = 0; //Ŀ���� �迭�� ���������� ���ִ� ���� ����Ų��.
string str1;
string order;

void insert(int addr, char num) {//addr ������ �����ϴ°�


    dat[unused] = num;
    pre[unused] = addr;
    nxt[unused] = nxt[addr];
    if (nxt[addr] != -1)
        pre[nxt[addr]] = unused; //�������϶� �ʿ�
    nxt[addr] = unused++;

}

void erase(int addr) {//addr�� �����ϴ� ��

    nxt[pre[addr]] = nxt[addr];
    if (nxt[addr] != -1)
        pre[nxt[addr]] = pre[addr];
    unused--;
}

void traverse() {
    int cur = nxt[0];
    while (cur != -1) {
        cout << dat[cur];
        cur = nxt[cur];
    }
    cout << "\n\n";
}

int main(void) {
    fill(pre, pre + MX, -1);
    fill(nxt, nxt + MX, -1);
    int n = 0;

    cin >> str1;
    cin >> n;
    for (int i = 0; i < str1.length(); i++)
    {
        insert(i, str1[i]);
    }
    cursor = str1.length();

    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        getline(cin, order);
        switch (order[0]) {
        case 'L':
            if (cursor > 0)
            {
                cursor = cursor - 1;
            }

            break;

        case 'D':
            if (cursor < unused+1)
            {
                cursor = cursor + 1;
            }

            break;

        case 'B':
            if (cursor != 0)
            {
                erase(cursor);

                if (cursor > 0)
                {
                    cursor = cursor - 1;
                }
            }
            break;

        case 'P':
            insert(cursor, order[2]);
            cursor++;
            break;
        default:
            break;
        }


    }
    traverse();

}