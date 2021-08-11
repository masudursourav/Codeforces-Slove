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
        cin>>n>>m;
        char a[501][501];
        for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
            cin>>a[i][j];
          }
        }
        for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
            if(a[i][j]=='W'){
              if(i!=0 && a[i-1][j]=='S'){
                cout<<"No"<<"\n";
                return;
              }
              else if(i!=n-1 && a[i+1][j]=='S'){
                cout<<"No"<<"\n";
                return;
              }
              else if(j!=0 && a[i][j-1]=='S'){
                cout<<"No"<<"\n";
                return;
              }
              else if(j!=m-1 && a[i][j+1]=='S'){
                cout<<"No"<<"\n";
                return;
              }
            }
          }
        }
        cout<<"Yes"<<"\n";
        for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
            if(a[i][j]=='.')cout<<'D';
            else cout<<a[i][j];
          }
          cout<<"\n";
        }

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
