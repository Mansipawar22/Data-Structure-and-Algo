#include <iostream>
using namespace std;

int consecutive_one(int arr[],int n)
{
    int max=0;
    int count=0;
    for (int i=0;i<n;i++)
    {
        if (arr[i]==1)
        {
           count++;
        }
        else
        {
            if(count>max)
            {
                max=count;
                count=0;
            }
        }
        if (i==(n-1))
        {
            if(count>max)
            {
                max=count;
            }
        }
        
    }
    return max;
}

int main()
{
    int arr[]={1,0,1,1,1,1,0,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max_consecutive_one=consecutive_one(arr,n);
    cout<<"Max cosecutive no. of one in the given array is: "<<max_consecutive_one<<endl;
}