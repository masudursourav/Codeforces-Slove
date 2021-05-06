//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

int main()
{
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,d;
    cin>>n>>d;
    int c=0;
    int mx=0;
    while(d--){
      string s;
      cin>>s;
      int ch=0;
      for(int i=0;i<n;i++){
        if(s[i]=='0'){
          ch=1;
          break;
        }
      }
      if(ch==1){
        ++c;
        if(c>mx){
          mx=c;
        }
      }
      else{
        c=0;
      }
    }
    cout<<mx<<"\n";

    return 0;
}
