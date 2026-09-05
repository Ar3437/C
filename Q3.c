#include <stdio.h>
int main(){
    float score;
    printf("Enter Scores \n");
    scanf("%f",&score);
    if(score>90 && score<100){
        printf("Grade:A \n");
    }else if(score>80 && score<90){
        printf("Grade:B \n");
    }else if(score>70 && score<80){
        printf("Grade:C \n");
    }else if(score>60 && score<70){
        printf("Grade:D \n");
    }else if(score>50 && score<60){
        printf("Grade:E \n");
    }else if(score>0 && score<50){
        printf("Grade:F \n");
    }else{
        printf("Entered score-%f is Invalid scores!!",score);
    }return 0;

}
