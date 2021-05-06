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
    ll k;
    cin>>k;
    string s;
    cin>>s;
    ll a[26]={0};
    for(int i=0;i<s.size();i++){
      a[s[i]-'a']++;
    }
    for(int i=0;i<26;i++){
      if(a[i]%k!=0){
        cout<<"-1"<<"\n";
        return 0;
      }
    }
    for(int i=0;i<k;i++){
      for(int j=0;j<26;j++){
        int t=a[j]/k;
        for(int l=0;l<t;l++){
          char ch='a'+j;
          cout<<ch;
        }
      }
    }
    cout<<"\n";

    return 0;
}
