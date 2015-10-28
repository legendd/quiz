#include <stdio.h>
#include <time.h>
#include <string.h>
char smallest_char(char str[], char c);

int main(int argc, int *argv[])
{
    char str[26];
    char c,output;
    clock_t start, end;
    double time;
    FILE *file = fopen("recursive.txt", "a");

    strcpy(str, argv[1]);
    printf("Input sorted char array: %s\n", str);
    c = *argv[argc-1];    
    printf("Input char: %c\n", c);

    start = clock();
    output = smallest_char(str, c);
    end = clock();
    time = (end - start)/(double)(CLOCKS_PER_SEC);

    printf("Output: %c\n", output);
    if(file){
        fprintf(file,"Exe. time = %lf sec\n", time);
        fclose(file);
    }
    return 0;
}

char smallest_char(char str[], char c){
    if(str[0]!='\0'){
	if(str[0] > c)
	    return str[0];
        else
            return ((smallest_char(str+1,c) < c) ? str[0] : smallest_char(str+1,c));
    }
    return 0;
}

