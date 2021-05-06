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
    set<ll>s;
    ll a[n];
    ll j=0;
    for(int i=0;i<n;i++){
      ll in;
      cin>>in;
      if(s.find(in)==s.end()){
        a[j]=in;
        ++j;
        s.insert(in);
      }
    }
    sort(a,a+j);
    for(int i=0;i<j-2;i++){
      if(a[i+1]-a[i]<=2 && a[i+2]-a[i+1]<=2 && a[i+2]-a[i]<=2){
        cout<<"YES"<<"\n";
        return 0;
      }
    }
    cout<<"NO"<<"\n";

    return 0;
}
