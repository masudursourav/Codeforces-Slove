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
        vector<ll>a(m);
        for(int i=0;i<m;i++){
          cin>>a[i];
        }
        sort(a.begin(),a.end());
        vector<ll>b=a;
        ll high=0,low=0,c=0,k=0;
        while(1){
        sort(b.rbegin(),b.rend());
         high+=b[0];
         --b[0];
         ++c;
         if(c==n){
           break;
         }
      }
      cout<<high<<" ";
      c=0;
      for(int i=0;i<m;i++){
        for(int j=0;j<a[i];j++){
          low+=(a[i]-j);
          ++c;
          if(c==n){
            break;
          }
        }
      if(c==n){
        break;
      }
    }
    cout<<low<<"\n";

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
