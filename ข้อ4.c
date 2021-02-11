#include<stdio.h>
#include<string.h>
int main()
{   
    char per1[2][10],per2[2][10],per3[2][10];
    
    printf("First Student name:");
    scanf("%s",per1[0]);
    printf("Family Name:");
    scanf("%s",per1[1]);
    
    printf("Second Student name:");
    scanf("%s",per2[0]);
    printf("Family Name:");
    scanf("%s",per2[1]);
    
    printf("Third Student name:");
    scanf("%s",per3[0]);
    printf("Family Name:");
    scanf("%s",per3[1]);
    
    printf("Our classroom has three students\n");
    printf("1.%s %s\n",per1[0],per1[1]);
    printf("2.%s %s\n",per2[0],per2[1]);
    printf("3.%s %s\n",per3[0],per3[1]);
    
   
     
     
    return 0;
}
