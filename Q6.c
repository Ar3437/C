 #include <stdio.h>
int main(){
    float b;
    printf("Enter purchasing value:\n");
    scanf("%f",&b);
    if(b <5.0){
        printf("little or no damage");
    }else if(b>=5.0 && b<5.5){
        printf("some damage");
    }else if(b>=5.5 && b<6.5){
        printf("spme damage in the wall");
    }else if(b>=6.5 && b<7.5){
        printf("disatser");
    }else if(b>7.5){
        printf("khatam");
    }else{
        printf("invalid");
    }
    return 0;
}