#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin >> t;

    while (t--)
    {
        int n, s, m;cin >> n >> s >> m;
        int p = 0, diff = -1e9, k;
        while (n--)
        {
            int l, r;cin >> l >> r;
            k = l - p;
            diff = max(diff, k);
            p = r;
        }
        k = m - p;
        diff = max(diff, k);
        if (diff >= s)
        {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }


    return 0;
}