#include<stdio.h>

int main() {
    unsigned i,N,product = 1;
    long long int a;
    do {
        scanf("%d",&N);
    }
    while(N < 1 && N > 1000);
    
    for(i = 0; i < N; i++)
    {
        do {
            scanf("%lli",&a);
            product = (product * a) % (1000000007);
        }
        while(a < 1 && a > 1000);
    }
    printf("%i\n",product);
}
