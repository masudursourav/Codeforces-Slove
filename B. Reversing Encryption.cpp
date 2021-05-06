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
    for(int i=1;i<=n;i++){
      if(n%i==0){
        reverse(s.begin(),s.begin()+i);
      }
    }
    cout<<s<<"\n";

    return 0;
}
