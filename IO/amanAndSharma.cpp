#include<bits/stdc++.h>

using namespace std;

int main() {
    long long int d,r,x,count = 0;
    cin >> d;
    while(d--) {
        cin >> r >> x;
        long long int circumferrence = 44*r;
        if (700*x >= circumferrence) {
            count++;
        }
    }

    cout << count << "\n";
}