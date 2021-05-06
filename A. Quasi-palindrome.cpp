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
    string s,ans;
    cin>>s;
    string r=s;
    reverse(r.begin(),r.end());
    if(s==r){
      cout<<"YES"<<"\n";
      return 0;
    }
    else{
      string k;
      ll j=s.size();
      for(int i=0;i<j;i++){
        k+='0';
        string ss=k+s;
        string re=ss;
        reverse(re.begin(),re.end());
        if(re==ss){
          cout<<"YES"<<"\n";
          return 0;
        }
      }
    }
    cout<<"NO"<<"\n";

    return 0;
}
