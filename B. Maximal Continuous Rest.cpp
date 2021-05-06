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
      ll a[2*n],maxm=0,sum=0;
      for(ll i=0; i<n; i++)
      {
          cin>>a[i];
          if(a[i]==0)
              a[i]--;
          a[n+i]=a[i];
      }
      for(ll i=0; i<2*n; i++)
      {
          if(a[i]==-1)
              sum=0;
          else
          {
              sum++;
              maxm=max(maxm,sum);
          }
      }
      cout<<maxm<<"\n";
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
