#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<limits.h>
using namespace std;
int dividetwono(int dividend,int divisor)
{
    int start=0;
    int end=abs(dividend);
    int mid,ans=0;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(abs(mid*divisor)==abs(dividend))
        {
            ans=mid;
            break;
        }
        if(abs(mid*divisor)>abs(dividend))
        {
            end=mid-1;
        }
        else
        {
            ans=mid;
            start=mid+1;
        }
    }
    if((dividend>0 && divisor>0) || (dividend<0 && divisor<0))
    {
        return ans;
    }
    else
    {
        return -ans;
    }
}
int main()
{
int divisor,dividend;
cin>>divisor;
cin>>dividend;
int finalans=dividetwono(dividend,divisor);
cout<<finalans;
return 0;
}