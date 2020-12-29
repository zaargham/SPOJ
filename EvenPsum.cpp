#include<iostream>


using namespace std;

int main()
{
    
    long long int t;
    cin>>t;
    while(t--){
        long long int a,b;
        cin>>a>>b;
        long long int even1,odd1,even2,odd2;
        even1=a/2;
        odd1=a-even1;
        even2=b/2;
        odd2=b-even2;
        cout<<even1*even2+odd1*odd2<<"\n";
    }
    
    return 0;
}