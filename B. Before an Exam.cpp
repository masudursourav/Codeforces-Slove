//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air

//*B. Before an Exam

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

int main()
{
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int d,sumt,summi=0,summx=0;
    cin>>d>>sumt;
    int mi[d],mx[d];
    for(int i=0;i<d;i++){
      cin>>mi[i]>>mx[i];
      summi+=mi[i];
      summx+=mx[i];
    }
    if(summx<sumt || summi>sumt){
      cout<<"NO"<<"\n";
      return 0;
    }
    cout<<"YES"<<"\n";
    while(1){
      if(summi==sumt){
        break;
      }
      for(int i=0;i<d;i++){
        if(mi[i]<mx[i]){
          mi[i]=mi[i]+1;
          summi=summi+1;
          break;
        }
      }
    }
    for(int i=0;i<d;i++){
      cout<<mi[i]<<" ";
    }
    cout<<"\n";
    return 0;
}
