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
    string s;
    cin>>n;
    cin>>s;
    string ans;
    int mx=0;
    for(int i=0;i<n-2;i++){
      string k=s.substr(i,2);
      int c=0;
      for(int j=0;j<n-1;j++){
        if(k[0]==s[j] && k[1]==s[j+1]){
          ++c;
          if(c>mx){
            mx=c;
            ans=k;
          }
        }
      }
    }
    if(n==2){
      cout<<s<<"\n";
    }
    else
   cout<<ans<<"\n";
    return 0;
}
