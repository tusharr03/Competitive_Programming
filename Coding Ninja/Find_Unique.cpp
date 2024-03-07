#include<iostream>
using namespace std;

int findUnique(int *arr, int size)
{
    //Write your code here
    int a=0;
    for(int i=0;i<size;i++)
    {
        int temp=arr[i];
        for(int j=i+1;j<size;j++)
        {
            if(temp==arr[j])
            {
                break;
            }
        }
        a=temp;
    }
    return a;
};

int main()
{
    int size;
    cin>>size;
    int arr[size];
    cout<<findUnique(arr,size);
    return 0;
}
