#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<limits.h>
using namespace std;
int findoddone(vector<int>arr)
{
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(start==end)
        {
            return start;
        }
        if(mid%2==0)
        {
            if(arr[mid]==arr[mid+1])
            {
                start=mid+2;
            }
            else
            {
                end=mid;
            }
        }
        else
        {
            if(arr[mid]==arr[mid-1])
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
    mid=start+(end-start)/2;
    }
    return -1;
}
int main()
{
vector<int>arr{1,1,2,2,3,3,4,4,3,600,600,4,4};
int ans=findoddone(arr);
cout<<"The index is"<<ans<<endl;
cout<<"The value is"<<arr[ans]<<endl;
return 0;
}