#include<iostream>
using namespace std;

class Solution
{
    int ans,digit=0;
    public:
    int reverse(int x)
    {
        while(x!=0)
        {
            digit=x%10;
            ans=ans*10+digit;
            x=x/10;
        }
        return ans;
    }
};

int main()
{
    Solution s1;
    int a;
    cin>>a;
    cout<<s1.reverse(a)<<endl;
    return 0;    
}
