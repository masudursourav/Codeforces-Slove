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
    ll n,m;
    cin>>n>>m;
    vector<ll>v;
    for(int i=0;i<m;i++){
      ll in;
      cin>>in;
        v.push_back(in);
    }
    ll stepc=v[0]-1;
    for(int i=1;i<v.size();i++){
      ll step=v[i]-v[i-1];
       if(step<0){
         stepc+=(n+step);
       }
       else{
         stepc+=step;
       }
    }
    cout<<stepc<<"\n";
    return 0;
}
