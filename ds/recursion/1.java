//  print fibonacci number
public class Main
{
    static int fact(int n){
	    if(n>=1){ return n * fact(n-1);}
	    else{ return 1; }
	}
	static int fibo(int n){
	    if(n>=3){return fibo(n-1)+fibo(n-2);}
	    else{return 1;}
	}
	public static void main(String[] args) {
        //System.out.println(fact(1));
        System.out.println(fibo(6));
		//112358
	}
}

// print permutaion of string
public class Main
{
    
    public static void permu(String str, String permutation){
        if(str.length()== 0){
            System.out.println(permutation);
            return;
        }
        for(int i =0;i<str.length();i++){
            char currChar = str.charAt(i);
            String newStr = str.substring(0,i) + str.substring(i+1);
            permu(newStr, permutation+currChar);
        }
        
    }
	public static void main(String[] args) {
		System.out.println("Hello World");
		String s = "abc";
		permu(s, "");
	}
}

// no.of paths to end point of matrix

public class Main
{
    
    public static int countPath(int n, int m){
        if(n==1 || m==1){
            return 1;
        }
        return countPath(n-1,m)+countPath(n,m-1);
        
    }
	public static void main(String[] args) {
// 		int n,m = 3,3;
		System.out.println(countPath(3,3));
	}
}

//count no.of steps to get to 1 from given integer n
public class Main{
    public static int count(int n)
    {
        if(n==1){return 0;}
        if(n%2==0){return 1 + count(n/2);}
        else{ return 1 + count(3*n+1); }
    }
	public static void main(String[] args) {
        int n = 4;
        System.out.println(count(n));
	}
}

// no.of ways to place tiles in area of m*n when given tiles of area m*1

public static int placeTiles(int n,int m){
	if(m==n){ return 2};
	if(m>n){return 1};
	int vertPlace = placeTiles(n-m,m);
	int horzPlace = placeTiles(n-1,n);
	return vertPlace + horzPlac;
}
}
