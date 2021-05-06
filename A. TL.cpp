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
    vector<ll>a(n),b(m);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    sort(a.begin(),a.end());sort(b.begin(),b.end());
    if(a[n-1]>=b[0]){
      cout<<-1<<"\n";
      return;
    }
    else if(a[0]*2>=b[0]){
      cout<<-1<<"\n";
      return;
    }
    else{
      cout<<max(a[n-1],a[0]*2)<<"\n";
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
