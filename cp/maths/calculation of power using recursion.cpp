#include <bits/stdc++.h>
using namespace std;
#define long long int

int power(int a,int b){
	if(b==0){ return 1; }
	int X=power(a,b/2);
	if(b&1==1){
		return X*X*a;
	}
	else{
		return X*X;
	}
}
int32_t main()
{
   // calculate the power of even numbers
	int ans = power(2,4);
	cout<<ans<<"\n";

	
	
	return 0;
}
