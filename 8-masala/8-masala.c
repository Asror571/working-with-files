#include <stdio.h>
#include <string.h>

int main(){
    FILE *input = fopen("input.txt","r");   // fayllar ochildi 
    FILE *output = fopen("output.txt","w");

    if (input  == NULL){        // Agar fayl NULL ga teng bo'lsa 
        printf("Faylni o'qib bo 'lmadi!");
        return 1;                         // Dastur o'chadi
    }
    int asci_num;
 
    while (fscanf(input,"%d",&asci_num) == 1){ 
         fprintf(output,"%c",(char)asci_num);     // Charga o'tgazamiz 
    }
    fclose(input);
    fclose(output);
}