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
    string f,m,s;
    cin>>f>>m>>s;
    if(f=="paper" && m=="rock" && s=="rock"){
      cout<<"F"<<"\n";
    }
    else if(f=="scissors" && m=="paper" && s=="paper"){
      cout<<"F"<<"\n";
    }
    else if(f=="rock" && m=="scissors" && s=="scissors"){
      cout<<"F"<<"\n";
    }
    else if(m=="paper" && f=="rock" && s=="rock"){
      cout<<"M"<<"\n";
    }
    else if(m=="scissors" && f=="paper" && s=="paper"){
      cout<<"M"<<"\n";
    }
    else if(m=="rock" && f=="scissors" && s=="scissors"){
      cout<<"M"<<"\n";
    }
    else if(s=="paper" && f=="rock" && m=="rock"){
      cout<<"S"<<"\n";
    }
    else if(s=="scissors" && f=="paper" && m=="paper"){
      cout<<"S"<<"\n";
    }
    else if(s=="rock" && f=="scissors" && m=="scissors"){
      cout<<"S"<<"\n";
    }
    else{
      cout<<"?"<<"\n";
    }

    return 0;
}
