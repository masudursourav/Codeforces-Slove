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
    ll n;
    cin>>n;
    string s,q;
    cin>>s;
    int c=0;
    while(n--){
      string qu;
      cin>>qu;
      if((s[0]==qu[qu.size()-3] && s[1]==qu[qu.size()-2] && s[2]==qu[qu.size()-1]) ||
          (s[0]==qu[0] && s[1]==qu[1] && s[2]==qu[2])){
            ++c;
          }

    }
    if(c%2==0){
      cout<<"home"<<"\n";
    }
    else{
      cout<<"contest"<<"\n";
    }

    return 0;
}
