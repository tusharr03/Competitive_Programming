#include<iostream>
using namespace std;

class Solution {
public:
    int smallestEvenMultiple(int n) 
    {
        if(n%2==0)
        {
            return n;
        }    
        else
        {
            return 2*n;
        }
    }
};

int main()
{
    int a;
    cin>>a;
    Solution s1;
    cout<<s1.smallestEvenMultiple(a)<<endl;
    return 0;
}