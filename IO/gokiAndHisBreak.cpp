#include<bits/stdc++.h>

using namespace std;

int main() {
    long long int N,X;

    cin >> N >> X;

    long long int Y[N];
    for(long int i = 0; i < N; i++)
    {
        cin >> Y[i];
        if(Y[i] >= X) {
            cout << "YES" <<"\n";
        } else
        {
            cout << "NO" << "\n";
        }
    }

    return 0;
}