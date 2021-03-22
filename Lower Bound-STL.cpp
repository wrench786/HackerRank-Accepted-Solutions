#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main(){
    ll int n,x;
    vector<ll int>vec;
    cin>>n;
    while(n--){
        cin>>x;
        vec.pb(x);
    }
    cin>>n;
    while(n--){
        cin>>x;
        auto it1 = lower_bound(vec.begin(),vec.end(),x);
        auto it2 = upper_bound(vec.begin(),vec.end(),x);
        if(it1!=it2) cout<<"Yes "<<(it1-vec.begin())+1<<endl;
        else cout<<"No "<<(it2-vec.begin())+1<<endl;
    }
}
