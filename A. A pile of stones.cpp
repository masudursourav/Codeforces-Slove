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
    cin>>n;
    string s;
    cin>>s;
    bool k=false;
    ll m=0;
    for(int i=0;i<n;i++){
      if(s[i]=='+'){
        ++m;
        k=true;
      }
      else if(k==true && s[i]=='-' && m>0){
        --m;
      }
    }
    cout<<m<<"\n";

    return 0;
}
