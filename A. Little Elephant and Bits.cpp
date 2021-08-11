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
        bool z=false,o=false;
        for(int i=0;i<s.size();i++){
          if(s[i]=='1'){
            o=true;
          }
          else{
            z=true;
          }
          if(o && z){
            break;
          }
        }
        if(z){
          ll k=false;
          for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
              if(k){
                cout<<s[i];
              }
            }
            else{
              cout<<s[i];
            }
            if(s[i]=='0'){
              k=true;
            }
          }
        }
        else{
          for(int i=0;i<s.size()-1;i++){
            cout<<s[i];
          }
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
