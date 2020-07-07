#include <stdio.h>

int main(){
    printf("Content-type: text/html; charset=utf-8\n\n");
    printf("About Minho World! \n");
    printf("숫자를 입력해 주세요!\n");
    printf("<form action='output.out'>\n");
    printf("<input type='text' name='user_num' />\n");
    printf("<input type='submit' />\n");
    printf("</form>");
    return 0;
}