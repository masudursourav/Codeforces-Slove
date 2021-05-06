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
    string a,b,c;
    cin>>a>>b>>c;
    if(a[0]==c[2] && a[1]==c[1] && a[2]==c[0] && b[0]==b[2]){
      cout<<"YES"<<"\n";
    }
    else{
      cout<<"NO"<<"\n";
    }

    return 0;
}
