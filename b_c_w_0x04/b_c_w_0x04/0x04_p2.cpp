#include <algorithm>
#include <iostream>
#include <string>
#include <list>
using namespace std;

int main(void) {

    int n = 0;
    char order = 0, p_char = 0;
    int unused = 0;
    list<char> string_List;
    string str1;
    cin >> str1;
    string_List.insert(string_List.begin(), str1);
    
    cin >> n;
    unused = str1.length();
    //cout << unused;
    for (int i = 0; i < n; i++)
    {
        cin >> order;
        switch (order) {
        case 'L':
            unused--;
            break;

        case 'D':
            unused++;
            break;

        case 'B':
            
            break;

        case 'P':

            break;
        default:
            break;
        }

    }

    cout << unused;

}