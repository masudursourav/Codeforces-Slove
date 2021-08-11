//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

void slove(){
       ll n;cin>>n;
         string s[n];
        map<string,ll>m;
          ll mx=0;
        for(int i=0;i<n;i++){
          cin>>s[i];
          ++m[s[i]];
          if(m[s[i]]>mx){
            mx=m[s[i]];
        }
        }
      cout<<mx<<"\n";

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

         ll t=1; //cin>>t;
         while(t--){
           slove();
         }

    return 0;
}
