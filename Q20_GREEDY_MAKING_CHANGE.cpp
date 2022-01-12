//https://binarysearch.com/problems/Making-Change

int solve(int n) {
    
    int i,j,k,cnt=0,temp;

    if(n>=25){
        temp=(n/25);
        n = n - (temp*25);
        cnt+=temp;
    }

    if(n>=10){
        temp=(n/10);
        n = n - (temp*10);
        cnt+=temp;
    }

    if(n>=5){
        temp=(n/5);
        n = n - (temp*5);
        cnt+=temp;
    }

    if(n>=1){
        cnt+=n;
    }

    return cnt;

}