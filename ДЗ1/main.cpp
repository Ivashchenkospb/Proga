#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool isBalanced(string s)
{
    int i;
    char c;
    int n = s.length();
    stack <char> t;

    for (i = 0; i < n; i++)
    {
        c = s.at(i);

        if (t.empty())
        {
            t.push(c);
        }
        else if (t.top() == '(' && c == ')' || t.top() == '{' && c == '}' || t.top() == '[' && c == ']')
        {
            t.pop();
        }
        else
            t.push(c);
    }

    if (t.empty())
        return true;
    else
        return false;
}

int main() {
    string s;
    getline(cin, s);
    cout << isBalanced(s);
    return 0;
}
