#include <stdio.h>
using namespace std;

int main()
{
    int n,i,j,x,sum1=0,sum2=0;
    scanf("%d",&n);
    int arr[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++){
        sum1+=arr[i][i];
    }
    for(i=0,j=n-1;i<n;i++,j--){
        sum2+=arr[i][j];
    }
    x = sum1 - sum2;
    if(x<0){
        x = x-2*x;
    }
    printf("%d\n",x);
}
