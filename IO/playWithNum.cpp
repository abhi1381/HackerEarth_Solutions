
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, q, l, r;
    long long int ans;
    scanf("%lld %lld", &n, &q);
    long long int arr[n];
    arr[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        arr[i] = arr[i] + arr[i - 1];
    }
    while (q--)
    {
        cin >> l >> r;
        ans = arr[r] - arr[l - 1];

        cout << ans / (r - l + 1) << "\n";
    }
}