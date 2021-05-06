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
    int n,k;
    int posg,posi;
    string s;
    cin>>n>>k;
    cin>>s;
    for(int i=0;i<n;i++){
      if(s[i]=='T'){
        posi=i+1;
      }
      if(s[i]=='G'){
        posg=i+1;
      }
    }
    if(abs(posg-posi)<k){
      cout<<"NO"<<"\n";
      return 0;
    }
    while(1){
      if(posi<posg){
        posg=posg-k;
      }
      else if(posi>posg){
        posg=posg+k;
      }
      else if(posi==posg){
        cout<<"YES"<<"\n";
        return 0;
      }
      if(s[posg-1]=='#' || posg>n ||(posg==n && s[posg-1]!='T') ||posg<1 || (posg==1 && s[0]!='T')){
        cout<<"NO"<<"\n";
        return 0;
      }
    }

    return 0;
}
