#include <stdio.h>

//tenta mover peça em uma matriz para esquerda
void gotoleft(int vet[5][6],char c){

	int i,j,aux,vet1[5][6],k;
	k=1;

	for (i=0;i<5;++i){
		for (j=0;j<6;++j)
			vet1[i][j]=vet[i][j];
		}

	for (i=0;i<5;++i){

			for (j=0;j<6;++j){
				if (j==0)
					if (vet[i][j]==c)
						k=0;

				if (vet[i][j]==c){
					aux=vet[i][j-1];
					vet[i][j-1]=vet[i][j];
					vet[i][j]=aux;

					if (aux!=0)
						k=0;
		 		}
		 }
	}

	if (k==0){
		for (i=0;i<5;++i){
		for (j=0;j<6;++j)
			vet[i][j]=vet1[i][j];
		}
	}
}

//tenta mover peca de uma matriz para direita
void gotoright(int vet[5][6],char c){

	int i,j,aux,vet1[5][6],k;
	k=1;

	for (i=0;i<5;++i){
		for (j=0;j<6;++j)
			vet1[i][j]=vet[i][j];
	}

	for (i=0;i<5;++i){

			for (j=5;j>=0;--j){
				if (j==5)
					if (vet[i][j]==c)
						k=0;

					if (vet[i][j]==c){
						aux=vet[i][j+1];
						vet[i][j+1]=vet[i][j];
						vet[i][j]=aux;
						if (aux!=0)
							k=0;
		 }
		 }
	}

	if (k==0){
		for (i=0;i<5;++i){
			for (j=0;j<6;++j)
				vet[i][j]=vet1[i][j];
		}
	}
}

//tenta mover peça de uma matriz para cima
void goup(int vet[5][6],char c){

	int i,j,aux,vet1[5][6],k;
	k=1;

	for (i=0;i<5;++i){
		for (j=0;j<6;++j)
			vet1[i][j]=vet[i][j];
		}
	for (j=0;j<6;++j){

			for (i=0;i<5;++i){
				if (i==0)
					if (vet[i][j]==c)
						k=0;

				 	if (vet[i][j]==c){
						aux=vet[i-1][j];
						vet[i-1][j]=vet[i][j];
						vet[i][j]=aux;
					 	if (aux!=0)
							k=0;
					}
		 }
	}

	if (k==0){
		for (i=0;i<5;++i){
			for (j=0;j<6;++j)
				vet[i][j]=vet1[i][j];
		}
	}
}

//tenta mover peça de uma matriz para baixo
void godown(int vet[5][6],char c){
	int i,j,aux,vet1[5][6],k;
	k=1;

	for (i=0;i<5;++i){
		for (j=0;j<6;++j)
			vet1[i][j]=vet[i][j];
		}

	for (j=0;j<6;++j){

			for (i=5;i>=0;--i){
				if (i==4)
					if (vet[i][j]==c)
						k=0;

					if (vet[i][j]==c){
						aux=vet[i+1][j];
						vet[i+1][j]=vet[i][j];
						vet[i][j]=aux;
						if (aux!=0)
							k=0;
					}
		 }

	}
	if (k==0){
		for (i=0;i<5;++i){
			for (j=0;j<6;++j)
				vet[i][j]=vet1[i][j];
		}
	}
}

//cria matriz
void cria_matriz(int vet[5][6]){

	// vet=[['D','D','0','P','P','G'],
	//	  ['D','D','0','P','H','M'],
	//	  ['R','R','I','J','M','M'],
	//	  ['T','T','O','K','C','N'],
	//	  ['T','O','O','L','C','N']];

	vet[0][0]=vet[0][1]=vet[1][0]=vet[1][1]='D';
	vet[0][2]=vet[1][2]=0;
	vet[0][3]=vet[0][4]=vet[1][3]='P';
	vet[0][5]='G';
	vet[1][4]='H';
	vet[2][2]='I';
	vet[2][3]='J';
	vet[3][3]='K';
	vet[4][3]='L';
	vet[1][5]=vet[2][4]=vet[2][5]='M';
	vet[2][0]=vet[2][1]='R';
	vet[3][0]=vet[3][1]=vet[4][0]='T';
	vet[3][2]=vet[4][1]=vet[4][2]='O';
	vet[3][4]=vet[4][4]='C';
	vet[3][5]=vet[4][5]='N';
}

//imprime matriz passada como parâmetro
void imprime_mat(int vet[5][6]){
	int i,j;

	for (i=0;i<5;++i){
		for (j=0;j<6;++j)
			printf("%c \t",vet[i][j]);
		printf ("\n");
		}
	printf("\n");
}

//??? (deve testar se movimento é possivel)
void teste(int vet[5][6],int vet1[5][6]){
	int i,j;
	for (i=0;i<5;++i){
		for (j=0;j<6;++j)
			vet1[i][j]=vet[i][j];
		}
}
/*
int main(int argc, char *argv[]){
int vet[5][6],vetatual[5][6],vetinicial[5][6];
matriz(vet);
teste(vet,vetinicial);
teste(vet,vetatual);
imprime_mat(vet);
goup(vet,'I');
if (vet!=vetatual){
	imprime_mat(vet);
	teste(vet,vetatual);}
goup(vet,'I');
if (vet!=vetatual){
	imprime_mat(vet);
	teste(vet,vetatual);}
godown(vet,'I');
if (vet!=vetatual){
	imprime_mat(vet);
	teste(vet,vetatual);}

return 0;
}*/
