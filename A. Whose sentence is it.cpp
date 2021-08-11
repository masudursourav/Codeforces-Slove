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
        ll t;cin>>t;
        string s;
        getline(cin,s);
        while(t--){
        getline(cin,s);
        string s1="lala.";
        string s2="miao.";
        if(s.size()<5){
          cout<<"OMG>.< I don't know!"<<"\n";
        }
        else{
          string k=s.substr(0,5);
          string l=s.substr(s.size()-5);
        if(l==s2){
          cout<<"Rainbow's"<<"\n";
        }
        else if(l==s1){
          cout<<"Freda's"<<"\n";
        }
        else{
          cout<<l<<"\n";
          cout<<"OMG>.< I don't know!"<<"\n";
        }
        }
      }

}

int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);

         ll t=1; //cin>>t;
         while(t--){
           slove();
         }

    return 0;
}
