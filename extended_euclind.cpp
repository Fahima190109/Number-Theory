#include<bits/stdc++.h>
using namespace std;
int main(){
    int r1,r2,q,s,s1=1,s2=0,t,t1=0,t2=1,r,c;
    cin>>r1>>r2>>c;
    int temp1=r1;
    int temp2=r2;
    while(r2!=0){
        q=r1/r2;
        r=r1-(q*r2);
        r1=r2;
        r2=r;
        s=s1-(q*s2);
        t=t1-(q*t2);
        s1=s2;
        s2=s;
        t1=t2;
        t2=t;
    }
int g=(temp1*s1)+(temp2*t1);
int x=s1*(c/g);
int y=t1*(c/g);
cout<<x<<" "<<y;
cout<<g;
cout<<"print many solution of equation"<<endl;
for(int k=1;k<=10;k++){
    int res1=x+k*(temp2/g);
     int res2=y-k*(temp1/g);
     cout<<res1<<" "<<res2<<endl;
}


return 0;}
