#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>>n;
    int arr[n];
    int arr_rev[n];
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr[i]=x;
    }
    for(int i=0;i<n;i++)
    {
        arr_rev[i]=arr[n-1-i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr_rev[i]<<" ";
    }
      
    return 0;
}
