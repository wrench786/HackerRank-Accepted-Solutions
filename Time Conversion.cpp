#include<iomanip>
#include<iostream>
using namespace std;

int main()
{
    char arr[3],ch;
    int h,m,s;
    cin>>h>>ch>>m>>ch>>s>>arr;
    if(arr[0]=='A')
    {
        if(h==12)
        {
            cout<<setfill('0')<<setw(2)<<h-12<<":"<<setfill('0')<<setw(2)<<m<<":"<<setfill('0')<<setw(2)<<s<<endl;
        }
        else
        {
            cout<<setfill('0')<<setw(2)<<h<<":"<<setfill('0')<<setw(2)<<m<<":"<<setfill('0')<<setw(2)<<s<<endl;
        }
    }
    else
    {
        if(h==12)
        {
            cout<<setfill('0')<<setw(2)<<h<<":"<<setfill('0')<<setw(2)<<m<<":"<<setfill('0')<<setw(2)<<s<<endl;
        }
        else
        {
            cout<<setfill('0')<<setw(2)<<h+12<<":"<<setfill('0')<<setw(2)<<m<<":"<<setfill('0')<<setw(2)<<s<<endl;
        }
    }
}
