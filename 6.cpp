#include<bits/stdc++.h>
using namespace std;

int main()
{
    forward_list <int>f1={1,2,3,4};
    forward_list <int>f2={5,6,7,8,9};

    forward_list <int>f3;
    
    f3.assign(f1.begin(),f1.end());
    
    f3.merge(f2);
    for(auto it=f3.begin();it!=f3.end();it++)
    {
        cout<<*it<<" ";
    }

    return 0;
    

}