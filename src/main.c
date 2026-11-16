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

    return 0;


}
