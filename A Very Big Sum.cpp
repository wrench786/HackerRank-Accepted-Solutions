#include <stdio.h>
using namespace std;

int main()
{
    int n,i;
    long long int sum=0,x;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%lld",&x);
        sum+=x;
    }
    printf("%lld\n",sum);
}
