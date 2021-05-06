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
    double a,b,x,y,v;
    cin>>a>>b;
    ll t;
    cin>>t;
    double mn=10e9;
    while(t--){
      cin>>x>>y>>v;
      double ans=sqrt(((x-a)*(x-a))+((y-b)*(y-b)));
      ans=ans/v;
      if(ans<mn){
        mn=ans;
      }
    }
    printf("%.6lf\n",mn);

    return 0;
}
