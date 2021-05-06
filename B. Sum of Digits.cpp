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
    string s;
    cin>>s;
    ll sum=0;

    for(int i=0;i<s.size();i++){
      sum+=s[i]-'0';
    }
    ll c=0;
    if(s.size()==1){
      cout<<c<<"\n";
      return 0;
    }
    ++c;
    while(sum>9){
      ll temp=sum;
      sum=0;
      while(temp>0){
        sum+=temp%10;
        temp=temp/10;
      }
      ++c;
    }
    cout<<c<<"\n";

    return 0;
}
