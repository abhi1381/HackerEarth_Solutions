#include<bits/stdc++.h>
using namespace std;

int returnSum(long long int *a,long long int i);

int returnSum(vector<int> &a, long long int i, long long int sum, long long int el)
{
    long long int j = i;
    while (j < i + el)
    {
        sum += a[j];
        j++;
    }

    return sum;
}

int main() {
    long long int N,pairs= 0,el=0,sum = 0;
    cin >> N;
    vector<int> a;

    for(long long int i = 0; i < N; i++)
    {
        long long int input;
        cin >> input;
        a.push_back(input);
    }

    for(long long int i = 0; i < v.size(); i++)
    {
        pairs = sqrt(8*(N - i)  +1) - 1;
        pairs = floor(pairs/2); 
        el = pairs * (pairs + 1);
        el = el /2;

        sum = returnSum(a,i,sum,el);
    
        a[i] = sum;
        
        sum = 0;
        el = 0;
        pairs = 0;
    }

    int n = a.size();
    sort(a.begin(), a.end());

    cout << a[n-1] << "\n";
}