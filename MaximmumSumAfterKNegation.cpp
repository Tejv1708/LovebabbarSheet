// Maximize sum after K negations
long long int maximizeSum(long long int a[], int n, int k)
    {
    sort(a, a+n );
    for(int i=0 ; i<n ; i++){
        if(a[i] <0 && k>0){
            a[i] =-a[i] ;
            k--;
        }
    }
    int  sum = 0 ;
    for(int i=0 ; i<n ; i++)
    sum += a[i] ;
    int x = *min_element(a , a+n );
    if(k&1) sum -= 2*x ;
    return sum ;
    }
