#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int a[5],b[5];
    for(int i=0;i<4;i++){
        cin>>s;
        a[i]=s.size()-2;
        b[i]=a[i];
    }
    sort(b,b+4);
    bool hasMax = b[3] >= b[2] * 2;
   bool hasMin = 2*b[0] <= b[1];
   if(hasMax==hasMin){
       cout<<"C"<<"\n";
           }
    else if(hasMax){
        char ch='A';
        for(int i=0;i<4;i++){
            if(a[i]==b[3]){
                printf("%c\n",ch+i);
                break;
            }
        }
    }
    else if(hasMin){
        char ch='A';
        for(int i=0;i<4;i++){
            if(a[i]==b[0]){
            printf("%c\n",ch+i);
                break;
            }
        }
    }
    return 0;
}
