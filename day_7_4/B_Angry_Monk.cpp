#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin >> t;
    while (t--)
    {
        int n, k;cin >> n >> k;
        vector<int>a(k);
        for (int i = 0;i < k;i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end(), greater<int>());
        int totalOperation = 0;
        // iterate 1 - k-1
        for (int i = 1;i < k;i++)
        {
            if (a[i] > 1)
            {
                totalOperation += a[i] + (a[i] - 1);
            }
            else {
                totalOperation += 1;
            }
        }

        cout << totalOperation << endl;

    }
    return 0;
}