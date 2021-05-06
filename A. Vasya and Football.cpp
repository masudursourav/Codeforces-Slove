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
    string s1,s2;
    cin>>s1>>s2;
    ll t;
    cin>>t;
    char h[100]={'c'},a[100]={'c'};
    while(t--){
      ll time,number;
      char team,card;
      cin>>time>>team>>number>>card;
      if(team=='h'){
        if(h[number]=='y'){
          card='r';
          h[number]='r';
        }
        else if(h[number]=='r'){
          continue;
        }
        else{
          h[number]=card;
        }
      }
      else{
        if(a[number]=='y'){
          card='r';
          a[number]='r';
        }
        else if(a[number]=='r'){
          continue;
        }
        else{
          a[number]=card;
        }
      }
      if(card=='r'){
        if(team=='h'){
          cout<<s1<<" ";
        }
        else{
          cout<<s2<<" ";
        }
        cout<<number<<" "<<time<<"\n";
      }

    }


    return 0;
}
