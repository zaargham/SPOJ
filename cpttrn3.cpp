#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n<1)
	return 0;
	int a[n][2];
	int i=0;
	while(i!=n)
	{
		
		cin>>a[i][1]>>a[i][2];
		
		i++;
	}
	
	int j=0;
	while(j!=n)
	{
		int r,c;
		r=2*a[j][1]+a[j][1]+1;
		c=3*a[j][2]+1;
		cout<<r<<" "<<c<<endl;
		for(int i=1;i<=r;i++)
		 {
		   if(i%3==1)
		   {
			  for(int k=1;k<=c;k++)
	         	{
			    cout<<"*";
	         	}
	         	cout<<endl;
	       }
	     	 
	    	else
	    	{
			  for(int k=1;k<=c;k++)
			   if(k%3==1)
			     cout<<"*";
		    	else
			     cout<<".";
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
l c h w
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
