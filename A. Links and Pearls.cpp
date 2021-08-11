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
        ll a=0,b=0;
        for(int i=0;i<s.size();i++){
          if(s[i]=='-'){
            ++b;
          }
          else{
            ++a;
          }
        }
        if(a==0){
          cout<<"YES"<<"\n";

      }
      else if(b%a==0){
       cout<<"YES"<<"\n";
      }
      else{
        cout<<"NO"<<"\n";
      }

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
