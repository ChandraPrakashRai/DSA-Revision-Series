#include<iostream>
using namespace std;
int swap(int &a , int &b)
{
    int temp;
    temp = a;
     a = b;
     b=temp;
   

     
   
}

int main()
{
    int a = 10 ;
    int b = 5;
    cout<<"Value of a and b before swapping :"<<a <<" "<<b<<endl;
    
    swap(a , b);
    cout<<"value of a and b after swapping :"<<a<<" "<<b;


   

}