#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  string s;
  int c=0;
  cin>>n;
  while(n--){
    cin>>s;
    if(isdigit(s[0])){
      int age=stoi(s);
      if(age<=17){
        ++c;
      }
    }
    else if(s=="ABSINTH" || s=="BEER" || s=="BRANDY" || s=="CHAMPAGNE"
           ||s=="GIN"||s=="RUM"||s=="SAKE"||s=="TEQUILA"||s=="VODKA"||s=="WHISKEY"||s=="WINE"){
             ++c;
           }
  }
  cout<<c<<"\n";
  return 0;
}
