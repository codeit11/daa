#include<bits/stdc++.h>
using namespace std;
int main(){
int n,t,i,count=0;
cin>>n>>t;
int arr[n];
for(i=0;i<n;i++){
cin>>arr[i]; }
sort(arr,arr+n);
for(i=0;i<n;i++){
t-=arr[i]; if(t<0){
break; }
count++; }
cout<<count;
return 0; }