//telling user to enter again if the number exceeds 7
#include<stdio.h>
int main(){
    int day;
    do{
    printf("enter day:");
    scanf("%d",&day);

    if(day<0 || day>7){
        printf("Invalid.please enter day between 1 to 7\n");
    }
}while(day<0 || day>7);
    
    switch(day){
        case 1:
         printf("Monday\n");
         break;
        case 2:
         printf("Tuesday\n");
         break;
        case 3:
         printf("Wednesday\n");
         break;
        case 4:
         printf("Thursday\n");
         break;
        case 5:
         printf("Friday\n");
         break;
        case 6:
         printf("Saturday\n");
         break;
        case 7:
         printf("Sunday\n");
         break;
    } 
    return 0;  
}
