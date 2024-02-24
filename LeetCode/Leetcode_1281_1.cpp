#include<iostream>
using namespace std;

int main()
{
    int sum=0;
    int product=1;
    int prev;

    int n;
    cin>>n;
    while(n!=0)
    {
        prev=n%10;
        sum=sum+prev;
        product=product*prev;
        n=n/10;
    }
    cout<<product-sum<<endl;
}