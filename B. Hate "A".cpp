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
    string s,t="",s1="",s2="";
    cin>>s;
    for(int i=0;i<s.size();i++){
      if(s[i]!='a') t+=s[i];
    }
    ll k=t.size()/2;
    if(t.size()%2==1){
      cout<<":("<<"\n";
      return;
    }
    for(int i=0;i<k;i++){
      s1+=t[i];
    }
    for(int i=s.size()-k;i<s.size();i++){
     s2+=s[i];
    }
    //cout<<s1<<"\n"<<s2<<"\n";
    if(s1==s2){
      for(int i=0;i<s.size()-k;i++){
        cout<<s[i];
      }
      cout<<"\n";
    }
      else{
        cout<<":("<<"\n";
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
