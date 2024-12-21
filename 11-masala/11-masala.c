#include <stdio.h>
#include <string.h>
int main(){
    FILE *input = fopen("input.txt", "r");   // Fayllar yaratildi 
    FILE *output = fopen("output.txt", "w");
    
    if (input == NULL){       // Agar fayl bosh bo'lsa 
        perror("input file yuq");
        return 1;           // dastur o'chadi 
    }

    char letter[100];    // So'zlarni saqlash uchun
    int count = 0;     // Indexlar uchun

    while (!feof(input)){            // Sonlar tugaguncha   
        fscanf(input, "%s", letter);     // input faylidagi harflarni number ga yozish 

        if (letter[0] >= 'a' && letter[0] <= 'z'){   // Agar  birinchi harf kichik bo'lsa 
            letter[0] = letter[0] - 32;           // Katta harflarni katta harfga o'zgartiradi 
            fprintf(output, "%s ", letter);      

        }else{
            fprintf(output, "%s ", letter);
        }
        
        
    }
}