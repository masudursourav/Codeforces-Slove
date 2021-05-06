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
    map<string,int>m;
    int n;
    cin>>n;
    while(n--){
      string s;
      cin>>s;
      if(m.count(s)){
        cout<<s<<m[s]<<"\n";
        m[s]=m[s]+1;
      }
      else{
        cout<<"OK"<<"\n";
        m[s]=1;
      }
    }

    return 0;
}
