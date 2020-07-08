#include<bits/stdc++.h>
using namespace std;
int main()
{
	int w[][5]={{0,1,3,99,99}, 
	           {1,0,3,6,99},
			   {3,3,0,4,2},
			   {99,6,4,0,5},
			   {99,99,2,5,0}
			   };
			   int d[4];
			   int nearest[4];
			   int near;
			   for(int i=0;i<4;i++)
			   {
			   	nearest[i]=1;
			   	d[i]=w[0][i+1];
			   }
		for(int i=0;i<4;i++)
		{
			int min=999;
			for(int j=1;j<5;j++)
			{
				if(d[j-1]>=0 && d[j-1]<min)
				{
					min=d[j-1];
					near=j;
				}
			}
			
			d[near-1]=-1;
			for(int k=1;k<5;k++)
			{
				if(w[near][k]<d[k-1])
				{
					d[k-1]=w[near][k];
					nearest[k-1]=near+1;
				}
			}
			
			
	 }
			   for(int i=0;i<4;i++)
			   {
			   	cout<<nearest[i]<<"\n";
			   	
					  }	   
					  return 0;
					  
}
