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
        set<ll>s;
        for(int i=0;i<n;i++){
          ll in;cin>>in;s.insert(in);
        }
        if(s.size()<=2){
          cout<<"YES"<<"\n";
        }
        else if(s.size()>=4){
          cout<<"NO"<<"\n";
          return;
        }
        else{
          vector<ll>v;
          for(auto i:s){
            v.pb(i);
          }
          if(2*v[1]==(v[0]+v[2])){
            cout<<"YES"<<"\n";
          }
          else{
            cout<<"NO"<<"\n";
          }
        }
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
