#include<iostream>
using namespace std;

// Efficient Solution
int largest(int arr[],int n)
{
    int largest=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[largest])
        {
            largest=i;
        }
    }
    return largest;
}

int main()
{
    int arr[]={40,8,150,100};
    int n = sizeof(arr,arr[0]);
    cout<<"size of the array: "<<n<<endl;
    int largest_index = largest(arr,n);
    cout<<"largest no. index of the array: "<<largest_index<<endl;
}

