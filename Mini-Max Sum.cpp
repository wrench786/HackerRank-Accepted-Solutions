#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int i,j,temp;
    long long int arr[5],sum=0;
    for(i=0;i<5;i++){
        cin>>arr[i];
    }
    for(i=0;i<4;i++){
        for(j=0;j<4-i;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(i=0;i<5;i++){
        sum=sum+arr[i];
    }
    cout<<sum-arr[4]<<" "<<sum-arr[0]<<endl;
}
