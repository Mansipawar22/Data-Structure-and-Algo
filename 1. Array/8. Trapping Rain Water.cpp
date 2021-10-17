#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int trap(int arr[], int n)
{
    int left=0;
    int sum=0;
    int trap=0;
    for(int i=1;i<n;i++)
    {
        if(arr[left]<=arr[i])
        {
            trap=trap+((arr[left]*((i-left)-1))-sum);
            sum=0;
            left=i;
        }
        else
        {
            sum=sum+arr[i];
        }    
    }
    
    sum=0;
    int right=(n-1);
    for(int i=(n-2);i>=left;i--)
    {
        if(arr[right]<=arr[i])
        {
            trap=trap+((arr[right]*((right-i)-1))-sum);
            sum=0;
            right=i;
        }
        else
        {
            sum=sum+arr[i];
        }
    }
    return trap;
}

int main()
{
    int arr[]={3,5,6,3,6,3,3,2,3,4,2,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int trapped_water=trap(arr,n);
    cout<<"Amount of Trapped rain water is: "<<trapped_water<<endl;
}