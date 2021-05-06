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
    int n;
    cin>>n;
       int n4=0,n7=0;
       while(n>=4){
           if(n%7==0){
               n7+=n/7;
               n=n%7;
           }
           else{
             n=n-4;
             ++n4;
           }
       }
       if(n>0){
           cout<<"-1"<<"\n";
           return 0;
       }
       else{
           for(int i=1;i<=n4;i++){
               cout<<"4";
           }
           for(int i=1;i<=n7;i++){
               cout<<"7";
           }
           cout<<"\n";
      }
}
