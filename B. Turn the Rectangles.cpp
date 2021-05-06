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
    ll last=LONG_MAX;
    while(n--){
      ll a,b;
      cin>>a>>b;
      if(a<b){
        swap(a,b);
      }
      if(a<=last){
        last=a;
      }
      else if(b<=last){
        last=b;
      }
      else{
        cout<<"NO"<<"\n";
        return;
      }
    }
    cout<<"YES"<<"\n";
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
