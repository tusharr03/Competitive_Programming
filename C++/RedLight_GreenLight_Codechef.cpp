#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int count=0;
	for(int i=0;i<t;i++)
	{
	    int n,k;
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        if(arr[i]<=k)
	        {
	            count=count;
	        }
	        else
	        {
	            count=count+1;
	        }
	    }
	    cout<<count<<endl;
	    count=0;
	}
	
	
	return 0;
}
