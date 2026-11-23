#include<stdio.h>
#define SIZE 15

int main(void){
    // 안쪽 코드는 공백 4칸으로 스페이스바 4번 눌러서 설정하였습니다. 탭 아님.

    char board[SIZE][SIZE];

    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
             board[i][j] = '.';
        }
    }
    // 열 번호 출력
    printf("   ");
    for(int j = 1; j <= SIZE; j++){
        printf("%2d ", j);
    }
    printf("\n");
    
    // 오목판 출력
    for(int i = 0; i < SIZE; i++){
        printf("%2d ", i + 1);
        for(int j = 0; j < SIZE; j++){
            printf("%2c ", board[i][j]);
        }
        printf("\n");
    }

    return 0;


}
