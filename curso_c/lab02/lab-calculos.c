#include <stdio.h>
int main()
{

{
printf("a) Os valores de x,y,z\n"); 
int x=1,y=3; 
float z=5,w=7; 
x=w+y/2; 
z=x+z/2;
printf("x=%d y=%d z=%f \n",x,y,z);
}
 
{
printf("b) Os valores de x,y,z,a,b\n"); 
int x=1,y=3; 
int a=x++; 
int b=++x; 
y+=a; 
x-=b++; 
int z=x---x; 
printf("x=%d y=%d z=%d a=%d b=%d \n",x,y,z,a,b);
}

{
printf("c) Os valores de x,y,z,a,b \n");
int x=1,y=3; 
int a=x>y?x:y; 
int b=!x?x:~x; 
x=a?a:b+b?b:1; 
printf("x=%d y=%d a=%d b=%d \n",x,y,a,b);
}

return 0;
}	
