#include<iostream>


using namespace std;

int main()
{
    
     int t;
    cin>>t;
    while(t--){
        long long int n,d;
        cin>>n>>d;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int risk=0;
        for(int i=0;i<n;i++){
            if(arr[i]>=80 || arr[i]<=9)
            risk++;
        }
        int ans=0;
        ans+=risk/d+(n-risk)/d;
        if(risk%d!=0)
        ans++;
        if((n-risk)%d!=0)
        ans++;
        cout<<ans<<"\n";
        
    }
    
    return 0;
}