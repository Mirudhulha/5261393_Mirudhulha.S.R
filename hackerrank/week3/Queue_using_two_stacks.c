#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX 100000
int instack[MAX],outstack[MAX];
int intop=-1,outtop=-1;

void enqueue(int x){
    instack[++intop]=x;
}
void shiftstacks(){
    if(outtop==-1){
        while(intop>=0){
            outstack[++outtop]=instack[intop--];
        }
    }
}
void dequeue(){
    shiftstacks();
    outtop--;
}
void printfront(){
    shiftstacks();
    printf("%d\n",outstack[outtop]);
}
int main(){
    int q,type,x;
    scanf("%d",&q);
    
    while(q--){
        scanf("%d",&type);
        if(type==1){
            scanf("%d",&x);
            enqueue(x);
        }else if(type==2){
            dequeue();
        }else{
            printfront();
        }
    }
    return 0;
}

     
   
