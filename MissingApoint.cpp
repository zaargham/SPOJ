#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long v1,v2;
		set<long long> s,s2;
		for(int i=0;i<4*n-1;i++)
		{
			cin>>v1>>v2;
		    if(s.find(v1)!=s.end())
			s.erase(v1);
			else
			s.insert(v1);
			if(s2.find(v2)!=s2.end())
			s2.erase(v2);
			else
			s2.insert(v2);
				
		}
		cout<<*s.begin()<<" "<<*s2.begin();
	}
}
