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
    string s;
    cin>>s;
    ll f=0,k,t=0;
    for(int i=0;i<n;i++){
      if(s[i]=='R'){
        f=i+1;
        break;
      }
    }
    for(int i=n-1;i>0;i--){
      if(s[i]=='R'){
        k=i+1;
        break;
      }
    }
    for(int i=0;i<n;i++){
      if(s[i]=='L'){
        t=i+1;
        break;
      }
    }
    if(f==0){
      cout<<t<<" "<<t-1<<"\n";
    }
    else if(t==0){
      cout<<f<<" "<<k+1<<"\n";
    }
    else{
      cout<<f<<" "<<t<<"\n";
    }

    return 0;
}
