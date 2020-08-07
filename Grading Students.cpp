#include<iostream>
using namespace std;

int main()
{
    int n,i,x;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<38){
            continue;
        }
        else if(arr[i]%5==0){
            continue;
        }
        else if(arr[i]%5!=0){
            x = arr[i]%5;
            x= 5-x;
            if(x<3){
                arr[i]+=x;
            }
        }
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
