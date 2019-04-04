#include<bits/stdc++.h>
using namespace std;

int main() {
    string S;
    int result =0;
    cin >> S;
    for(int i = 0; i < S.length(); i++)
    {
        result += (S[i] - '`');
    }

    cout << result << "\n";
    
}