#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int N,total = 1;
    // int count = 0;
    cin >> N;
    
    while(1){
        N = N - total;
        if (N <= 0) {
            cout << "Patlu" << "\n";
            break;
        }
        N = N - total * 2;
        if(N <= 0) {
            cout << "Motu" << "\n";
            break;
        }
        total++;   
    }
}
