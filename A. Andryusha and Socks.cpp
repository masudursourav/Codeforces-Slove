//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back
void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

int main()
{
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    set<ll>s;
    ll mx=0,c=0;
    for(int i=0;i<2*n;i++){
      ll in;
      cin>>in;
      if(s.find(in)!=s.end()){
        --c;
      }
      else{
        ++c;
        if(c>mx){
          mx=c;
        }
        s.insert(in);
      }
    }
    cout<<mx<<"\n";

    return 0;
}
