#include <stdio.h>
#include <string.h>
int main(){                            // Fayllar ochildi 
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");


    if (input == NULL){         // Agar fayl bosh bo'lsa dastur o'chadi
        printf("Faylni o'qib bo'lmadi!");
        return 1;
    }


    int number[100], count = 0;   // Sonlarni saqalash uchun va index bilan hisoblash uchun 

    while (!feof(input)){
        fscanf(input, "%d", &number[count]);
        count++;
    }
    fprintf(output, "%d  %d", number[0], number[count - 1]);   // oxirgi va birinchi sonni indexini bilan olish 
}