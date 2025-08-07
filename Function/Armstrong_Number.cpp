#include<iostream>
using namespace std;

int main()
{
    int n ;
    cout<<"enter a number: ";
    cin>>n;
    int sum = 0;
    int temp = n;
    while(temp>0)
    {
        int digit = temp%10;
        sum+= digit*digit*digit;
        temp/=10;


    }
    if(sum==n)
    {
        cout<<n<<" is an Armstring Number";
    }
    else
    {
        cout<<n<<" is not an Armstrong number";
    }
}