#include<bits/stdc++.h>

using namespace std;

int main() {
    long long int l,r,k;
    int count = 0;
    cin >> l >> r >> k;
    for(int i = l; i <= r; i++)
    {
        if(i % k == 0) {
            count++;
        } else {
            count += 0;
        }
    }
    cout << count << "\n";
}