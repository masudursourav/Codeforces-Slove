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
    int n;
    cin>>n;
    string s,ans;
    cin>>s;
    for(int i=0;i<n;i++){
      if(s[i]=='o' && s[i+1]=='g' && s[i+2]=='o'){
      ans+="***";
      ++i;
      while(s[i]=='g' && s[i+1]=='o'){
        i+=2;
      }
      --i;
    }
    else{
      ans+=s[i];
    }
    }
   cout<<ans<<"\n";
    return 0;
}
