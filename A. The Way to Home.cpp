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
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    ll c=0,pos=0;
    for(int i=0;;i++){
      if(pos==n-1){
        break;
      }
      ll ch=0,ka=0;
      for(int j=pos+1;ch<s.size();j++){
        if(s[j]=='1' && ch<k){
          pos=j;
          ka=1;
        }
        if(ch==k){
          if(ka==0){
            cout<<-1<<"\n";
            return 0;
          }
          else{
            break;
          }
        }
        ++ch;
      }
      c+=ka;
    }
    cout<<c<<"\n";
    return 0;
}
