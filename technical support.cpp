#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){

int t, n, size, i, c1,c2;
cin>>t;
string st;
while(t--){
	cin>>n;
	cin>>st;
	c1=0;

	for(i=0; i<n; i++){
	  if(st[i] == 'Q'){
	      c1++;
	  }
	  else{
		c1--;
	  }

	  if(c1<=0){
        c1=0;
	  }
	}
	if(c1==0){
		cout<<"Yes"<<endl;
	} else{
	    cout<<"No"<<endl;
	}

}

}
