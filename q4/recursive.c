#include <stdio.h>
#include <time.h>
#define FindMax(a,b) (((a) > (b)) ? (a) : (b))

int maxSubArray(int arr[], int n){
    int max = arr[0];
    int test = arr[0];
    int i = 1;

    for(i = 0; i < n; i++){
	  test = FindMax(arr[i], test + arr[i]);
          max = FindMax(max, test);
    }
    if(max > 0) return max;
    else return 0;

}

int main()
{
    int input_arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int size = sizeof(input_arr) / sizeof(int);
    double time;
    clock_t start, end;
    FILE *file = fopen("recursive.txt", "a");

    start = clock();
    int result = maxSubArray(input_arr, size);
    end = clock();
    printf("The largest sum = %d\n", result);

    if(file){
	time = (double) (end - start) / CLOCKS_PER_SEC;
	fprintf(file, "Total Time : %f\n", time);
        fclose(file);
    }
    printf("Exe. time = %f second.\n", time);	
    return 0;
}
