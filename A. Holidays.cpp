#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int d,mi=0,ma=0;
    cin>>d;
    int r=d/7;
    if(d%7==0){
        cout<<r*2<<" "<<r*2<<"\n";
    }
    else if(d%7==1){
        cout<<r*2<<" "<<(r*2)+1<<"\n";
    }
    else if(d%7>=2 && d%7<=5){
        cout<<r*2<<" "<<(r*2)+2<<"\n";
    }
    else if(d%7>=6){
        cout<<(r*2)+1<<" "<<(r*2)+2<<"\n";
    }
    return 0;
}
