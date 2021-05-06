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
    int bc=0,u2=0,l=0,b2=0,a2=0,s=0,r=0;
    string ss;
    cin>>ss;
    for(int i=0;i<ss.size();i++){
      if(ss[i]=='B'){
        ++bc;
      }
      else if(ss[i]=='b'){
        ++b2;
      }
      else if(ss[i]=='u'){
        ++u2;
      }
      else if(ss[i]=='l'){
        ++l;
      }
      else if(ss[i]=='a'){
        ++a2;
      }
      else if(ss[i]=='s'){
        ++s;
      }
      else if(ss[i]=='r'){
        ++r;
      }
    }
    u2=(int)u2/2;
    a2=(int)a2/2;
    int ans=bc;
    ans=min(ans,b2);
    ans=min(ans,u2);
    ans=min(ans,a2);
    ans=min(ans,s);
    ans=min(ans,r);
    ans=min(ans,l);
    cout<<ans<<"\n";
    return 0;
}
