#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int star , space , number;
	star = 1;
	cout<<"1 _ 50: ";
	cin>>number;
	space = number;
	
	for(int i = 0 ; i < number ; i++)
	{
		for(int d = 0 ; d < space ; d++)
		{
			cout<<" ";
		}
	for(int r = 0 ; r < star ; r++)
		{
				cout<<"*";
		}
		cout<<endl;
		star = star + 2;
		--space;
}
	getch();
	return 1;
}