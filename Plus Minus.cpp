#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,neg=0,pos=0,zero=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&x);
        if(x>0){
            pos++;
        }
        else if(x<0){
            neg++;
        }
        else{
            zero++;
        }
    }
    printf("%.6lf\n",(double)pos/n);
    printf("%.6lf\n",(double)neg/n);
    printf("%.6lf\n",(double)zero/n);
}
