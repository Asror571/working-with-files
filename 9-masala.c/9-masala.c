#include <stdio.h>
#include <string.h>

int main(){
    FILE *input = fopen("input.txt","r");    // Fayllar yaratildi 
    FILE *output = fopen("output.txt","w");    

    char belgi;            // Belgilarni 
    int pilus = 0, minus = 0 ,qavs = 0,qavs1 = 0, teng = 0,bolish = 0,kopaytirish = 0;        // hisoblash uchun

    if (input == NULL){
        printf("Faylni o'qib bo'lmadi ");
        return 1;
    }

    while ((belgi = fgetc(input)) != EOF){ 
        if (belgi == '+') {                         // Shart tekshiradi hamda hisoblaydi 
            pilus++;
        }
        else if (belgi == '-'){
            minus++;
        }
        else if (belgi == '('){
            qavs++;
        }
        else if (belgi == '('){
            qavs1++;
        }
        else if (belgi == '='){
            teng++;
        }
        else if (belgi == '/'){
            bolish++;
        }
        else if (belgi == '*'){
            kopaytirish++;
        }
    }
    fprintf(output,"Pilus : %d\n",pilus);     // Natija faylga yoziladi 
    fprintf(output,"Minus : %d\n",minus);
    fprintf(output,"Qavs : %d\n",qavs);
    fprintf(output,"Tenglik : %d\n",teng);
    fprintf(output,"Bo'lish : %d\n",bolish);
    fprintf(output,"Ko'paytirish  : %d\n",kopaytirish);

    fclose(output);
    
    
}