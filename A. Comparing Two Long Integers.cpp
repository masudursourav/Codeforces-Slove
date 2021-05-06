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
    string s,t;
    cin>>s>>t;
     string a(s.size(),'0');
     string b(t.size(),'0');
     a+=t;b+=s;
    if(b>a){
      cout<<">"<<"\n";
    }
    else if(b<a){
      cout<<"<"<<"\n";
    }
    else{
      cout<<"="<<"\n";
    }
    return 0;
}
