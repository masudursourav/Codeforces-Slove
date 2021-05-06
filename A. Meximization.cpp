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
    ll a[102]={0};
    for(int i=0;i<n;i++){
      ll in;
      cin>>in;++a[in];
    }
    for(int i=0;i<n;i++){
      for(int j=0;j<101;j++){
        if(a[j]>0){
          --a[j];
          cout<<j<<" ";
        }
      }
    }
    cout<<"\n";
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

       ll t; cin>>t;
       while(t--){
         slove();
       }

      return 0;
}
