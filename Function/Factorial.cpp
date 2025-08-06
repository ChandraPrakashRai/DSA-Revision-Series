#include<iostream>
using namespace std;
int fact(int num)
{
    if(num==0) return 1;

    if(num==1) return 1;
     int ans = 1;
    for(int i = 1 ; i<=num ;i++)
    {
       ans = ans*i;
    }
    return ans;
}
int main()
{
    int n ;
    cout<<"Enter the Number: "<<endl;
    cin>>n;
    
    cout<<fact(n);
    
}