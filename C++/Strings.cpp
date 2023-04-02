#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a;
    string b;
    getline(cin>>ws,a);
    getline(cin>>ws,b);
    string c=a+b;
    string n;
    n[0]=a[0];
    a[0]=b[0];
    b[0]=n[0];
    cout<<a.length()<<" "<<b.length()<<endl;
    cout<<c<<endl;
    cout<<a<<" "<<b<<endl;
  
    return 0;
}
