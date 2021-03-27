#include <stdio.h>
#include <stdlib.h>

void init_board(char[17][26]);
void print_board(int,int, char[17][26]);
int main()
{
    char all_board[17][26];
    init_board(all_board);
// alterações no board têm de ser aqui; atenção à moldura de dimensão 1
    all_board[1][1]='1';
    print_board(12, 9, all_board);
    return 0;
}

// cria o tabuleiro com moldura e inicializa a 0
void init_board(char all_board[17][26]){
    int i=0, j=0;
    for(i=0; i<17; i++){
        for(j=0; j<26; j++){
        all_board[i][j]= '0';
        }
    }
}

 // imprime o tabuleiro com  as dimensoes pedidas
void print_board(int l,int c, char all_board[17][26]){
    int i, j, a;
    int number=l;
    char Letra ='A';
    if((c%3==0 && l%3==0) && c<=15 && l<=24 && c>0 && l>0){
        for(i=1; i<=l; i++, number--){
            printf("%2d ", number);
            for(j=1; j<=c; j++){
            printf(" %c ", all_board[i][j]);
            }
        printf("\n");
        }
    printf("   ");
    for(a= 1; a<= 9; a++ , Letra++) {
        printf(" %c ", Letra);
    }
    } else {
        printf("Erro; as dimenções selecionadas não sao possiveis; imprimir o folheto de ajuda");
    }
}
