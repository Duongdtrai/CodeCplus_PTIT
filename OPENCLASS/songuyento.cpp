#include<stdio.h>
#include<math.h>
int main(){
    long long n;
    scanf("%lld",&n);
    int dem =0;
    if( n == 1 || n == 0){
        printf("NO");
    }
    else{
        for(int i = 2; i <= sqrt(n);i++){
            if(n%i==0){
                dem++;
                break;
            }
        }
        if ( dem == 0){
            printf("YES");
        }
        else if( dem != 0 ){
            printf("NO");
        }
    }
    return 0;
}
