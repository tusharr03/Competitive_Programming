#include<iostream>
using namespace std;

class Solution {
public:
    int count=0;
    int numberOfSteps(int num) {
        while(num!=0)
        {
            if(num%2==0)
            {
                num=num/2;
                count=count+1;
            }
            else
            {
                num=num-1;
                count=count+1;
            }
        }
        return count;
    }
};

int main()
{
    int a;
    cin>>a;
    Solution s1;
    cout<<s1.numberOfSteps(a)<<endl;
    return 0;
}