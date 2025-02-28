#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int even=0, odd=0, even_pos=0, odd_pos=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            even++;
            even_pos=i;
        }
        else
        {
            odd++;
            odd_pos=i;
        }
    }
    if(even==1)
        cout<<even_pos+1;
    else
        cout<<odd_pos+1;
    
    return 0;
}