// W.A.P to which is greter number using if-else statement :

#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter two number :\n";
	cin>>a>>b;
/*	if(a>b)
	{
	   cout<<"a is greter number "<<a;
	}
	else
	{
		cout<<"b is greter number "<<b;
	}*/
	// Ternary Operator :
	c = a > b ? a : b;
	cout<<"Greter Number is =s"<<c;
	
	return 0;
}
