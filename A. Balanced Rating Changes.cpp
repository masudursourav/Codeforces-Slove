//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back
void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

int main()
{
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    ll a[n];
    ll b[n];
    ll sum=0;
    for(int i=0;i<n;i++){
      cin>>a[i];
      b[i]=(ll)(a[i]/2);
      sum+=b[i];
    }
    for(int i=0;i<n;i++){
      if(sum>0){
        for(int i=0;i<n;i++){
        if(a[i]<0 && abs(a[i])%2!=0 && b[i]>((a[i]-1)/2)){
          b[i]=b[i]-1;
          sum=sum-1;
          break;
        }
      }
      }
      else if(sum<0){
        for(int i=0;i<n;i++){
        if(a[i]>0 && abs(a[i])%2!=0 && b[i]<((a[i]+1)/2)){
          b[i]=b[i]+1;
          sum=sum+1;
          break;
        }
      }
      }
      else if(sum==0){
        break;
      }
    }
    for(int i=0;i<n;i++){
      cout<<b[i]<<"\n";
    }

    return 0;
}
