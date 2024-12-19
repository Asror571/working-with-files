#include <stdio.h>
#include <string.h>

int main(){
    FILE *inputfile, *outputfile;     // Fayllar bilan ishlash uchun pointer o'zgaruvchilar 
    char word[100] , longword[100], shortword[100];   // So'zlarni o'qish eng uzun hamda eng qisqa so'zni topish uchun o'zgaruvchilar 
    int longlength = 0, shortlength = 100;       // Eng uzun so'zni qiymati 0 ga   eng qisqani 1000 ga tenglash tirildi 


    inputfile = fopen("input.txt","r");     // Input file dan ma'lumotlarni o'qish maqsadida "r"
        if (inputfile  ==  NULL){                  // Agar fale bosh bo'lsa yani NULL ga teng bo'lsa 
            printf("Faylni afsuski o'qib bo'lmadi ");
            return 1;                 // Dastur o'chadi 
        }

      while (fscanf(inputfile,"%s",word) == 1){      // So'z tugaguncha ishlaydi 
          int wordlength = strlen(word);          // So'zlarni uzunligini strlen  aniqlab olamiz
          
          if (wordlength > longlength){        // Agar so'zning uzunligi eng uzun so'zdan  katta bo'lsa 
              longlength = wordlength;        // Eng uzun so'zni qiymatini yangilaymiz
              strcpy(longword,word);          // Va so'zni  Eng uzun so'z ga copy qilamiz
            }

          if (wordlength < shortlength){       // Endi tepadagini teskarizi bo'ladi 
              shortlength = wordlength;
              strcpy(shortword,word);          // So'zni eng qisqa so'zga copy qilamiz 
            }
          
          
        } 

    fclose(inputfile);          // input fayilimizni yopaniz
     
    outputfile = fopen("output.txt", "w");         // output filemizni yozish maqsadida ochamiz

        if (outputfile == NULL){            // Yana shunday hech nars bo'lmasa 
            printf("Faylni yozib bo'lmadi !");
            return 1;                  // Dastur ochadi
        }

        fprintf(outputfile,"Eng uzun so'z %s",longword);    // Natijlar output filega yoziladi 
        fprintf(outputfile,"Eng qisqa so'z %s",shortword);

}