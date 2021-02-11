#include<stdio.h>

int main()
{   
    
    int Matrx[3][3];

    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           printf("A %d,%d is",i+1,j+1) ;
           scanf("%d",&Matrx[i][j]);
        }
    }
    
    printf("The inverse of matrix A is \n");
    for(int i=2;i>=0;i--){
        for(int j=2;j>=0;j--){
           printf("%d  ",Matrx[j][i]) ;
        }
        printf("\n");
    }
    
  
  
     
    return 0;
}