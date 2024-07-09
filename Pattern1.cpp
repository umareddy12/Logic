#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the number of lines in the pattern:"<<endl;
	cin>>n;
	for(int row=1;row<=n;row++)
	{
	//for every row run the column
	for(int col=1;col<=row;col++)
	{
	cout<<"*";
	}
	cout<<endl;
	}
	return 0;
}
