#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,a,b,c;
    cin>>n;
    while (n--)
    {
        cin>>a>>b>>c;
        cout<<((a+b==c || a+c ==b || b+c == a)? "YES\n" : "NO\n");
    }
    
    return 0;
}