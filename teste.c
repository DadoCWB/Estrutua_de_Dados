/*Receber dados a partir de um arquivo
  Se voc� encontrar algu�m com dificuldades repasse esse c�digo para ele(a)
*/

#include <stdio.h>
#include <stdlib.h>


int main(){
	
	int i;			// contador 
	char txt[50];	//string para armazera os caracteres de cada linha lida dento do la�o pelo fscanf  
					//estou supondo que uma linha n�o ir� conter mais que 50 caracteres
	
	FILE *arq; //Ponteiro para abrir o arquivo txt
	
	arq=fopen("NomeRG10.txt", "r"); //nome do arquivo a ser aberto
									// o "r" significa que o arquivo ser� aberto em modo leitura 
	
	for(i=0;i<3;i++){
		fscanf(arq,"%s",txt); // l� uma linha do arquivo e armazena-a na string txt
		
		printf("\n%s",txt); //imprime na tela cada uma das linhas que foi lida pelo fscanf
	}
		
};

/*
Explicando um pouco as coisas:
	
	O ponteiro na linha 13 � do tipo FILE. Ele � usado para varrer cada caractere contido no arquivo e
	armazen�-los na string txt.
 
	fscanf � bem parecido com scanf . A diferen�a � que scanf l� o teclado e fscanf l� um arquivo.
	
	para ler TODAS as linhas do arquivo ao inv�s de 3 recomenda-se:
	
	while(!feof(arq)){ // le o arquivo at� a ultima linha
  		fscanf(arq,"%s",txt); // l� uma linha do arquivo e armazena-a na string txt
		
		printf("\n%s",txt); //imprime na tela cada uma das linhas que foi lida pelo fscanf 
	}
	
*/
