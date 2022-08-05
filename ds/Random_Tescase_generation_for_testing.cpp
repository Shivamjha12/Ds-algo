//TESTING TESTCASES
    while(true)
    {
        int n=rand()%100+2;//How large in length of array
        cout<<n<<"\n";
        vi a;
        int i=0;
        fl(i,n){
            a.push_back(rand()%1000);// how large is values is in array
        }
        i=0;
        fl(i,n){
            cout<<a[i]<<' ';
        }
        cout<<"\n";
        ll res1=func(a);// passing testcase to function which is right and give right result, ignoring time comp
        ll res2=func1(a);// our written function which we want to test
        if(res1!=res2){ // we compare here both function output
            cout<<"Wrong answer: "<<res1<<" "<<res2<<"\n";
            break;
        }
        else{
            cout<<"OK\n";
        }
    }
