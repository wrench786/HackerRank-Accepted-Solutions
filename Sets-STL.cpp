#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int>se;
    set<int>::iterator it;
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        if(n==1){
            se.insert(x);
        }
        else if(n==2){
            se.erase(x);
        }
        else{
            it = se.find(x);
            if(it!=se.end()){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
    }
}
