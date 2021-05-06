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
    string s;
    cin>>s;
    int c=0;
    for(int i=0;i<s.size();i++){
      if((s[i]=='1'||s[i]=='4') && s[0]=='1'){
        if(s[i]=='1'){
          c=0;
        }
        else{
          ++c;
          if(c>2){
            cout<<"NO"<<"\n";
            return 0;
          }
        }
      }
      else{
        cout<<"NO"<<"\n";
        return 0;
      }
    }
    cout<<"YES"<<"\n";
    return 0;
}
