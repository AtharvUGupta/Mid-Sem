#include<stdio.h>
int main(){
    int x,y,r,x1,y1;
    printf("Enter the centre :");
    scanf("%d %d",&x,&y);
     printf("Enter the radius :");
     scanf("%d",&r);

     printf("Enter the new point :");
    scanf("%d %d",&x1,&y1);

    int m=((x-x1)*(x-x1))+((y-y1)*(y-y1))-r*r;

    if(m>0){
        printf("It is outside the circle ");
    }
    else if(m<0){
        printf("It is inside the circle ");
    }
    else if(m==0){
        printf("It is on the circle");
    }

     

return 0;

}