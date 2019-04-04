#include<bits/stdc++.h>

using namespace std;

int main() {
    string I;
    int result = 0;
    cin >> I;

    
    if(I.length() != 10) {
        cout << "Illegal ISBN" << "\n";
    } else
    {
        for (int i = 0; i < 10; i++)
        {
            string S;
            S = I[i];
            int x = stoi(S);
            result += (i + 1) * x;
        }

        if (result % 11 == 0)
        {
            cout << "Legal ISBN"
                 << "\n";
        }
        else
        {
            cout << "Illegal ISBN"
                 << "\n";
        }
    }
    
}