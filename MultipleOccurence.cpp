#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int x;
		cin>>x;
		long int arr[x];
		for(int i=0;i<x;i++){
			cin>>arr[i];
		}
		int sum=0;
		map<long int,vector<int>> mp;
		for(int i=0;i<x;i++){
			
			mp[arr[i]].push_back(i+1);
		}
		//iterator it=mp.begin();
		for (auto it : mp) {
			sum+=abs(it.second[0]-it.second[it.second.size()-1]);
		}

		
		cout<<sum<<"\n";
	}
}