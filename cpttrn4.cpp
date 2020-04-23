#include<iostream>
using namespace std;
int main()
{

	int n;
	cin>>n;
	int i=0;
	int a[n][4];
	while(i!=n)
	{
		cin>>a[i][1];
		cin>>a[i][2];
		cin>>a[i][3];
		cin>>a[i][4];
		i++;
	}
	int j=0;
	while(j!=n)
	{
	
		int row;
		row=a[j][1]*a[j][3]+a[j][1]+1;
		int col;
		col=(a[j][2]*7-a[j][4])/2;
	
		for(int i=1;i<=row;i++)
		{
			if(i%(a[j][3]+1)==1)
			{
			
			for(int k=1;k<=col;k++)
			{
				cout<<"*";
			}
			cout<<endl;
	     	}
			else
			{
			
			for(int k=1;k<=col;k++)
			{
			   if(k%(a[j][4]+1)==1)
			   cout<<"*";
			   else
			   cout<<".";
			}
			cout<<endl;
		}
		}
		cout<<endl;
		j++;
	}
	return 0;
}



/*
3
3 1 2 1
4 4 1 2
2 5 2 2

Output:
***
*.*
*.*
***
*.*
*.*
***
*.*
*.*
***

*************
*..*..*..*..*
*************
*..*..*..*..*
*************
*..*..*..*..*
*************
*..*..*..*..*
*************

****************
*..*..*..*..*..*
*..*..*..*..*..*
****************
*..*..*..*..*..*
*..*..*..*..*..*
**************** */
