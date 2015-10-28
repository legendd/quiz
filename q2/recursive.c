#include <stdio.h>
#include <time.h>
char smallest_char(char str[], char c);

int main()
{
    char str[30];
    char c,output;
    clock_t start, end;
    double time;

    printf("Input a sorted char array:\n");
    scanf("%[^\n]%*c", str);
    printf("Input a char:\n");
    scanf("%c", &c);

    start = clock();
    output = smallest_char(str, c);
    end = clock();
    time = (end - start)/(double)(CLOCKS_PER_SEC);

    printf("Output: %c\n", output);
    printf("Exe. time = %lf sec\n", time);
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

