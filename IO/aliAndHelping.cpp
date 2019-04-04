#include <bits/stdc++.h>
using namespace std;

// partially solved
int main()
{
    string S;
    int flag;
    cin >> S;
    if (isupper(S[2]) && S[2] != 'A' && S[2] != 'E' && S[2] != 'I' && S[2] != 'O' && S[2] != 'U' && S[2] != 'Y')
    {
        for (int i = 0; i < S.length(),isdigit(S[i]) != 0; i++)
        {
            if(i == 1) {
                int j = 3;
                if ((S[i] + S[j]) % 2 == 0)
                {
                    flag = 1;
                } else {
                    flag = 0;
                }
            } else if(i == 5) {
                int j = 7;
                if ((S[i] + S[j]) % 2 == 0)
                {
                    flag = 1;
                } else {
                    flag = 0;
                }
            } else {
                if ((S[i] + S[i + 1]) % 2 == 0)
                {
                    flag = 1;
                }else {
                    flag = 0;
                }
            }
        }
    }

    if(flag == 1) {
        cout << "valid" << "\n";
    } else {
        cout << "invalid" << "\n";
    }
}