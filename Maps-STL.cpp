#include<iostream>
#include<map>
#include<string>
#include<iterator>

int main()
{
    std::map<std::string, int>ma;
    std::map<std::string, int>::iterator it;
    std::string str;
    int n,t,i,val;
    std::cin>>t;
    while(t--){
        std::cin>>n>>str;
        if(n==1){
            std::cin>>val;
        }
        if(n==1){
            it = ma.find(str);
            if(it==ma.end()){
                ma.insert(make_pair(str,val));
            }
            else{
                ma[str]+=val;
            }
        }
        else if(n==2){
            ma.erase(str);
        }
        else{
            it = ma.find(str);
            if(it==ma.end()){
                std::cout<<0<<std::endl;
            }
            else{
                std::cout<<it->second<<std::endl;
            }
        }
    }
}
