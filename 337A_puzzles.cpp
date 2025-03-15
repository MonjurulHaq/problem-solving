#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m, arr[1000];
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + m);
    int leastVal = arr[n - 1] - arr[0];
    for (int i = 1; i <= m - n; ++i)
    {
        if (arr[i + n - 1] - arr[i] < leastVal)
            leastVal = arr[i + n - 1] - arr[i];
    }
    cout << leastVal << endl;
    return 0;
}