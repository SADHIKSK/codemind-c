#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, ans =0,sum=0;
    cin>>n;
    vector<int> arr1(n),arr2(n);
    for(int i=0;i<n;i++) cin>>arr2[i];
    for(int i=0;i<n;i++) cin>>arr1[i];
    for(int i=0;i<n;i++) arr2[i]-=arr1[i];
 
    sort(arr2.begin(),arr2.end(),greater<int>());
    for(int i=0;i<n;i++)
    {
        sum+=arr2[i];
        if(sum<0)
        {ans+=abs(sum);sum=0;}
    }
    cout<<ans;
}