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
    ll t;
    cin>>t;
    while(t--){
      string s;
      cin>>s;
      ll res=0,cur=0;

      for(int i=0;i<s.size();i++){
        if(s[i]=='+'){
          res+=1;
          cur+=1;
        }
        else{
          res+=1;
          cur-=1;
        }
        if(cur<0){
          cur=0;
          res=res+i+1;
        }
      }
      cout<<res<<"\n";
    }

    return 0;
}
