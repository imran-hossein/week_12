#include<bits/stdc++.h>
using namespace std;
string s = "aeiou";
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin >> t;
    while (t--)
    {
        int n;cin >> n;
        for (int i = 0;i < n;i++)
        {
            cout << string((n / 5) + (n % 5 > i), s[i]);
        }
        cout << endl;
    }
    return 0;
}