#include <iostream>
using namespace std;
int main ()
{
	int x,a,b,c;
	cout<<"enter three numbers"<<endl;
	cin>>a>>b>>c;
	x= (a>b && a>c) ? a:0;
	x=(b>a && b>c) ? b:0;
	x=(c>a && c>b) ? c:0;
	cout<<x<<endl;
	return 0;
}
