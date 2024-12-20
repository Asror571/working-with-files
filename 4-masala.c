#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *input = fopen("4input.txt","r");
    FILE *input2 = fopen("input4.1txt","r");
    FILE *output = fopen("4output.txt","w");

    char line[144];
    char line2[144];
    
    while (!feof(input) && !feof(input2)){
        
        fscanf(input, "%s", line)  && fscanf(input2, "%s", line2);
        fprintf(output,"%s - %s\n",line,line2);
    }
    
    return 0;
}