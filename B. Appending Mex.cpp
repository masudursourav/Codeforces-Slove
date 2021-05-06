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
    ll m=-1;
    for(int i=0;i<n;i++){
      ll in;
      cin>>in;
      if(in>m+1){
        cout<<i+1<<"\n";
        return;
      }
      m=max(m,in);
    }
    cout<<-1<<"\n";
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
