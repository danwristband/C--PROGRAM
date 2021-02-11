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
    
    printf("The matrix A is \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           printf("%d  ",Matrx[i][j]) ;
        }
        printf("\n");
    }
    
    int determinant = Matrx[0][0] * ((Matrx[1][1]*Matrx[2][2]) - (Matrx[2][1]*Matrx[1][2])) -Matrx[0][1] * (Matrx[1][0]
   * Matrx[2][2] - Matrx[2][0] * Matrx[1][2]) + Matrx[0][2] * (Matrx[1][0] * Matrx[2][1] - Matrx[2][0] * Matrx[1][1]);
 
  printf("Determinant of  matrix is: %d", determinant);
    
     
    return 0;
}