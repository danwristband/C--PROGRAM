#include<stdio.h>
int main()
{
    int num[10];
    num[0]=0;
     
     for(int i=1;i<=10;i++){
    printf(" Please enter number %d: ",i);
    scanf("%d", &num[i]);
     }
    
     
     printf("The number are ");
     
     for(int i=1;i<=10;i++){
    printf("%d,",num[i]);

     }
   
     
    return 0;
}