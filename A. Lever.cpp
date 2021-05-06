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
    ll mid;
    for(int i=0;i<s.size();i++){
      if(s[i]=='^'){
        mid=i;
        break;
      }
    }
    ll sum=0;
    for(int i=0;i<s.size();i++){
      if(s[i]>='0' && s[i]<='9'){
        sum+=((s[i]-'0')*(i-mid));
      }
    }
    if(sum==0){
      cout<<"balance"<<"\n";
    }
    else if(sum<0){
      cout<<"left"<<"\n";
    }
    else{
      cout<<"right"<<"\n";
    }
    return 0;
}
