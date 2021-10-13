#include<iostream>
using namespace std;

int get_largest(int arr[],int n)
{
    int largest=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[largest])
        //
        {
            largest=i;
        }
    }
    return largest;
}

int Sec_largest_naive(int arr[],int n)
{
    int largest = get_largest(arr,n);
    int res = -1;
    for(int i=0;i<n;i++)
    {
        if (arr[i]!=arr[largest])
        {
            if (res==-1)
            {
                res=i;
            }
            else if (arr[i]>arr[res])
            {
                res=i;
            }
        }
    }
    return res;
}

int main()
{
    int arr[]={20,48,1,15,96,100,47,52,16,38};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Mansi pawar"<<endl;
    cout<<"size of the array: "<<n<<endl;
    int sec_largest_index = Sec_largest_naive(arr,n);
    cout<<"Index of Second Largest No. is: "<<sec_largest_index<<endl;
}


