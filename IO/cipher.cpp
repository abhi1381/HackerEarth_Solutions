#include<bits/stdc++.h>

using namespace std;

int main() {
    string S;
    char C[200];
    long int K;
    cin >> S >> K;
    for(int i = 0; i < S.length(); i++)
    {
        if (isdigit(S[i]) !=0 || isalpha(S[i]) != 0) {
            if(isupper(S[i]) && (S[i] + K > 90)) {
                if((S[i] + K) > 116) {
                    int q = K % (S[i] - 65);
                    int r = K % (S[i] - 65);
                    for (int j = q, i = 0; i < (S[i] - 65); i++)
                    {
                        C[i] = (S[i] + j) - 26;
                    }
                    C[i] = C[i] + r;
                } else {
                    C[i] = (S[i] + K) - 26;
                }
                
            } else if(islower(S[i])  && (S[i] + K > 122)) {
                if((S[i] + K) > 148) {
                    int Q = K % (S[i] - 97);
                    int R = K % (S[i] - 97);
                    for (int j = Q, i = 0; i < (S[i] - 97); i++)
                    {
                        C[i] = (S[i] + j) - 26;
                    }
                    C[i] = C[i] + R;
                } else
                {
                    C[i] = (S[i] + K) - 26;
                }

            } else if(isdigit(S[i]) != 0 && (S[i] + K > 57)) {
                if((S[i] + K) > 67) {
                    int Qn = K % (S[i] - 47);
                    int Rn = K % (S[i] - 47);
                    for (int j = Qn, i = 0; i < (S[i] - 47); i++)
                    {
                        C[i] = (S[i] + j) - 10;
                    }
                    C[i] = C[i] + Rn;
                } else {
                    C[i] = (S[i] + K) - 10;
                }
            } else {
                C[i] = S[i] + K;
            }
        } else
        {
            C[i] = S[i];
        }
    }
    cout << C << "\n"; 
     
}