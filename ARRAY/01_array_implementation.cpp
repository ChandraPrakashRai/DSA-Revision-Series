#include<iostream>
using namespace std;
    void printArray(int arr[10] , int n)
    {
        int x;
        for(int i = 0 ; i<n ; i++)
        {
            cout<<"Enter the " <<i<<"th element" ;
            cin>>arr[i];
        }
        
        for(int i = 0 ; i<n ; i++)
        {
            cout<<arr[i];
        }

    }
int main()
{
    int arr[10];
    int n;
    cout<<"enter number of element in array: "<<endl;
    cin>>n;


   printArray(arr , n);
}