#include <bits/stdc++.h>
using namespace std;
#define long long int

struct matrix{
	int mat[2][2];
};

matrix matrix_mul(matrix A, matrix B){
	matrix c;
	for(int row=0;row<2;row++){
		for(int col=0;col<2;col++){
			int here=0;
			for(int i=0;i<2;i++){
				here+=A.mat[row][i]*B.mat[i][col];
			}
			c.mat[row][col]=here;
		}
		
	}
	return c;
}
matrix identity(){
	matrix A;
	A.mat[0][0]=1,A.mat[1][1]=1;
	A.mat[0][1]=0,A.mat[1][0]=0;
	return A;
}

matrix power(matrix A,int N){
	if(N==0){
		return identity();
	}
	matrix X = power(A,N/2);
	if(N%2==0){
		return matrix_mul(X,X);
	}
	else{
		return matrix_mul(matrix_mul(X,X),A);
	}
}
int get_nth_fibo(int N){
	matrix fib;
	fib.mat[0][0]=1,fib.mat[0][1]=1;
	fib.mat[1][0]=1,fib.mat[1][1]=0;
	return power(fib,N).mat[0][0];
}

int32_t main()
{
	cout<<get_nth_fibo(5);

	
	
	return 0;
}
