//재귀로 n번쨰 피보나치 수 리턴하기ㄴㄴ
#include <stdio.h>

int n;

long long int f(int k)
{
    if(k <= 2) return 1;
    return f(k-2) +f(k -1);
}

int main()
{
    scanf("%d",&n);
    printf("%lld\n",f(n));
    return 0;
}