//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

int main()
{
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i=0;i<8;i++){
      ll b=0,w=0;
      string s;
      cin>>s;
      for(int i=0;i<8;i++){
        if(s[i]=='B'){
          ++b;
        }
        else{
          ++w;
        }
        if(s[i]==s[i+1] && s[i]!=7){
          ++b;
          ++w;
        }
      }
      if(b!=4 || w!=4){
        cout<<"NO"<<"\n";
        return 0;
      }
    }
    cout<<"YES"<<"\n";

    return 0;
}
