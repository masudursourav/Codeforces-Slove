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
    cin>>s;
    ll c=0;
    ll a[38]={0};
    for(int i=0;i<s.size();i++){
      if((s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')){
        ++c;
      }
      else if(s[i]>='0' && s[i]<='9'){
        if(s[i]%2!=0){
          ++c;
        }
      }
    }
    cout<<c<<"\n";
    return 0;
}
