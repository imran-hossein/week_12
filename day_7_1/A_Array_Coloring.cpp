#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin >> t;
    while (t--)
    {
        int n;cin >> n;
        vector<int>a(n);
        int odd = 0;
        for (int i = 0;i < n;i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 1)
            {
                odd++;
            }

        }
        if (odd % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}