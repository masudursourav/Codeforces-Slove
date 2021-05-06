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
    int cc=0;
    int cf=0;
    for(int i=0;i<s.size();i++){
      if(s[i]=='C'){
        ++cc;
        if(cc==5){
          ++cf;
          cc=0;
        }
        else if(i==s.size()-1){
          ++cf;
        }
      }
      else{
        if(cc>0){
          ++cf;
        }
        cc=0;
      }
    }
    int cp=0;
    for(int i=0;i<s.size();i++){
      if(s[i]=='P'){
        ++cp;
        if(cp==5){
          ++cf;
          cp=0;
        }
        else if(i==s.size()-1){
          ++cf;
        }
      }
      else{
        if(cp>0){
          ++cf;
        }
        cp=0;
      }
    }
    cout<<cf<<"\n";
    return 0;
}
