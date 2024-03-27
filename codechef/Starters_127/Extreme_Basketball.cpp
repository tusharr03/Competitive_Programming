#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int score_a,score_b;
	    cin>>score_a>>score_b;
	    if(score_a>=score_b+10)
	    {
	        cout<<0<<endl;
	    }
	    else
	    {
	        int result=(score_a)-(score_b);
	        int count=0;
	        while(result<10)
	        {
	            result=result+3;
	            count=count+1;
	        }
	        cout<<count<<endl;;
	    }
	}
	return 0;

}
