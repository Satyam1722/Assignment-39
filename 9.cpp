#include<bits/stdc++.h>
using namespace std;

int main()
{
    forward_list <int>f1={1,100,3,88};
    forward_list <int>f2={5,60,788,800,9};
    
   f1.splice_after(f1.begin(),f2,f2.before_begin(),f2.end());

   for(auto it=f1.begin();it!=f1.end();it++)
   {
        cout<<*it<<" ";
   }

    return 0;
    

}