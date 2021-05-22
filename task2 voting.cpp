#include <iostream>
using namespace std;
int main()
{
	int age;
	cout<<"enter age of voter : ";
	cin>>age;
	
	if(age>=18)
	{
		cout<<"\n you are eligible for voting ";
		if(age>=18,age<55)
		{
			cout<<"\n please wait for your turn ";
		}
		else if(age>=55,age<80)
		{
			cout<<"\n you are eligible for senior citizen line ";
		}
		if(age>=80)
		{
			cout<<"\n you dontneed to wait in line direct entery for voting ";
		}
	}
	else
		cout<<"\n you are under age for voting ";
	return 0;
}
