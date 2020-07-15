#include <iostream>
using namespace std;

int main()
{
    int n,i,ma,co=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
        if(i==0){
            ma=arr[i];
        }
        else{
            if(arr[i]>ma)
                ma = arr[i];
        }
    }
    for(i=0;i<n;i++){
        if(arr[i]==ma)
            co++;
    }
    cout<<co<<endl;
}
