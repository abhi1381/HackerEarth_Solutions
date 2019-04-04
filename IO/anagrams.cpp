#include<bits/stdc++.h>

using namespace std;

int main() {
    string a , b;
    int t , counta[26] = {0},count = 0;
    cin >> t;
    while(t--){
        /* code */
        count = 0;
        cin >> a >> b;
        
        // frequecy of char in a
        for(int i = 0; i < a.length(); i++)
        {
            counta[a[i] - 'a']++;
        }

        // frequecy of char in b
        for (int i = 0; i < b.length(); i++)
        {
            counta[b[i] - 'a']--;
        }

        for(int i = 0; i < 26; i++)
        {
            count += abs(counta[i]);
        }

        for(int i = 0; i < 26; i++)
        {
            counta[i] = 0;
        }
        
        
        cout << count << "\n";

    }

    return 0;
    
}