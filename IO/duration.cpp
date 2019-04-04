#include<bits/stdc++.h>

using namespace std;

int main() {
    int N,SH,SM,EH,EM,RH,RM;
    long int result;
    cin >> N;
    while(N--){
        /* code */
        cin >> SH >> SM >> EH >> EM;

        result = ((EH * 60) + EM) - ((SH * 60) + SM);
        RH = result / 60;
        RM = result % 60;
        cout << RH << " " << RM << "\n";
    }
    
}