#include <bits/stdc++.h>
#define wrench786 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define PI (acos(-1.0))
#define LIMIT 1000000000
#define pb push_back
#define dot(x) fixed<<setprecision(x)
using namespace std;

int main(){
    int n,x,a,b,i;
    vector<int>vec;
    cin>>n;
    while(n--){
    	cin>>x;
    	vec.pb(x);
    }

    cin>>x;
    if(vec.size()>=x){
    	x--;
    	vec.erase(vec.begin()+x);
    }
    cin>>a>>b;
    if(vec.size()>=a){
    	a--;
    	if(vec.size()<b){
    		vec.erase(vec.begin()+a,vec.end());
    	}
    	else{
    		b--;
    		vec.erase(vec.begin()+a,vec.begin()+b);
    	}
    }

    cout<<vec.size()<<endl;
    for(i=0;i<vec.size();i++){
    	cout<<vec[i]<<" ";
    }
    cout<<endl;
}
