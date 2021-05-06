#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin>>s;
  if(s[0]>='a' && s[0]<='z' && s.size()>1){
    s[0]=s[0]-32;
    for(int i=1;i<s.size();i++){
      if(s[0]>='A' && s[0]<='Z')
      s[i]=s[i]+32;
    }
    cout<<s<<"\n";
    return 0;
  }
  else if(s[0]>='A' && s[0]<='Z' && s[1]>='A' && s[1]<='Z'){
    for(int i=0;i<s.size();i++){
      if(s[0]>='A' && s[0]<='Z')
      s[i]=s[i]+32;
    }
    cout<<s<<"\n";
    return 0;
  }
  else if(s.size()==1){
    if(s[0]>='a' && s[0]<='z'){
      s[0]=s[0]-32;
      cout<<s[0]<<"\n";
    }
    else{
      s[0]=s[0]+32;
      cout<<s[0]<<"\n";
    }
    return 0;
  }
  else{
    cout<<s<<"\n";
  }
}
