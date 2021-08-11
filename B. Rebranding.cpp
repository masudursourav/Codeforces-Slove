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
        ll n,m;
        string s;
        cin>>n>>m>>s;
        char c[26];
        for(int i=0;i<26;i++){
          c[i]=(char)('a'+i);
        }
        while(m--){
          char a,b;
          cin>>a>>b;
          for(int i=0;i<26;i++){
            if(c[i]==a){
              c[i]=b;
            }
            else if(c[i]==b){
              c[i]=a;
            }
          }
        }
        for(int i=0;i<n;i++){
          cout<<c[s[i]-'a'];
        }
        cout<<"\n";

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
