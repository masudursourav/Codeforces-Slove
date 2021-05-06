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
    string s;
    bool k=false;
    cin>>s;
    ll c=0;
    for(int i=0;i<s.size();i++){
      if(s[i]=='1'){
        k=true;
      }
      else if(s[i]=='0' && k){
        ++c;
      }
    }
    if(c>=6){
      cout<<"yes"<<"\n";
    }
    else{
      cout<<"no"<<"\n";
    }
    return 0;
}
