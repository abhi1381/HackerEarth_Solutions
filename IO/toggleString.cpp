#include<bits/stdc++.h>

using namespace std;

int main() {
    string S;
    char R[102];
    cin >> S;
    for(int i = 0; i < S.length(); i++)
    {
        if(islower(S[i])) {
            R[i] = toupper(S[i]);
        } else {
            R[i] = tolower(S[i]);
        }
    }
    cout << R << "\n";
}