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
        string s;
        cin>>s;
        ll a[26]={0};
        ll c=0;
        for(int i=0;i<s.size();i++){
          ++a[s[i]-'a'];
        }
        for(int i=0;i<26;i++){
          if(a[i]%2==1){
            ++c;
          }
        }
        if(c==0){
          cout<<"First"<<"\n";
        }
        else if(c%2==0){
          cout<<"Second"<<"\n";
        }
        else{
          cout<<"First"<<"\n";
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
