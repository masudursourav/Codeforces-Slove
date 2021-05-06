//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

       ll k,n,odd=0;
       cin>>k>>n;
       for(int i=0;i<n-1;i++){
         ll in;
         cin>>in;
         if(k%2 && in%2){
           ++odd;
         }
       }
       ll in;cin>>in;if(in%2)++odd;
       if(odd%2){
         cout<<"odd"<<"\n";
       }
       else{
         cout<<"even"<<"\n";
       }

      return 0;
}
