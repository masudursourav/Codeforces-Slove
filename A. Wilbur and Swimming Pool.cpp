//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}
ll value(set<ll>& s){
  return ((*s.rbegin())-(*s.begin()));
}
void slove(){
        ll n;cin>>n;
        set<ll>a,b;
        for(int i=0;i<n;i++){
          ll x,y;
          cin>>x>>y;
          a.insert(x);
          b.insert(y);
        }
        if(a.size()!=2 || b.size()!=2){
          cout<<-1<<"\n";
          return;
        }
        cout<<value(a)*value(b)<<"\n";

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
