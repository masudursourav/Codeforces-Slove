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
    ll s[n];
    ll a[10]={0};
    for(int i=0;i<n;i++){
      ll in;
      cin>>in;
      ++a[in];
    }
     ll c=0,j=0;
     if(a[1]>0 && a[2]>0 && a[4]>0){
        ll k=min({a[1],a[2],a[4]});
       for(int i=0;i<k;i++){
         s[j]=1;++j;s[j]=2;++j;s[j]=4;++j;
         --a[1],--a[2],--a[4];
         ++c;
       }
     }
     if(a[1]>0 && a[3]>0 && a[6]>0){
       ll l=min({a[1],a[3],a[6]});
       for(int i=0;i<l;i++){
          s[j]=1;++j;s[j]=3;++j;s[j]=6;++j;
          --a[1],--a[6],--a[3];
          ++c;
       }
     }
     if(a[1]>0 && a[2]>0 && a[6]>0){
       ll m=min({a[1],a[2],a[6]});
       for(int i=0;i<m;i++){
          s[j]=1;++j;s[j]=2;++j;s[j]=6;++j;
          --a[1],--a[2],--a[6];
          ++c;
       }
     }
    if(c<n/3){
      cout<<"-1"<<"\n";
    }
    else{
      for(int i=0;i<j;i+=3){
        cout<<s[i]<<" "<<s[i+1]<<" "<<s[i+2]<<"\n";
      }

    }
    return 0;
}
