#include<stdio.h>
#include<math.h>
int main()
{   float l1,l2,g1,g2;
printf("Enter values of latitude (l1,l2)\n");
scanf("%f %f",&l1,&l2);
printf("Enter values of longitude(g1,g2) in degrees\n");
scanf("%f %f",&g1,&g2);
printf("The Distance between them is %f\n",(3963*acos(sin(l1)*sin(l2)+cos(l1)*cos(l2)*cos(g2-g1))));
return 0;
}