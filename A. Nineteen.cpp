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
    ll a[27]={0};
    for(int i=0;i<s.size();i++){
      ++a[s[i]-'a'];
    }
    a['n'-'a']=(a['n'-'a']-1)/2;
    cout<<min({a['n'-'a'],(ll)(a['e'-'a']/3),a['i'-'a'],a['t'-'a']})<<"\n";
    return 0;
}
