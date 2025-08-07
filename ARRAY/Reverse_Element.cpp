// #include<bits/stdc++.h>

// using  namespace std;

// void Reverse(int arr[] , int n)
// {
//     int temp[n];
//    int i = n-1;
//    int j =0 ;
//    while(i>=0)
//    {
//         temp[j]=arr[i];
//         i--;
//         j++;
//    }

//      for(int j =0 ; j<n ; j++)
//     {
//         cout<<temp[j]<<endl;
//     }

// }

// int main()
// {
//     int ans = INT_MIN;
//     int n ;
//     cout<<"enter the size of n: " ;
//     cin>>n;

//     int arr[n];

//     for(int i =0 ; i<n ; i++)
//     {
//         cin>>arr[i]<<endl;
//     }

//     Reverse(arr, n);
   
    

// }



#include<bits/stdc++.h>

using  namespace std;

void Reverse(int arr[] , int n)
{
    int first = 0 ;
    int second = n-1;

    while(first<=second)
    {
       swap(arr[first] , arr[second]);
       first++;
       second--;
      
    }

     for(int i =0 ; i<n ; i++)
    {
        cout<<arr[i]<<endl;
    }

}

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
        cout<<endl;
    }

    Reverse(arr, n);
   
    

}