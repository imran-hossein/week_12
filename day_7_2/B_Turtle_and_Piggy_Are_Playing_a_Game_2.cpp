#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;cin >> n;
    vector<int>a(n);
    for (int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    bool turtle = true, piggy = false;
    while (a.size() > 1)
    {
        if (turtle)
        {
            auto it = a.begin();
            a.erase(it);
            turtle = false;
            piggy = true;
        }
        else if (piggy)
        {
            auto it = a.end() - 1;
            a.erase(it);
            piggy = false;
            turtle = true;
        }
    }
    cout << a[0] << endl;
    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}