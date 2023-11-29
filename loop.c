#include <stdio.h>

int main(){
int i;
int num;
int passcode[3] = {777122, 666111, 729133};
int found = 0;

    printf("please enter the passcode to gain access");
    scanf("%d", &num);

    for (int i = 0; i <= 3; i++){

        if (num == passcode[i]){
            found = 1;
            break;
        }
    }
        if(found){
            printf("access gained");
        }
         else{
            printf("access denied");
        }
        
    
    

    return 0;

}
