//Implementação das peças quadradas feitas por Jose Ricardo Nominato de Oliveira
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char tabuleiro[6][7]=
{
		'|','-','-','-','-','-','-','|',
		'|','D','D','0','P','P','A','|',
		'|','D','D','0','P','B','M','|',
		'|','R','R','E','F','M','M','|',
		'|','T','T','O','G','C','N','S',
		'|','T','O','O','H','C','N','S',
		'|','-','-','-','-','-','-','|'
};

void movimentos(void);

int main(int argc, char **argv)
{
	tabuleiro;
	movimentos();
}

void movimentos(void)
{
   int x,y,z,t;
   unsigned  int v,h; //v = movimento vertical ; h = movimento horizontal
   int i,j;

    for(i=0; i<6; ++i) 
    {
	    for(j=0; j<7; ++j)
		    printf("%3c",tabuleiro[i][j]);
		    printf("\n");
    }

//Irmão1
	if (tabuleiro[z][t]=='A')
	{
		/*cima*/
		v=z-1;
		h=t; 
		if (tabuleiro[v][h] =='0' ) 
		{
			while(tabuleiro[v][h] == '0') 
			{
				tabuleiro[v][h]='1';
				v=v-1;
			}
		} 

	    /*baixo*/
	    v=z+1;
	    h=t; 
	    if (tabuleiro[v][h] =='0' ) 
	    {
		    while(tabuleiro[v][h] == '0') 
		    {
			    tabuleiro[v][h]='1';
			    v=v+1;
		    }
	    } 

	    /*esquerda*/
	    v=z;
	    h=t-1;

	    if (tabuleiro[v][h] =='0' ) 
	    {
		    while(tabuleiro[v][h] == '0') 
		    {
			    tabuleiro[v][h]='1';
			    h=h-1;
		    }
	    }    

	    /*direita*/
	    v=z;
	    h=t+1;

	    if (tabuleiro[v][h] =='0' ) 
	    {
		    while(tabuleiro[v][h]= '0') 
		    {
			    tabuleiro[v][h]='1';
			    h=h+1;
		    }
	    } 

        for(i=0; i<6; ++i) 
        {
	        for(j=0; j<7; ++j)
		        printf("%3c",tabuleiro[i][j]);
		        printf("\n");
        }


////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Irmão2
	if (tabuleiro[z][t]=='B')
	{
		/*cima*/
		v=z-1;
		h=t; 
		if (tabuleiro[v][h] =='0' ) 
		{
			while(tabuleiro[v][h] == '0') 
			{
				tabuleiro[v][h]='1';
				v=v-1;
			}
		} 

	    /*baixo*/
	    v=z+1;
	    h=t; 
	    if (tabuleiro[v][h] =='0' ) 
	    {
		    while(tabuleiro[v][h] == '0') 
		    {
			    tabuleiro[v][h]='1';
			    v=v+1;
		    }
	    } 

	    /*esquerda*/
	    v=z;
	    h=t-1;

	    if (tabuleiro[v][h] =='0' ) 
	    {
		    while(tabuleiro[v][h] == '0') 
	    	{
			    tabuleiro[v][h]='1';
			    h=h-1;
		    }
    	} 

	    /*direita*/
	    v=z;
	    h=t+1;

	    if (tabuleiro[v][h] =='0' ) 
	    {
		    while(tabuleiro[v][h]= '0') 
	    	{
		    	tabuleiro[v][h]='1';
		    	h=h+1;
	    	}
        } 

        for(i=0; i<6; ++i) 
        {
	        for(j=0; j<7; ++j)
		        printf("%3c",tabuleiro[i][j]);
		        printf("\n");
        }


////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Irmão3
	if (tabuleiro[z][t]=='E')
	{
		/*cima*/
		v=z-1;
		h=t; 
		if (tabuleiro[v][h] =='0' ) 
		{
			while(tabuleiro[v][h] == '0') 
			{
				tabuleiro[v][h]='1';
				v=v-1;
			}
		} 

    	/*baixo*/
	    v=z+1;
    	h=t; 
    	if (tabuleiro[v][h] =='0' ) 
    	{
	    	while(tabuleiro[v][h] == '0') 
	    	{
		    	tabuleiro[v][h]='1';
		    	v=v+1;
	    	}
    	} 

	    /*esquerda*/
    	v=z;
    	h=t-1;

	    if (tabuleiro[v][h] =='0' ) 
    	{
	    	while(tabuleiro[v][h] == '0') 
	    	{
		    	tabuleiro[v][h]='1';
		    	h=h-1;
	    	}
    	} 

    	/*direita*/
	    v=z;
	    h=t+1;

	    if (tabuleiro[v][h] =='0' ) 
	    {
		    while(tabuleiro[v][h]= '0') 
		    {
		    	tabuleiro[v][h]='1';
		    	h=h+1;
	    	}
    	} 

        for(i=0; i<6; ++i) 
        {
	        for(j=0; j<7; ++j)
		        printf("%3c",tabuleiro[i][j]);
		        printf("\n");
        }


////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Irmão4
	if (tabuleiro[z][t]=='F')
	{
		/*cima*/
		v=z-1;
		h=t; 
		if (tabuleiro[v][h] =='0' ) 
		{
			while(tabuleiro[v][h] == '0') 
			{
				tabuleiro[v][h]='1';
				v=v-1;
			}
		} 

	    /*baixo*/
	    v=z+1;
    	h=t; 
	    if (tabuleiro[v][h] =='0' ) 
	    {
	    	while(tabuleiro[v][h] == '0') 
	    	{
			    tabuleiro[v][h]='1';
		    	v=v+1;
		    }
    	} 

	    /*esquerda*/
    	v=z;
	    h=t-1;

	    if (tabuleiro[v][h] =='0' ) 
	    {
		    while(tabuleiro[v][h] == '0') 
		    {
			    tabuleiro[v][h]='1';
			    h=h-1;
		    }
	    } 

	    /*direita*/
	    v=z;
	    h=t+1;

	    if (tabuleiro[v][h] =='0' ) 
	    {
		    while(tabuleiro[v][h]= '0') 
		    {
			    tabuleiro[v][h]='1';
			    h=h+1;
		    }
    	} 

        for(i=0; i<6; ++i) 
        {
	        for(j=0; j<7; ++j)
		        printf("%3c",tabuleiro[i][j]);
		        printf("\n");
        }


////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Irmão5
	if (tabuleiro[z][t]=='G')
	{
		/*cima*/
		v=z-1;
		h=t; 
		if (tabuleiro[v][h] =='0' ) 
		{
			while(tabuleiro[v][h] == '0') 
			{
				tabuleiro[v][h]='1';
				v=v-1;
			}
		} 

	    /*baixo*/
	    v=z+1;
	    h=t; 
	    if (tabuleiro[v][h] =='0' ) 
	    {
		    while(tabuleiro[v][h] == '0') 
		    {
			    tabuleiro[v][h]='1';
			    v=v+1;
		    }
	    } 

	    /*esquerda*/
	    v=z;
	    h=t-1;

	    if (tabuleiro[v][h] =='0' ) 
	    {
		    while(tabuleiro[v][h] == '0') 
		    {
			    tabuleiro[v][h]='1';
			    h=h-1;
		    }
    	} 

	    /*direita*/
	    v=z;
	    h=t+1;

	    if (tabuleiro[v][h] =='0' ) 
	    {
		    while(tabuleiro[v][h]= '0') 
		    {
			    tabuleiro[v][h]='1';
			    h=h+1;
		    }
	    } 

        for(i=0; i<6; ++i) 
        {
	        for(j=0; j<7; ++j)
		        printf("%3c",tabuleiro[i][j]);
		        printf("\n");
        }


////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Irmão6
	if (tabuleiro[z][t]=='H')
	{
		/*cima*/
		v=z-1;
		h=t; 
		if (tabuleiro[v][h] =='0' ) 
		{
			while(tabuleiro[v][h] == '0') 
			{
				tabuleiro[v][h]='1';
				v=v-1;
			}
		} 

	    /*baixo*/
	    v=z+1;
	    h=t; 
	    if (tabuleiro[v][h] =='0' ) 
	    {
		    while(tabuleiro[v][h] == '0') 
		    {
			    tabuleiro[v][h]='1';
			    v=v+1;
		    }
	    } 

	    /*esquerda*/
	    v=z;
	    h=t-1;

	    if (tabuleiro[v][h] =='0' ) 
	    {
		    while(tabuleiro[v][h] == '0') 
		    {
		    	tabuleiro[v][h]='1';
		    	h=h-1;
		    }
	    } 

	    /*direita*/
	    v=z;
	    h=t+1;

	    if (tabuleiro[v][h] =='0' ) 
    	{
		    while(tabuleiro[v][h]= '0') 
		    {
			    tabuleiro[v][h]='1';
			    h=h+1;
		    }
	    } 

        for(i=0; i<6; ++i) 
        {
	        for(j=0; j<7; ++j)
		        printf("%3c",tabuleiro[i][j]);
		        printf("\n");
        }


////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Donzela
	if (tabuleiro[z][t]=='D')
	{
		/*cima*/
		v=z-2;
		h=t; 
		if (tabuleiro[v][h] =='0' ) 
		{
			while(tabuleiro[v][h] == '0') 
			{
				tabuleiro[v][h]='1';
				v=v-2;
			}
		}	 

		/*baixo*/
		v=z+2;
		h=t; 
		if (tabuleiro[v][h] =='0' ) 
		{
			while(tabuleiro[v][h] == '0') 
			{
				tabuleiro[v][h]='1';
				v=v+2;
			}
		}	 

		/*esquerda*/
		v=z;
		h=t-2;

		if (tabuleiro[v][h] =='0' ) 
		{
			while(tabuleiro[v][h] == '0') 
			{
				tabuleiro[v][h]='1';
				h=h-2;
			}
		} 

		/*direita*/
		v=z;
		h=t+2;

		if (tabuleiro[v][h] =='0' ) 
		{
			while(tabuleiro[v][h] == '0') 
			{
				tabuleiro[v][h]='1';
				h=h+2;
			}
		} 

		for(i=0; i<6; ++i) 
		{
			for(j=0; j<7; ++j)
				printf("%3c",tabuleiro[i][j]);
				printf("\n");
		}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//Irmã
	if (tabuleiro[z][t]=='R')
	{
		/*cima*/
		v=z-1;
		h=t; 
		if (tabuleiro[v][h] =='0' ) 
		{
			while(tabuleiro[v][h] == '0') 
			{
				tabuleiro[v][h]='1';
				v=v-1;
			}
		} 

		/*baixo*/
		v=z+1;
		h=t; 
		if (tabuleiro[v][h] =='0' ) 
		{
			while(tabuleiro[v][h] == '0') 
			{
				tabuleiro[v][h]='1';
				v=v+1;
			}
		} 

		/*esquerda*/
		v=z;
		h=t-2;

		if (tabuleiro[v][h] =='0' ) 
		{
			while(tabuleiro[v][h] == '0') 
			{
				tabuleiro[v][h]='1';
				h=h-2;
			}
		} 

		/*direita*/
		v=z;
		h=t+2;

		if (tabuleiro[v][h] =='0' ) 
		{
			while(tabuleiro[v][h] == '0') 
			{
				tabuleiro[v][h]='1';
				h=h+2;
			}
		} 

		for(i=0; i<6; ++i) 
		{
			for(j=0; j<7; ++j)
				printf("%3c",tabuleiro[i][j]);
				printf("\n");
		}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//Cunhado
	if (tabuleiro[z][t]=='C')
	{
		/*cima*/
		v=z-2;
		h=t; 
		if (tabuleiro[v][h] =='0' ) 
		{
			while(tabuleiro[v][h] == '0') 
			{
				tabuleiro[v][h]='1';
				v=v-2;
			}
		} 

		/*baixo*/
		v=z+2;
		h=t; 
		if (tabuleiro[v][h] =='0' ) 
		{
			while(tabuleiro[v][h] == '0') 
			{
				tabuleiro[v][h]='x';
				v=v+2;
			}
		} 

		/*esquerda*/
		v=z;
		h=t-1;

		if (tabuleiro[v][h] =='0' ) 
		{
			while(tabuleiro[v][h] == '0') 
			{
				tabuleiro[v][h]='1';
				h=h-1;
			}
		} 

		/*direita*/
		v=z;
		h=t+1;

		if (tabuleiro[v][h] =='0' ) 
		{
			while(tabuleiro[v][h] == '0') 
			{
				tabuleiro[v][h]='1';
				h=h+1;
			}
		} 

		for(i=0; i<6; ++i) 
		{
			for(j=0; j<7; ++j)
				printf("%3c",tabuleiro[i][j]);
				printf("\n");
		}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Cunhada
	if (tabuleiro[z][t]=='N')
	{
		/*cima*/
		v=z-2;
		h=t; 
		if (tabuleiro[v][h] =='0' ) 
		{
			while(tabuleiro[v][h] == '0') 
			{
				tabuleiro[v][h]='1';
				v=v-2;
			}
		} 

		/*baixo*/
		v=z+2;
		h=t; 
		if (tabuleiro[v][h] =='0' ) 
		{
			while(tabuleiro[v][h] == '0') 
			{
				tabuleiro[v][h]='1';
				v=v+2;
			}
		} 

		/*esquerda*/
		v=z;
		h=t-1;

		if (tabuleiro[v][h] =='0' ) 
		{
			while(tabuleiro[v][h] == '0') 
			{
				tabuleiro[v][h]='1';
				h=h-1;
			}
		} 

		/*direita*/
		v=z;
		h=t+1;

		if (tabuleiro[v][h] =='0' ) 
		{
			while(tabuleiro[v][h] == '0') 
			{
				tabuleiro[v][h]='1';
				h=h+1;
			}
		} 

		for(i=0; i<6; ++i) 
		{
			for(j=0; j<7; ++j)
				printf("%3c",tabuleiro[i][j]);
				printf("\n");
		}
	}
	}
	}
	}
	}
	}
	}
	}
	}
	}
}
	
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
