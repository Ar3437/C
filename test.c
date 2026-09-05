#include <stdio.h>
#define Pi 3.14
/*int main(){
    int a,b,c,d;
    a=10,b=5;
    c=a+b;
    d=c+10;
    char f='E';
    printf("hello world! \n");
    printf("value:%d%c \n",c,d);
    printf("value:%d \n",d);
    printf("Addition of %d & %d will be %d \n",a,b,c);
    printf("value:%d \n",f);
    
return 0;
}   */    
int main(){
    int a,b,c;
    float d;
    printf("enter  the value of a \n");
    scanf("%d",&a);
    printf("enter  the value of b \n");
    scanf("%d",&b);
    c=a+b;
    d=c*Pi;
    printf("value:%d \n",c);
    printf("value with macro Pi:%f \n",d);

    return 0;
}