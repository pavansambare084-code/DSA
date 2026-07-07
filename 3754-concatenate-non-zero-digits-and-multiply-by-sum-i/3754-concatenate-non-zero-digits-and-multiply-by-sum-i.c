long long sumAndMultiply(int n) {
    long long rev=0,rem;
    while(n!=0){
        rem=n%10;
        if(rem!=0){
        rev=rev*10 +rem;
        }
        n/=10;
    }
    n=0;
    long long sum=0;
    while(rev!=0){
        rem=rev%10;
        sum+=rem;
        n=n*10 +rem;
        rev/=10;
    }
    return n*sum;
}