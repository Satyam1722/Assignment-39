#include<forward_list>
#include<iostream>
#include<iterator>
#include<algorithm>
using namespace std;

int main()
{
    forward_list<int> f={1,2,3,5};
    
    for(auto it=f.begin();it!=f.end();it++)
    {
        cout<<*it<<" ";
    }
}