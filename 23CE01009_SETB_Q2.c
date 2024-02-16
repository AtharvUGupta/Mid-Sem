#include<stdio.h>
#include<stdbool.h>
bool perfect(int n){
    int sum=0;
   for(int i=1;i<n;i++){
    if(n%i==0){
        sum=sum+i;
    }

   }
   if(sum==n){
    return 1;
   }
   else{
    return 0;
   }
}

int main(){
   
    for(int i=1;i<=100;i++){
        int c=perfect(i);
        if(c==1){
            printf("%d\n",i);
        }

    }
        return 0;

    }
