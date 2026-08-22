class Solution {
public:
    bool checkDivisibility(int n) {
    int original_num=n;    
    int sum=0,product=1,total=0;
    while(n>0){
    int last=n%10;    
    sum+=last;
    product*=last;
    n/=10;
    }
    total=sum+product;
    if(original_num % total==0) return true;
    return false;
    }
};