#include<iostream>
using namespace std;
int main()
{
	int i,j,a[2][2],b[2][2],c[2][2];
	cout<< "provided first matrix"<< endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cin >> a[i][j];
		}
	}
	cout<< "provided second matrix"<< endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cin >> b[i][j];
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]= a[i][j]+b[i][j];
		}
	}
    cout<< "addition of two matrix"<< endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<c[i][j]<<" ";
			
		}
		cout<< endl;
	}	
	
 return 0;	
}
