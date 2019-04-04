#include<bits/stdc++.h>

using namespace std;

int main() {
    int N,count = 1;
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        count += count * i;
    }

    cout << count << "\n";
    
}