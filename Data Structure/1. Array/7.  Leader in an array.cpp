#include<iostream>
using namespace std;

//  Leader is the element which iis greter then all the elements right side of it 
//  for exa:- 
//  I/P: {7,10,4,10,6,5,2}
//  O/P: {10,6,5,2}    leaders of above array

// EFFICIENT SOLUTION - O(n)

void leaders_in_array(int arr[],int n)
{
    int leader=(n-1);
    cout<<arr[leader]<<" ";
    for(int j=(n-2); j>=1; j--)
    {
        if (arr[j]>arr[leader])
        {
            leader=j;
            cout<<arr[leader]<<" ";
        }
    }
}

int main()
{
    int arr[]={7,10,4,10,6,5,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Original Array: "<<endl;
    for (int x=0;x<n;x++)
    {
        cout<<arr[x]<<" ";
    }
    cout<<endl;
    leaders_in_array(arr,n);
}