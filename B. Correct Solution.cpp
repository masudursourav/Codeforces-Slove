//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back
void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

int main()
{
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s,s1,ans;
    cin>>s>>s1;
    ll a[10]={0};
    for(int i=0;i<s.size();i++){
      ++a[s[i]-'0'];
    }
    for(int i=1;i<10;i++){
      if(a[i]>0){
        for(int j=0;j<a[i];j++){
          ans+=i+'0';
          break;
        }
        --a[i];
        break;
      }
    }
    for(int i=0;i<10;i++){
      if(a[i]>0){
        for(int j=0;j<a[i];j++){
          ans+=i+'0';
        }
      }
    }
    if(ans==s1){
      cout<<"OK"<<"\n";
    }
    else{
      cout<<"WRONG_ANSWER"<<"\n";
    }
    return 0;
}
