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
        ll n,k;
        cin>>n>>k;
        ll a[n+2];
        a[0]=0;
        for(int i=1;i<=n;i++){
          cin>>a[i];
          a[i]+=a[i-1];
        }
        ll mn=LONG_MAX,index;
        for(int i=k;i<=n;i++){
          ll sum=(a[i]-a[i-k]);
          if(sum<mn){
            mn=sum;
            index=(i-k)+1;
          }
        }
       cout<<index<<"\n";
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
