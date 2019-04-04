#include<bits/stdc++.h>
using namespace std;

int main() {
    string S,sub;
    int T,count=0;
    cin >> T;

    while(T--){
        cin >> S;
        // cout << S.substr(0,5) << "\n";
        for(int i = 0; i < S.length(); i++)
        {
            for(int j = 1; j <= S.length() - i; j++)
            {
                sub = S.substr(i,j);
                // cout << sub << " " << j << "\n";
                for(int k = 0; k < sub.length(); k++)
                {
                    // cout << k << "\n";
                    if (sub[k] == 'a' || sub[k] == 'e' || sub[k] == 'i' ||
                        sub[k] == 'o' || sub[k] == 'u' || sub[k] == 'A' || sub[k] == 'E' || sub[k] == 'I' || sub[k] == 'O' ||sub[k] == 'U') {
                          count++;
                        //   cout << count << "\n";  
                        } else
                        {
                            count += 0;
                            // cout << count << "\n";
                        }    
                }

            }
        }
        cout << count << "\n";
        count = 0;
        // sub = "";
    }
}