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
