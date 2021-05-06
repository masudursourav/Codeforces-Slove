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

  ll n;cin>>n;
  string s;cin>>s;
  ll a=0,in=0,f=0;
  for(int i=0;i<n;i++){
    if(s[i]=='A'){
      ++a;
    }
    else if(s[i]=='I'){
      ++in;
    }
    else if(s[i]=='F'){
      ++f;
    }
  }
  if(a>0 && in==0){
    cout<<a<<"\n";
  }
  else if(in==1){
    cout<<in<<"\n";
  }
  else{
    cout<<0<<"\n";
  }
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
