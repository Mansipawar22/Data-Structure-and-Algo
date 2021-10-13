// To Left Rotate an array by One

#include<iostream>
using namespace std;

void left_rotate(int arr[], int n)
{
    int x=0;
    for(int y=1; y<n;y++)
    {
        swap(arr[x],arr[y]);
        x++;
    }
    cout<<"Left Rotated array is: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Array to be left rotated is: " << endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    left_rotate(arr,n);
}