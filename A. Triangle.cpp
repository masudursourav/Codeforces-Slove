//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

int main()
{
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    if((a+b>c && b+c>a && c+a>b) || (a+b>d && b+d>a && d+a>b) || (d+b>c && b+c>d && c+d>b) || (a+d>c && d+c>a && c+a>d)){
      cout<<"TRIANGLE"<<"\n";
    }
    else if(a+b==c || a+c==b || b+c==a ||d+b==c || d+c==b || b+c==d||a+d==c || a+c==d || d+c==a ||a+b==d || a+d==b || b+d==a){
    cout<<"SEGMENT"<<"\n";
    }
    else{
    cout<<"IMPOSSIBLE"<<"\n";
    }
    return 0;
}
