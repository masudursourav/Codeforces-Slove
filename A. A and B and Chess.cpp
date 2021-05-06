//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

int main()
{
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll sumw=0,sumb=0;
    char c;
    for(int i=0;i<8;i++){
      for(int j=0;j<8;j++){
        cin>>c;
        if(c=='Q'){
          sumw+=9;
        }
        else if(c=='R'){
          sumw+=5;
        }
        else if(c=='B'){
          sumw+=3;
        }
        else if(c=='N'){
          sumw+=3;
        }
        else if(c=='P'){
          sumw+=1;
        }
        else if(c=='q'){
          sumb+=9;
        }
        else if(c=='r'){
          sumb+=5;
        }
        else if(c=='b'){
          sumb+=3;
        }
        else if(c=='n'){
          sumb+=3;
        }
        else if(c=='p'){
          sumb+=1;
        }
      }
    }
    if(sumw>sumb){
      cout<<"White"<<"\n";
    }
    else if(sumb>sumw){
      cout<<"Black"<<"\n";
    }
    else{
      cout<<"Draw"<<"\n";
    }

    return 0;
}
