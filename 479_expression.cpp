#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b,c;
    cin >> a >> b >> c;
    int ans1 = a+b*c;
    int ans2 = a*(b+c);
    int ans3 = a*b*c;
    int ans4 = (a+b)*c;
    int ans5 = a+b+c;
    cout << max(ans1, max(ans2, max(ans3, max(ans4, ans5))));
    return 0;
}