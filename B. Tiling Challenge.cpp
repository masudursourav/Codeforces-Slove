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
    ll n;
    cin>>n;
    char a[1000][1000];
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        cin>>a[i][j];
      }
    }
    for(int i=1;i<n-1;i++){
      for(int j=1;j<n-1;j++){
        if(a[i][j]=='.' && a[i][j-1]=='.' && a[i][j+1]=='.' && a[i-1][j]=='.' && a[i+1][j]=='.'){
          a[i][j]='#';
          a[i][j-1]='#';
          a[i][j+1]='#';
          a[i-1][j]='#';
          a[i+1][j]='#';
        }
      }
    }
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        if(a[i][j]=='.'){
          cout<<"NO"<<"\n";
          return 0;
        }
      }
    }
    cout<<"YES"<<"\n";
    return 0;
}
