#include <stdio.h>
#include <stdlib.h>
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
		 }}
		
}
if (k==0){
	for (i=0;i<5;++i){
	for (j=0;j<6;++j)
		vet[i][j]=vet1[i][j];
	}}
}

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
		 }}
		
}
if (k==0){
	for (i=0;i<5;++i){
	for (j=0;j<6;++j)
		vet[i][j]=vet1[i][j];
	}}
}

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
		 }}
		
}
if (k==0){
	for (i=0;i<5;++i){
	for (j=0;j<6;++j)
		vet[i][j]=vet1[i][j];
	}}
}

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
		 }}
		
}
if (k==0){
	for (i=0;i<5;++i){
	for (j=0;j<6;++j)
		vet[i][j]=vet1[i][j];
	}}
}

void matriz(int vet[5][6]){	

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
void imprime_mat(int vet[5][6]){
	int i,j;
for (i=0;i<5;++i){
	for (j=0;j<6;++j)
		printf("%c ",vet[i][j]);
	printf ("\n");
	}
printf("\n");
}
void teste(int vet[5][6],int vet1[5][6]){
int i,j;
for (i=0;i<5;++i){
	for (j=0;j<6;++j)
		vet1[i][j]=vet[i][j];
	}
}
int gera_estado(int vet[5][6]){
//Os estados gerados serão guardados em uma super matriz em que a cada [5][6] posições, ele guarda um estado
	int i,j,i2,j2,vetant[5][6],supervet[5][48];
	teste(vet,vetant);
	for (i=0;i<5;i++)
		for (j=0;j<48;j++)
			supervet[i][j]=1;
	for (i=0;i<5;i++)
		for (j=0;j<6;j++)
			if (vet[i][j]==0){
				++j;
				if (vet[i][j]==0)
					++j;
				gotoleft(vet,vet[i][j]);
				if (supervet[0][0]==1)
					for (i2=0;i2<5;i2++)
						for (j2=0;j2<6;j2++)
							supervet[i2][j2]=vet[i2][j2];
				else
					for (i2=0;i2<5;i2++){
						for (j2=0;j2<6;j2++){
							supervet[i2][j2+6]=vet[i2][j2];
					}
				}			
				teste(vetant,vet);
					
			}	
	for (i=0;i<5;i++)
		for (j=5;j>=0;j--)
			if (vet[i][j]==0){
				--j;
				if (vet[i][j]==0)
					--j;
				gotoright(vet,vet[i][j]);
				if (supervet[0][12]==1)
					for (i2=0;i2<5;i2++)
						for (j2=0;j2<6;j2++)
							supervet[i2][j2+12]=vet[i2][j2];
				else
					for (i2=0;i2<5;i2++){
						for (j2=0;j2<6;j2++){
							supervet[i2][j2+18]=vet[i2][j2];
							}
					}			
				teste(vetant,vet);	
			}
	for (j=0;j<6;j++)
		for (i=0;i<5;i++)
			if (vet[i][j]==0){
				++i;
				if (vet[i][j]==0)
					++i;
				goup(vet,vet[i][j]);
				if (supervet[0][24]==1)
					for (i2=0;i2<5;i2++)
						for (j2=0;j2<6;j2++)
							supervet[i2][j2+24]=vet[i2][j2];
				else
					for (i2=0;i2<5;i2++){
						for (j2=0;j2<6;j2++){
								supervet[i2][j2+30]=vet[i2][j2];
					}
				}			
				teste(vetant,vet);
			}	
	for (j=0;j<6;j++){
		for (i=4;i>=0;i--)
			if (vet[i][j]==0){
				--i;
				if (vet[i][j]==0)
					--i;
				godown(vet,vet[i][j]);
				if (supervet[0][36]==1)
					for (i2=0;i2<5;i2++)
						for (j2=0;j2<6;j2++)
							supervet[i2][j2+36]=vet[i2][j2];
				else
					for (i2=0;i2<5;i2++){
						for (j2=0;j2<6;j2++){
							supervet[i2][j2+42]=vet[i2][j2];
					}
				}			
				teste(vetant,vet);
			}	
	}
		for (i=0;i<5;i++){
			for (j=0;j<48;j++){
				printf("%c ",supervet[i][j]);
			}
			printf("\n");
		}	
	return supervet;
}	
int main(int argc, char *argv[]){
int vet[5][6];
matriz(vet);
gera_estado(vet);
return 0;
}
