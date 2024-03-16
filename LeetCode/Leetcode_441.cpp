class Solution {
public:
    int arrangeCoins(int n) {
        int count=0;
        int i=1;
        while((n-i)>=0)
        {
            n=n-i;
            i=i+1;
            count++;
        }
        return count;
    }
};
