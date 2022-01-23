#include <bits/stdc++.h>
using namespace std;

void display(string t)
{
    cout << t << " ";
}

bool first_that(deque<string> t, string target)
{
    bool flag = 0;
    for (auto i : t)
        if (i == target)
        {
            cout << i << " ";
            flag = 1;
        }
    return flag;
}

string getLeft(deque<string> &t)
{
    string temp = t.front();
    t.pop_front();
    return temp;
}

string getRight(deque<string> &t)
{
    string temp = t.back();
    t.pop_back();
    return temp;
}

int main()
{
    deque<string> dq, temp;
    dq.push_front("is");
    dq.push_front("this");
    dq.push_front("hello");
    dq.push_back("a");
    dq.push_back("beautiful");
    dq.push_back("hello");
    dq.push_back("world");
    dq.push_back("program");
    for (auto i : dq)
        display(i);
    cout << "\n";
    if (!first_that(dq, "hello"))
        cout << "No such string found";
    cout << "\n";
    temp = dq;
    for (auto i : dq)
        cout << getLeft(temp) << " ";
    cout << "\n";
    temp = dq;
    for (auto i : dq)
        cout << getRight(temp) << " ";
    cout << "\n";
}