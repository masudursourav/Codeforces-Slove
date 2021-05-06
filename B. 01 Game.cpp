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
    int t;
    cin>>t;
    while(t--){
      string s;
      cin>>s;
      int c1=0,c0=0;
      for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
          ++c1;
        }
        else{
          ++c0;
        }
      }
      if(min(c1,c0)%2==0){
        cout<<"NET"<<"\n";
      }
      else{
        cout<<"DA"<<"\n";
      }
    }

    return 0;
}
