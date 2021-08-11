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
        char s[2];
        cin>>s[0]>>s[1];
        ll n;
        cin>>n;
        ll a,b;
        if(s[0]=='v'){
          a=0;
        }
        else if(s[0]=='<'){
          a=1;
        }
        else if(s[0]=='^'){
          a=2;
        }
        else{
          a=3;
        }
        if(s[1]=='v'){
          b=0;
        }
        else if(s[1]=='<'){
          b=1;
        }
        else if(s[1]=='^'){
          b=2;
        }
        else{
          b=3;
        }
        if(n%2==0)cout<<"undefined"<<"\n";
        else if((a+n)%4==b)cout<<"cw"<<"\n";
        else cout<<"ccw"<<"\n";

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
