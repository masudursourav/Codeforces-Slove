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
    ll ne=0,z=0;
    for(int i=0;i<n;i++){
      cin>>a[i];
      if(0LL>a[i]){
        ++ne;
      }
      else if(a[i]==0LL){
        ++z;
      }
    }
    ll op=0;
    if(ne%2==0 || z>0){
      for(int i=0;i<n;i++){
        if(a[i]==0){
          ++op;
        }
        else{
          op=op+(abs(a[i])-1);
        }
      }
    }
    else{
      ll b[n];
      ll j=0;
      for(int i=0;i<n;i++){
        if(a[i]<0){
          b[j]=a[i];
          ++j;
        }
      }
      sort(b,b+j);
      ll k;
      for(int i=0;i<n;i++){
        if(a[i]==b[j-1]){
          k=i;
          break;
        }
      }
      op+=(abs(b[j-1])+1);
      //cout<<op<<"\n";
      for(int i=0;i<n;i++){
        if(i!=k){
        if(a[i]==0){
          ++op;
        }
        else{
          op=op+(abs(a[i])-1);
        }
      }
      }
    }

    cout<<op<<"\n";

    return 0;
}
