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
    queue<ll>q;
    cin>>n;
    bool qu[n+1]={false};
    vector<ll>a(n+1);
    for(int i=0;i<n;i++){
      cin>>a[i];
      q.push(a[i]);
    }
   for(int i=0;i<n;i++){
     ll u,ans=0;
     cin>>u;
     if(qu[u]){
       cout<<0<<" ";
       continue;
     }
     while(1){
       ll t=q.front();
       ++ans;
       qu[t]=true;
       q.pop();
       if(t==u){
         cout<<ans<<" ";
         break;
       }
     }
   }
   cout<<"\n";
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
