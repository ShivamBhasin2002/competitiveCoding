#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int i = 0;
    getline(cin, s);
    while (i < s.length())
    {
        switch (s[i])
        {
        case '.':
            cout << "0";
            break;
        case '-':
            switch (s[i + 1])
            {
            case '.':
                cout << "1";
                i++;
                break;
            case '-':
                cout << "2";
                i++;
                break;
            }
            break;
        }
        i++;
    }
}