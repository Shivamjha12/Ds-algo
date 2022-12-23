#include <bits/stdc++.h>
using namespace std;

// here we calculating the power of a number in O(logn) time here number is n, and power is p. using binary exponention technique.
int main()
{
   // calculate the power of even numbers
	int p=10;
	int n=2;
	int ans=1;
	int curr = n;
	while(p){
		if(p&1){
			ans*=curr;
			curr*=curr;
			p=p>>1;
		}
		else{
			curr*=curr;
			p=p>>1;
		}

	}
	cout<<ans<<"\n";

	
	
	return 0;
}
