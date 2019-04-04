#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int L, W, H;
    long int N;
    cin >> L >> N;
    while (N--)
    {
        cin >> W >> H;
        if (W < L || H < L)
        {
            cout << "UPLOAD ANOTHER" << "\n";
        } else {
            if(W == H) {
                cout << "ACCEPTED" << "\n";
            } else {
                cout << "CROP IT" << "\n";
            }
        }
    }
}