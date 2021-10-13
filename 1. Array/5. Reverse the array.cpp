#include<iostream>
using namespace std;

void reverse(int arr[], int n)
{
    int right=(n-1);
    for(int left=0;left<(n/2);left++)
    {
        swap(arr[left],arr[right]);
        right--;
    }
    cout<<"Reversed array is: "<<endl;
    for(int x =0 ; x < n; x++)
    {
        cout<<arr[x]<<" ";
    }
}

int main()
{
    int arr[]={30,7,6,5,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"size of the array: "<<n<<endl;
    cout<<"Array to be reversed is: "<<endl;
    for(int x =0 ; x < n; x++)
    {
        cout<<arr[x]<<" ";
    }
    cout<<endl;

    reverse(arr,n);
}