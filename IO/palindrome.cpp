#include<bits/stdc++.h>

using namespace std;

int main() {
    string str1;
    char str2[201];
    cin >> str1;
    for(int i = str1.length()- 1,j=0; i >= 0 ; i--,j++)
    {
        str2[j] = str1[i];
    }


    if(str1 == str2) {
        cout << "YES" << '\n';
    } else {
        cout << "NO" << '\n';
    }
    
};