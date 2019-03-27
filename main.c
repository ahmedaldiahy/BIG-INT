#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
#include<assert.h>
#include<time.h>
#include<math.h>
#define MAX 12

int n;
int arr[MAX];
int carry = 0;
int main()
{
    arr[MAX-1] = 1;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        carry = 0;
        for(int j = MAX; j >= 0; j--){
            int c = i*arr[j];
            arr[j] = (c + carry) % 10;
            carry = (c+carry)/10;
        }
        for(int k = 0; k < MAX; k++)printf("%d ", arr[k]);
        printf("\n\n");
    }

    return 0;
}
