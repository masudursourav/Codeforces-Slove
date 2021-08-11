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
        string s;
        cin>>s;
        if(s.size()<3){
          cout<<"NO"<<"\n";
          return;
        }
        for(int i=0;i<s.size()-2;i++){
          if((s[i]=='A'&&s[i+1]=='B' && s[i+2]=='C')||
          (s[i]=='B'&&s[i+1]=='A' && s[i+2]=='C') ||
          (s[i]=='C'&&s[i+1]=='B' && s[i+2]=='A') ||
          (s[i]=='B'&&s[i+1]=='C' && s[i+2]=='A') ||
          (s[i]=='A'&&s[i+1]=='C' && s[i+2]=='B') ||
          (s[i]=='C'&&s[i+1]=='A' && s[i+2]=='B')){
            cout<<"YES"<<"\n";
            return;
          }
        }
        cout<<"NO"<<"\n";

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
