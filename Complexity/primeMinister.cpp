#include <bits/stdc++.h>

using namespace std;

int primeCheck(int N);

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

    if (flag == 0)
    {
        return true;
    }

    return 0;
}

int main()
{
    int a, b;
    int sum = 0;
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        // cout << i << "\n";
        if (primeCheck(i))
        {
            int temp;
            temp = i;
            while (temp>0)
            {
                sum += temp % 10;
                temp = temp / 10;
            }
            if (primeCheck(sum))
            {
                cout << i << " ";
            }

            sum = 0;
        }
    }
}