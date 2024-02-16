#include<stdio.h>
#include<stdbool.h>

bool check(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }

    }
    return 1;
}
int main(){
    int n;
   
    printf("Enter a number n :");
    scanf("%d",&n);
    for(int i=1;n-i!=0;i++){
        int a=check(n-i);
        int b=check(i);

        if(a==1||b==1){
           
           
           continue;
        }
        else if(a==0&&b==0){
            
           printf("%d  %d \n",n-i,i);
        }
       
    }
    return 0;
}