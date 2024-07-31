#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<limits.h>
using namespace std;
int BinarySearch(vector<int>v,int target)
{
    int start=0;
    int end=v.size()-1;
    int mid;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(v[mid]==target)
        {
            return mid;
        }
        if(mid-1>=start && v[mid-1]==target)
        {
            return mid-1;
        }
        if(mid+1<=end && v[mid+1]==target)
        {
            return mid+1;
        }
        if(v[mid]<target)
        {
            start=mid+2;
        }
        else
        {
            end=mid-2;
        }
    }
return -1;
}
int main()
{
int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<v.size();i++)
{
    cin>>v[i];
}
int target;
cin>>target;
int findelement=BinarySearch(v,target);
cout<<findelement<<endl;
return 0;
}