#include <stdio.h>

int main(){
    FILE *input1 = fopen("input.txt","r");   // O'qish maqsadida 
    FILE *input2 = fopen("input.2txt","r");
    FILE *output = fopen("output.1txt","w");   // Yozish maqsadida

    if (input1 == NULL  && input2  == NULL){        // Agarda fayllar 0 ga teng bo'lsa 
        printf("Fayllarni o'qib bo'lmaydi !");
        return 1;                    // Dastur o'chadi 
    }
     char line1[100];           // input 1 fayldagi so'zlarni yani stringlarni o'qish uchun
     char line2[100];           // input 2 fayldagi so'zlarni yani stringlarni o'qish uchun

        while (!feof(input1)  && !feof(input2)){    // So'zlar tugab qolgungacha 

            fscanf(input1,"%s",line1) && fscanf(input2,"%s",line2);
            fprintf(output," %s -  %s\n",line1, line2);
            
        }
        
        return 0;

}