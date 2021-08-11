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
        ll n,m;
        cin>>n>>m;
        ll store[n+2];
        for(int i=1;i<=n;i++){
          cin>>store[i];
        }
        set<ll>s;
        for(int i=n;i>0;i--){
          s.insert(store[i]);
          store[i]=s.size();
        }
        while(m--){
          ll q;
          cin>>q;
        cout<<store[q]<<"\n";
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
