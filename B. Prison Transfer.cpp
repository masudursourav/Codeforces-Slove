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
        ll n,t,c;
        cin>>n>>t>>c;
        stack<ll>s;
        for(int i=0;i<n;i++){
          ll in;cin>>in;
          s.push(in);
        }
        ll ans=0,pri=0;
        for(int i=0;i<n;i++){
          if(s.top()<=t){
            ++pri;
            if(pri>=c){
              ++ans;
            }
          }
          else{
            pri=0;
          }
          s.pop();
        }
        cout<<ans<<"\n";

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
