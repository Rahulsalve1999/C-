//W.A.P to Arithmatic Opration using else if ladder statement :

#include<iostream>
using namespace std;
int main()
{
	int a,b,choise,add,sub,multi,div;
	cout<<"Enter two numbers\n";
	cin>>a>>b;
	cout<<"1. Addition\n";
	cout<<"2. Subtraction\n";
	cout<<"3. Multifiction\n";
	cout<<"4 Division\n\n";
	cout<<"Entet Your choice\n";
	cin>>choise;
	
	if(choise==1)
	{
		add = a + b;
		cout<<"a + b = "<<add;
	}
	else if(choise==2)
	{
		sub = a - b;
		cout<<"a - b = "<<sub;
	}
	else if(choise==3)
	{
			multi = a * b;
		cout<<"a * b = "<<multi;
	
	}
	else if(choise==4)
	{
			div = a / b;
		cout<<"a / b = "<<div;
	
	}
	else
	{
		cout<<"Invalide Your Choise";
	}
	return 0;
}
