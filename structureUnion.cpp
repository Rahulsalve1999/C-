#include<iostream>
using namespace std;
struct student1
{
	int roolNo;
	float marks;
	double percentage;
};

union student2
{
	int roolNo;
	float marks;
	double percentage;
};

int main()
{
	struct student1 s1;
	union student2 s2;
	cout<<sizeof(s1)<<endl;
	cout<<sizeof(s2)<<endl;
	return 0;
}
