#include<iostream>


using namespace std;

int main()
{
    int d1,v1,d2,v2,p;
    cin>>d1>>v1>>d2>>v2>>p;
    int res=0;
    res+=min(d1,d2)-1+abs(d1-d2);
    
    int q;
    if(d1>d2){
        q=v2;
        if((p/q+((p%q)!=0?1:0)<abs(d1-d2)))
    {
        cout<<min(d1,d2)-1+(p/q+((p%q)!=0?1:0))<<"\n";
        return 0;
    }
    }
    else if(d2>d1){
        q=v1;
        if((p/q+((p%q)!=0?1:0)<abs(d1-d2)))
    {
        cout<<min(d1,d2)-1+(p/q+((p%q)!=0?1:0))<<"\n";
        return 0;
    }
    }
    else{
        q=0;
    }
    
    p-=abs(d1-d2)*q;
    res+=p/(v1+v2);
    if(p%(v1+v2)!=0)
    res++;
    cout<<res;
    
    return 0;
}