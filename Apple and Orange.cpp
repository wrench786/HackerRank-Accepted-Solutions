#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int s,t,a,b,m,n,i;
    cin>>s>>t>>a>>b>>m>>n;
    vector <int> app(m),ora(n);
    int ans =0;
    for(i=0;i<app.size();i++){
        cin>>app[i];
        app[i]+=a;
        if(app[i]>=s && app[i]<=t) ans++;
    }
    cout<<ans<<endl;
    ans=0;
    for(i=0;i<ora.size();i++){
        cin>>ora[i];
        ora[i]+=b;
        if(ora[i]>=s && ora[i]<=t) ans++;
    }
    cout<<ans<<endl;
}
