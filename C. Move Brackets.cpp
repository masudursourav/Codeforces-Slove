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
    int t;
    cin>>t;
    while(t--){
      string s;
      int n;
      cin>>n>>s;
      int c=0,ans=0;
      for(int i=0;i<n;i++){
        if(s[i]=='('){
          ++c;
        }
        else{
          --c;
        }
        if(c<0){
          ++ans;
          c=0;
        }
      }
      cout<<ans<<"\n";
    }

    return 0;
}
