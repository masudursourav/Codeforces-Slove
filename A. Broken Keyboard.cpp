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
    ll t;
    cin>>t;
    while(t--){
      string s;
      cin>>s;
      bool a[27]={false};
      for(int i=0;i<s.size();i++){
        ll j=i;
        while(j+1<s.size() && s[j]==s[j+1]){
          ++j;
        }
        if((j-i)%2==0){
          a[s[i]-'a']=true;
        }
        i=j;
      }
      for(int i=0;i<26;i++){
        if(a[i]){
          cout<<(char)('a'+i);
        }
      }
      cout<<"\n";
    }

    return 0;
}
