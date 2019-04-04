#include<bits/stdc++.h>

using namespace std;

int main() {
    int x=0,y=0;
    string S;
    cin >> S;
    for(int i = 0; i < S.length(); i++)
    {
        if(S[i] == 'L') {
            x--;
        } else if(S[i] == 'R') {
            x++;
        } else if(S[i] == 'U') {
            y++;
        } else {
            y--;
        }
    }
    cout << x << " " << y << "\n";
}