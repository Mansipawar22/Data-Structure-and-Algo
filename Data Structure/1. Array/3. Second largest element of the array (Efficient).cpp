#include<iostream>
using namespace std;

int sec_largest_efficient(int arr[],int n)
{
    int max=0;
    int sec_max=-1;
    for(int i=1;i<n;i++)
    {
        if (arr[i]!=arr[max])
        {
            if (arr[i]>arr[max])
            {
                sec_max=max;
                max=i;
            }
            else if (sec_max=-1 || arr[i]>arr[sec_max])
            {
                sec_max=i;
            }  
        }  
    }
    return sec_max;
}

int main()
{
    int arr[]={20,10,20,8,12};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sec_largest_index = sec_largest_efficient(arr,n);
    cout<<"Index of Sec largest no. is: "<<sec_largest_index<<endl;
}