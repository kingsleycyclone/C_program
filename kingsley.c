#include <stdio.h>
int num;
int i;
int accnumb[3]={1222172, 777122, 638765};
int ActNumber=0;
int main(){
    
        printf("please enter account number");
        scanf("%d", &num);
        for (i = 0; i <3; i++)
        {
           if(num==accnumb[i]) {
          ActNumber = 1;
          break;
          }
          }
    if (ActNumber){
        printf("welcome customer");
    }else {
        printf("sorry try again");
        }
        
        // if((num == 1222172) || (num==777122) || (num == 638765)){
        //     printf("welcome customer");
        // }else
        // printf("sorry try again");

        

    return 0;
}