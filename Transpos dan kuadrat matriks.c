#include <stdio.h>

void fungsiTransposeMultiply (int N, int matriks[N][N]);

int main() {
	int N;
	int x,y;

	printf("==============================================\n");
	printf("   PENGHITUNG TRANSPOSE DAN KUADRAT MATRIKS\n");	
	printf("==============================================\n");	
	printf("Masukkan ukuran dari matriks persegi: ");
	scanf("%d", &N);
	
	int matriks[N][N];
	
	printf("==============================================\n");
	//input nilai elemen matriks
	for (x = 0; x < N; x++){
		for (y = 0; y < N; y++){
			printf("Masukkan nilai matriks[%d][%d]: ", x + 1, y + 1);
			scanf("%d", &matriks[x][y]);
		}
	}
	printf("==============================================\n");
	printf("Matriks utama:");
	for (x = 0; x < N; x++){
		printf("\n");
		for (y = 0; y < N; y++){
			printf("%d\t", matriks[x][y]);
		}
	}	
	fungsiTransposeMultiply(N, matriks);

	return 0;
}

void fungsiTransposeMultiply (int N, int matriks[N][N]) {
	int transpose[N][N];
	int x, y, z;
	int multiply[N][N];
	
	//For Transpose algorityhm
	for(x = 0; x < N; x++){
		for(y = 0; y < N; y++){
			transpose[x][y]= matriks[y][x];
		}
	}
	
	//display transpose
	printf("\n\nMatriks Hasil Transpose:");
	for (x = 0; x < N; x++){
		printf("\n");
		for (y = 0; y < N; y++){
			printf("%d\t", transpose[x][y]);
		}
	}
	
	//For multiply algorityhm
	for(x = 0; x < N; x++){
		for(y = 0; y < N; y++){    
			multiply[x][y] = 0;
			for(z = 0; z < N; z++){
				multiply[x][y] += transpose[x][z] * transpose[z][y];    
			}    
		}    
	}
	
	//For multiply display
	printf("\n\nMatriks Hasil kuadrat:");
	for (x = 0; x < N; x++){
		printf("\n");
		for (y = 0; y < N; y++){
			printf("%d\t", multiply[x][y]);
		}
	}
}
