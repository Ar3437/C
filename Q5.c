 #include <stdio.h>
int main(){
    int total_purchase=0;
    
    while(total_purchase<=0){
        int discount=0;
    printf("Enter purchasing value:\n");
    scanf("%d",&total_purchase);
    if(total_purchase>0 && total_purchase<=500){
        printf("No discount for you !!");
    }    
    if(total_purchase>500){
        discount=total_purchase*10/100;
        printf("discount applied!!");
        if(discount>=100){
            discount+=25;
            printf("Bonus discount applied");
        }printf("total discount applied: %d",discount);
    }else{
            printf("Entered amount is invalid, please re enterd\n");
    }}return 0;
    }

