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
		for(int i=0;i<a[j][1];i++)
		 {
		   if(i==0 || i==a[j][1]-1)
		   {
			  for(int k=0;k<a[j][2];k++)
	         	{
			    cout<<"*";
	         	}
	         	cout<<endl;
	     }
	     	 
		else
		{
			for(int k=0;k<a[j][2];k++)
			if(k==0 || k==a[j][2]-1)
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
