long long int sumOrProduct(long long int n, long long int q)
{
    const unsigned int m = 1000000007;
	if(q == 1){
        int sum=0;
        for(int i=1; i<=n; i++){
            sum = sum+i;
        }
        return sum;
    }else if(q == 2){
        
        long long product=1;
         for(int i=1; i<=n; i++){
            product = (product*i)%m;
        }
        return product;
    }
}
