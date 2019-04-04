#include<bits/stdc++.h>

using namespace std;

int calculateSegments(int Nseg);

int seg[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

int calculateSegments(int *Nseg,int c) {
    int count = 0;

    for(int i = 0; i < c; i++)
    {
        count += seg[Nseg[i]];
    }
    return count;
}

int main() {
    int T,N;
    cin >> T;
    while(T--){
        string S;
        cin >> S;
        int c = S.length();
        int a[c];
        int b=0;
        while(b<=c) {
            a[b] = S[b] - '0';
            b++;
        }
        int rem;
        int segNum = calculateSegments(a,c);
        // cout << segNum << "\n";
        rem = segNum/2;
        if(segNum % 2 == 0) {
            for(int i = 0; i < rem; i++)
            {
                cout << 1;
            }
        } else {
            cout << 7;
            for (int i = 0; i < rem-1; i++)
            {
                cout << 1;
            }   
        }
        cout << "\n";
    }
}