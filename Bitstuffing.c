#include <stdio.h>
int main(){
    char data [100];
    int i, count =0;

    printf("Enter data: ");
    scanf("%s", data);

    printf("After: ");
    for(i=0;data[i] != '\0'; i++){
        printf("%c",data[i]);

        if(data[i] == '1'){
            count++;

            if(count == 5){
                printf("0");
                count = 0;

        
            }
        } else{
            count = 0;
        }
    }
    printf("\n");
    return 0;
}
