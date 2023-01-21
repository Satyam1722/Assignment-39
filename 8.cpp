#include<bits/stdc++.h>
using namespace std;

int main()
{
    forward_list <int>f1={1,100,3,88};
    forward_list <int>f2={5,60,788,800,9};
    
    cout<<"Before Swapping :: "<<endl;
    for(auto it=f1.begin();it!=f1.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto it=f2.begin();it!=f2.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    f1.swap(f2);
    
    cout<<"After swapping :: "<<endl;

    for(auto it=f1.begin();it!=f1.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto it=f2.begin();it!=f2.end();it++)
    {
        cout<<*it<<" ";
    }

    return 0;
    

}