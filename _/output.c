#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    printf("Content-type: text/html; charset=utf-8\n\n");
    char *input = getenv("QUERY_STRING");
    int number;
    srand(time(NULL));
    int computer_number = rand() % 5 + 1;
    printf("Computer Input: %d\n", computer_number);
    sscanf(input, "user_num=%d", &number);
    printf("User Input: %d\n", number);
    if (computer_number == number) {
        printf("야바위 성공!\n");
    } else {
        printf("다음기회에!\n");
    }
    return 0;
}