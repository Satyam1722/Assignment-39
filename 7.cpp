#include<bits/stdc++.h>
using namespace std;

int main()
{
    forward_list <int>f1={1,100,3,88};
    forward_list <int>f2={5,60,788,800,9};

    forward_list <int>f3;
    f1.sort();
    f2.sort();
    f3.assign(f1.begin(),f1.end());
    
    f3.merge(f2);
    for(auto it=f3.begin();it!=f3.end();it++)
    {
        cout<<*it<<" ";
    }

    return 0;
    

}