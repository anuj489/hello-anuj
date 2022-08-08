#include<bits/stdc++.h>
using namespace std;

bool works(int m,int n){
return (m*m>n);
}
int main(){

int n;
cin>>n;

int l=0,r=n+1;

while(r>l+1){

int mid=(l+r)/2;
if(works(mid,n))r=mid;
else l=mid;
}
if(l*l==n)cout<<l;
else cout<<"Square root not exist"<<endl;




}
