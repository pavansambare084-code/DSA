double myPow(double x, int n) {
    // double product=1;
    // long long k=abs(n);
    //     if(x==1){
    //         return 1;
    //     }
    //     if(x==0){
    //         return 0;
    //     }
    //     if(n==0){
    //         return 1;
    //     }
    //     else {
    //         while(k>0&&k<(2147483648)/2){
    //             product=product*x;
    //             k--;
    //         }
    //         if((2147483648)/2<k){
    //             product=product*product;
    //         }
    //         if(n>0){
    //             return product;
    //         }
    //         else{
    //             return 1/product;
    //         }
    //     }
    //     return 0;
    double product=1;
    long long k=n;
    long long l=n;
    if(n<0){
        l=-l;
    }
    while(l>0){
        if(l%2==0){
            x=(x*x);
            l/=2;
        }
        else{
            product=product*x;
            l-=1;
        }
    }
    if(k<0){
        product=1.0/product;
    }
    return product;

}