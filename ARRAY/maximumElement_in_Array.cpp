#include<bits/stdc++.h>

using  namespace std;

int main()
{
    int ans = INT_MIN;
    int n ;
    cout<<"enter the size of n: " ;
    cin>>n;

    int arr[n];

    for(int i =0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    for(int i =0 ; i<n ; i++)
    {
        if(arr[i]>ans)
        {
            ans = arr[i];
        }
    }
    cout<<"the maximum element in this array is : "<<ans;
    

}