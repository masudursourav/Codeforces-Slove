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
   //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    ll n;
    cin>>n;
    ll a[n];
    ll sumi=0;
    for(int i=0;i<n;i++){
      cin>>a[i];
      sumi+=a[i];
    }
    sort(a,a+n);
    double avgd=(double)((sumi*1.0)/(n*1.0));
    ll avgi=avgd;
    double diff=avgd-avgi;
    ll c=0;
    while(1){
      if(avgi==5 || (avgi>=4 && diff>=0.5)){
        break;
      }
      for(int i=0;i<n;i++){
        if(a[i]<5){
          sumi=sumi+(5-a[i]);
          a[i]=5;
          ++c;
          break;
        }
      }
      avgd=(double)((sumi*1.0)/(n*1.0));
      avgi=avgd;
      diff=avgd-avgi;
    }
    cout<<c<<"\n";
    return 0;
}
