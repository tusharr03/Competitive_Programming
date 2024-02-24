#include<iostream>
using namespace std;

int main()
{
    int a,b,n;
    cin>>n;
    int count=0;
    int sum=0;
    int product=1;
    for(int i=1;i<=n;i=i*10)
    {
        if((n/i)!=0)
        {
            count=count+1;
        }
        else
        {
            continue;
        }
    }
    cout<<"Number of digtis in n is : "<<count<<endl;

    for(int i=1;i<=count;i++)
    {
        a=n%10;
        sum=sum+a;
        product=product*a;
        n=n/10;
    }
    cout<<"Sum of the Digits = "<<sum<<endl;
    cout<<"Product of the Digits = "<<product<<endl;

    cout<<product-sum<<endl;
    return 0;
}