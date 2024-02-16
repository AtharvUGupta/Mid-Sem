#include<stdio.h>
#include<math.h>

int main(){
    int r,h;
    printf("Enter the radius :");
    scanf("%d",&r);
    printf("Enter the height :");
    scanf("%d",&h);

     float volume =3.14*r*r*h;
     float sarea=2*3.14*r*h;

     int v=round(volume);
     int s=round(sarea);

     printf("The volume and surface area is %d and %d",v,s);


     return 0;

}