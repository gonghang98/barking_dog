//¹Ì¿Ï
#include <algorithm>
#include <iostream>
#include <string>
#include <list>
using namespace std;

int main(void) {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n = 0;
    char order = 0, p_char = 0;
    list<char> string_list;
    string str1;
    cin >> str1;
    for (auto c : str1) string_list.push_back(c);
    auto cursor = string_list.end();
    cin >> n;

    //cout << unused;
    while (n--)
    {
        cin >> order;
        if (p_char == 'P')
        {
            cin >> p_char;
            string_list.insert(cursor, p_char);
        }
        else if (p_char == 'L') 
        {
            if (cursor != string_list.begin()) cursor--;
        }
        else if (p_char == 'D')
        {
            if (cursor != string_list.end()) cursor++;
        }
        else
        {
            if (cursor != string_list.begin()) {
                cursor--;
                cursor = string_list.erase(cursor);
            }
        }
    }
        for (auto c : string_list) cout << c;

}