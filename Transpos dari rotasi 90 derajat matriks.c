#include <stdio.h>

void transpose (int i, int j, int input [i][j], int transposemat [j][i] );
void rotate (int i, int j, int transposemat [j][i]);

int main(){
    int i,j,a,b,sen=0;
    printf("Program ini diperuntukan untuk transpose lalu rotasi 90 derajat CCW dari sebuah matriks M*N ");
    do{
        printf("\n Tentukan nilai ukuran M : ");
        scanf("%d", &i);
        printf("\nTentukan nilai ukuran dari N : ");
        scanf("%d", &j);

        int input[i][j]; int transposemat[j][i];
        for(a=0; a<i; a++){
            for(b=0; b<j; b++){
                printf("masukan nilai elemen matriks baris ke %d kolom ke %d : ",a+1,b+1);
                scanf("%d",&input[a][b]);
            }
        }

        for(a=0; a<i; a++){
            printf("\n");
            for(b=0; b<j; b++){
                printf("%d ", input[a][b]);
            }
        }

        transpose(i,j,input,transposemat);
        rotate(i,j, transposemat);

        printf("\nLagi? (Ketik -1 jika tidak mau lagi) :  ");
        scanf("%d", &sen);
    }while(sen != -1);

    return 0;
}

void transpose( int i, int j, int input[i][j], int transposemat [j][i]){
    int a,b;
        for(a=0; a<j; a++){
            for(b=0; b<i; b++){
                transposemat[a][b] = input[b][a];
            }
        }
        printf("\n Matriks Tranposenya adalah : ");
        for(a=0; a<j; a++){
            printf("\n");
            for(b=0; b<i; b++){
                printf("%d ", transposemat[a][b]);
            }
        }

}

void rotate (int i, int j, int transposemat [i][j]){
    int a, b;
    int input[i][j];
    printf("\n matriks Rotasinya adalah : ");
        for(a = i-1; a >= 0; a--){
            printf("\n");
            for(b = 0;  b < j; b++){
                printf("%d ", transposemat[b][a]);
            }
        }
}
