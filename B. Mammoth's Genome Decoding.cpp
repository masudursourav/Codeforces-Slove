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
    ll n;
    string s;
    cin>>n>>s;
    if(n%4!=0){
      cout<<"==="<<"\n";
      return 0;
    }
    char c[4]={'A','G','C','T'};
    for(int i=0;i<4;i++){
      ll k=(n/4)-count(s.begin(),s.end(),c[i]);
      if(k>count(s.begin(),s.end(),'?')){
        cout<<"==="<<"\n";
        return 0;
      }
      for(int j=0;j<k;j++){
        s[s.find('?')]=c[i];
      }
    }
     cout<<s<<"\n";
    return 0;
}
