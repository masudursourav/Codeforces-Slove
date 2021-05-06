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
    string s;
    ll sp=0;
    ll mx=0;
    int c=1;
    cin>>s;
    for(int i=0;i<s.size();i++){
      if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='Y'){
        c=0;
      }
      ++c;
      if(c>mx){
        mx=c;
      }
    }
    cout<<mx<<"\n";

    return 0;
}
