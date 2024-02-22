#include<iostream>
using namespace std;

class Solution
{
    public:
    int count=0;
    int hammingWeight(uint32_t n)
    {
        while(n!=0)
        {
            if(n&1)
            {
                count=count+1;
            }
            n=n>>1;
        }
        return count;
    }
};

int main()
{
    Solution s1;
    s1.hammingWeight(1011);
    return 0;
}