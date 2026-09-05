 #include <stdio.h>
int main(){
    float score;
    printf("Enter Scores \n");
    char option;   
    scanf("%c",&option);
switch(option){
    case 'A':
    printf("selected option is A Game Start!!\n");
    break;
    case 'B':
    printf("selected option is B Game Pause!!\n");
    break;
    case 'C':
    printf("selected option is C Game Restart!!\n");
    break;
    case 'D':
    printf("selected option is D Game over!!\n");
    break;
    case 'E':
    printf("KHEL KHATAM!!\n");
    break;
    case 'F':
    printf("fahhhhhhhh!! \n");
    break;
    default:
    printf("please check the input option");
    }
    return 0;
}