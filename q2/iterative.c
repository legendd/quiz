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
    int i = 0;
    while(str[i] != '\0'){
        if(str[i] > c) return str[i];
	i++;
    }
    return str[0];
}
