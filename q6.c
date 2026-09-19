#include <stdio.h>
int main(){
    int matrix[3][3]={{9,8,7},{4,5,6},{3,2,1}};
    int matrixB[3][3]={{9,8,7},{4,5,6},{3,2,1}};
    int result[3][3]={0};
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            for(int k=0;k<3;k++){
                result[i][k]+=matrix[i][k]*matrixB[k][j];
            }}                        
    
        }for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ",result[i][j]);
    }printf("\n");}
   

 return 0;
}
