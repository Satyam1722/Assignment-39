#include<bits/stdc++.h>
using namespace std;

int main()
{
    forward_list <int>f1={1,100,3,88};
    forward_list <int>f2;
    f2.assign(f1.begin(),f2.end());
    
   for(auto it=f2.begin();it!=f2.end();it++)
   {
        cout<<*it<<" ";
   }

    return 0;
}