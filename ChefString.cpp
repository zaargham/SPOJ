#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		int sum=0;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		
		
		for(int j=1;j<n;j++)
		{
			sum+=abs(a[j]-a[j-1])-1;
		}
		cout<<sum<<"\n";
	}
	
	//sum=0;
	return 0;
}
