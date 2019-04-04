#include<bits/stdc++.h>

using namespace std;

int main() {
    string S1,S2;
    int N;
    cin >> N;
    
    while(N--){
        cin >> S1 >> S2;
        sort(S1.begin(), S1.end());
        sort(S2.begin(), S2.end());
        if (S1 == S2)
        {
            cout << "YES"
                 << "\n";
        }
        else
        {
            cout << "NO"
                 << "\n";
        }
    }
}