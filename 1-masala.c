#include <stdio.h>

int main(){       
    FILE *file;            //  Fayillar bilan ishlash maqsadida pinter o'zgaruv chi yaratildi 
    char filename[] = "1.txt";      // Fayl nomini salash uchun
    int count,num;                // Fayldagi sonlarni sanash uchun count  sonlarni saqlash uchun num o'zgaruvchi 
    float sum = 0.0 , middle;          // Sonlar yig;indisini hisoblash uchun sum Arifmetigi uchun middle 

    file = fopen(filename,"r");         // Faylni ochadi o'qish maqsadida 
     if (file == NULL){                         // Agar faylni ochib bo'lmasa yani o'qib bo'lmasa            
        printf("Faylni ochib bo'lmaydi :");
        return 1;
     }
        while (fscanf(file,"%d",&num) == 1){      // Sikl 1 qaytarmaganda yani sonlar tugaganda o'chadi
            sum += num;    // Sonlarni yig'indisini hisoblab boradi 
            count ++;       // Sonini hisoblab boradi
            
        }
        fclose(file);      // Fayl yopiladi


     if (count == 0){            // Agar sonlar yo'q   bo'lsa 
        printf("BU faylda sonlar mavjud emas ");
     }

    middle = sum/count;        // O'rta arifmetigi topildi 

    printf("Ushubu fayldagi sonlarni o'rta arifmetigi :%1.f",sum);     // Natijani chiqaradi 
 
}

















