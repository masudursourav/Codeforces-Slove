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
    string s,ans;
    cin>>s;
    for(int i=0;i<s.size();i++){
      if(s[i]=='-' && s[i+1]=='.' && i+1<s.size()){
        ans+='1';
        i=i+1;
      }
      else if(s[i]=='-' && s[i+1]=='-' && i+1<s.size()){
        ans+='2';
        i=i+1;
      }
      else if(s[i]=='.'){
        ans+='0';
      }
    }
    cout<<ans<<"\n";

    return 0;
}
