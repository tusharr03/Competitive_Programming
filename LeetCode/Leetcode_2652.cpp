#include<iostream>
using namespace std;

class Solution {
public:
    int sum=0;
    int sumOfMultiples(int n) 
    {
        for(int i=1;i<=n;i++)
        {
            if(i%3==0 || i%5==0 ||i%7==0)
            {
                sum=sum+i;
            }
        }
        return sum;
    }
};

int main()
{
    int a;
    cin>>a;
    Solution s1;
    cout<<s1.sumOfMultiples(a)<<endl;
    return 0;
}