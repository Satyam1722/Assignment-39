#include<forward_list>
#include<iostream>
#include<iterator>
#include<algorithm>
using namespace std;

int main()
{
    forward_list<int> f{1};
    //forward_list<int>::iterator it;
    
    f.insert_after(f.begin(),{2,3,4,5,6,7,8,9,10});
    int sum=0;
    for(auto it=f.begin();it!=f.end();it++)
    {
        sum+=*it;
    }

    cout<<"sum is : "<<sum<<endl;

    return 0;
}