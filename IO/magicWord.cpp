#include <bits/stdc++.h>
using namespace std;



int main()
{
    string S;
    int N,T, k, back, front;
    int ArrP[] = {67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113};
    cin >> T;

    while(T--){
        cin >> N >> S;
        int len = S.length();
        for(int i = 0; i < len ; i++)
        {
            int k = 0;
            while(int(S[i]) >= ArrP[k]) {
                k++;
            }
            if(int(S[i]) <= 67) {
                cout << char(67);
            } else if(int(S[i]) >= 113) {
                cout << char(113);
            } else {
                front = ArrP[k] - int(S[i]);
                back = int(S[i]) - ArrP[k-1];

                if(back <= front) {
                    cout << char(ArrP[k -1]);
                } else {
                    cout << char(ArrP[k]);
                }
            }
        }

        cout << "\n";
    }
    return 0;
}

