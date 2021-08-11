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
        vector<ll>v(n);
        ll c,t;
        cin>>c>>t;
        v[0]=(c*t);
        for(int i=1;i<n;i++){
          cin>>c>>t;
          v[i]=(c*t);
          v[i]+=v[i-1];
        }
        while(m--){
          ll q;
          cin>>q;
          vector<ll>::iterator low;
          low=lower_bound(v.begin(),v.end(),q);
          cout<<(low-v.begin())+1<<"\n";
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
