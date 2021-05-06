//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

void slove(){

  ll n;
  cin>>n;
  bool k=false;
  ll op=0,z=0;
  for(int i=0;i<n;i++){
    ll in;cin>>in;
    if(in==1){k=true;}
    if(k){
      if(in==1){
        ++op;
        if(z>0){
          ++op;
          z=0;
        }
      }
      else{
        ++z;
      }
    }
  }
  cout<<op<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

         ll t=1; //cin>>t;
         while(t--){
           slove();
         }

    return 0;
}
