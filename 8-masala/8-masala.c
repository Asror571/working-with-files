#include <stdio.h>
#include <string.h>

int main(){
    FILE *input = fopen("input.txt","r");
    FILE *output = fopen("output.txt","w");

    if (input  == NULL){
        printf("Faylni o'qib bo'lmadi!");
        return 1;
    }
    int asci_num;

    while (fscanf(input,"%d",&asci_num) == 1){
         fprintf(output,"%c",(char)asci_num);
    }
    fclose(input);
    fclose(output);
}