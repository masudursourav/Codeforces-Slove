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
    getline(cin,s);
    int c=0;
    for(int i=0;i<s.size();i++){
      if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
        ++c;
      }
    }
    if(c!=5){
      cout<<"NO"<<"\n";
      return 0;
    }
    s.clear();
    getline(cin,s);
    c=0;
    for(int i=0;i<s.size();i++){
      if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
        ++c;
      }
    }
    if(c!=7){
      cout<<"NO"<<"\n";
      return 0;
    }
    s.clear();
    getline(cin,s);
    c=0;
    for(int i=0;i<s.size();i++){
      if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
        ++c;
      }
    }
    if(c!=5){
      cout<<"NO"<<"\n";
      return 0;
    }

    cout<<"YES"<<"\n";

    return 0;
}
