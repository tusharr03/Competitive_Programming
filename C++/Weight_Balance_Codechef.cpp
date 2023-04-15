#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
    for(int i=0;i<t;i++)
    {
        int w1,w2,x1,x2,m;
        cin>>w1>>w2>>x1>>x2>>m;
        int diff=w2-w1;
        int min=x1*m;
        int max=x2*m;
        if(diff>=min && diff<=max)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
	return 0;
}
