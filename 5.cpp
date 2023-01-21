#include<forward_list>
#include<iostream>
#include<iterator>
#include<algorithm>
using namespace std;

int main()
{
    forward_list<int> f;
    f.assign({1,2,2,4,2,5,5});
  
   
    for(auto it=f.begin();it!=f.end();it++)
    {
        auto temp=it;
        temp++;
        while((*temp)==(*it))
        {   
            f.erase_after(it);
        }

    }

    for(auto it=f.begin();it!=f.end();it++)
    {
        cout<<*it<<" ";
    }

    

    return 0;
}