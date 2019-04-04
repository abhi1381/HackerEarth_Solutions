#include<bits/stdc++.h>

int primeCheck(int N);

using namespace std;



int primeCheck(int N)
{
    int flag = 0;
    for (int i = 2; i <= sqrt(N); i++)
    {
        int D = N % i;
        if (D == 0)
        {   
            flag = 1;
            return false;
        }
    }

    if(flag == 0) {
        return N;
    }

    return 0;
}

int main()
{
    int N, C;
    cin >> N;
    
    for(int i = 1; i <= N; i++)
    {
        C = primeCheck(i);
        if(C != 0 && C != 1) {
            cout << C << " ";
        }
    }
    
    return 0;
}