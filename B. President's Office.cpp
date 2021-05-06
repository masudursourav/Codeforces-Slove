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
 ll n,m;
 char c;
 set<char>adj;
 cin>>n>>m>>c;
 string s[n];
 for(int i=0;i<n;i++) cin>>s[i];
 for(int i=0;i<n;i++){
   for(int j=0;j<m;j++){
     if(s[i][j]==c){
     if(i!=0 && s[i-1][j]!=c){
       adj.insert(s[i-1][j]);
     }
     if(i!=n-1 && s[i+1][j]!=c){
       adj.insert(s[i+1][j]);
     }
     if(j!=0 && s[i][j-1]!=c){
       adj.insert(s[i][j-1]);
     }
     if(j!=m-1 && s[i][j+1]!=c){
       adj.insert(s[i][j+1]);
     }
   }
 }
 }
 ll x=0;
 if(adj.find('.')!=adj.end()){
   --x;
 }
 cout<<adj.size()+x<<"\n";


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
