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
    ll x1,x2,x3,y1,y2,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    ll ans=((x2-x1)*(y3-y2))-((y2-y1)*(x3-x2));
    if(ans<0){
      cout<<"RIGHT"<<"\n";
    }
    else if(ans>0){
      cout<<"LEFT"<<"\n";
    }
    else{
      cout<<"TOWARDS"<<"\n";
    }

    return 0;
}
