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
      int a[20]={0};
      ll ans=0;
      if(s[0]=='X' || s[1]=='X' || s[2]=='X' || s[3]=='X' || s[4]=='X' || s[5]=='X' ||s[6]=='X' || s[7]=='X' ||s[8]=='X' || s[9]=='X' ||s[10]=='X' || s[11]=='X'){
        a[ans++]=1;
      }
      if((s[0]=='X' && s[6]=='X') || (s[1]=='X' && s[7]=='X') || (s[2]=='X' && s[8]=='X') ||(s[3]=='X' && s[9]=='X') ||(s[4]=='X' && s[10]=='X') ||(s[5]=='X' && s[11]=='X')){
        a[ans++]=2;
      }
      if((s[0]=='X' && s[4]=='X' && s[8]=='X') || (s[1]=='X' && s[5]=='X' && s[9]=='X') ||(s[2]=='X' && s[6]=='X' &&s[10]=='X') || (s[3]=='X' &&s[7]=='X' && s[11]=='X')){
        a[ans++]=3;
      }
      if((s[0]=='X' && s[3]=='X' && s[6]=='X' && s[9]=='X') || (s[1]=='X' && s[4]=='X' &&s[7]=='X' && s[10]=='X') || (s[2]=='X' && s[5]=='X' && s[8]=='X' && s[11]=='X')){
        a[ans++]=4;
      }
      if((s[0]=='X' && s[2]=='X' && s[4]=='X' && s[6]=='X' && s[8]=='X' && s[10]=='X') || (s[1]=='X' && s[3]=='X' && s[5]=='X' && s[7]=='X' && s[9]=='X' && s[11]=='X')){
        a[ans++]=6;
      }
      if(s[0]=='X' && s[1]=='X' && s[2]=='X' && s[3]=='X' && s[4]=='X' && s[5]=='X' && s[6]=='X' && s[7]=='X' && s[8]=='X' && s[9]=='X' && s[10]=='X' && s[11]=='X'){
        a[ans++]=12;
      }
      cout<<ans<<" ";
      for(int i=0;i<ans;i++){
        cout<<a[i]<<"x"<<12/a[i]<<" ";
      }
      cout<<"\n";
    }

    return 0;
}
