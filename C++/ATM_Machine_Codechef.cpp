#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int n,k;
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        if(k>=arr[i])
	        {
	            cout<<1;
	            k=k-arr[i];
	        }
	        else
	        {
	            cout<<0;
	        }
	        
	    }
	    cout<<endl;
	}
	return 0;
}
