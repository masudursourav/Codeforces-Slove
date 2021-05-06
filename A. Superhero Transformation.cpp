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
    string s,t;
    cin>>s>>t;
    if(s.size()!=t.size()){
      cout<<"NO"<<"\n";
      return 0;
    }
    for(int i=0;i<s.size();i++){
      if((s[i]=='a' ||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') ||
      (t[i]=='a' ||t[i]=='e'||t[i]=='i'||t[i]=='o'||t[i]=='u')){
        if((t[i]!='a' && t[i]!='e'&& t[i]!='i'&& t[i]!='o'&& t[i]!='u') ||
         (s[i]!='a' && s[i]!='e'&& s[i]!='i'&& s[i]!='o'&& s[i]!='u'))
        {
          cout<<"NO"<<"\n";
          return 0;
        }
      }
    }
    cout<<"YES"<<"\n";
    return 0;
}
