#include <stdio.h>
#include <string.h>

int main(){ 
    FILE *input = fopen("input.txt","r");    //Fileni o'qish uchun
    FILE *output = fopen("output.txt","w");    // faylga yozish uchun

    char word[100];          // matnlarni saqlsh uchun

    if (input == NULL){           // Agar fayl bo'shb bo'lsa 
    printf("Faylni o'qib bo'lmadi !");
    return 1;
    }
    
    int count , delnumber;          // Qatorlar soninini va o'chirish uchun 

    printf("Tushib qolishi kerak bo'lgan qatorni kiriting :");
    scanf("%d",&delnumber); 

    while (fgets(word,sizeof(word),input)){
        
        count++;
      
      if (count !=  delnumber){             // Teng bo'lganda 
          fprintf(output,"%s\n",word);

      }
      
    }
    
}