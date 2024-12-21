#include <stdio.h>

int main(){

    FILE *input = fopen("input.xtx","r");     // O'qish maqsadida fayl input fayl
    FILE *output1 = fopen("output1.txt","w"); // Yozsih maqsadida 
    FILE *output2 = fopen("output2.txt","w");

    if (input == NULL){                    // Agar input faylimiz bosh bo'lsa  
        printf("Faylni o'qib bo'lmadi !");
        return 1;
    }
    int number;           // Input fayldagi sonlarni saq;ash uchun

    while (!feof(input)){         // Sonimiz tugaguncha ishlaydi
        fscanf(input,"%d",&number);

        if (number % 2 != 0){        // Agar oq bo'lsa   output1 faylga yozadi 
            fprintf(output1," %d ",number);
        }
        else{
            fprintf(output2," %d ",number);  // Kas holda output 2 faylga yozadi 
        }
    }
    
    
}