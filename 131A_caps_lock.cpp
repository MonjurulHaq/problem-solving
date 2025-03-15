#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    bool isupper = true;
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] >= 97)
        {
            isupper = false;
            break;
        }
    }
    if (isupper)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 97)
            {
                s[i] = s[i] - 32;
            }
            else
                s[i] = s[i] + 32;
        }
    }
    cout<<s;
    return 0;
}
