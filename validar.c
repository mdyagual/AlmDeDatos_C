#include"validar.h"
#include<ctype.h>
#include<string.h>
int contarNums(char *n);
int contarLetras(char *l);
int validar(Usuario_t *dataU){
	dataU->nombre[0]=toupper(dataU->nombre[0]);
	dataU->apellido[0]=toupper(dataU->apellido[0]);
	dataU->username[0]=tolower(dataU->username[0]);
	dataU->username[1]=tolower(dataU->username[1]);
	//dataU->username=tolower(dataU->username);
	if(strlen(dataU->password)<10)
		return 3;
	if(contarNums(dataU->password)==0)
		return 4;
	if(contarLetras(dataU->password)==0)
		return 5;
	return 0;

}

int contarNums(char *n){
	int tot=0;
	while(*n!='\0'){
		if(isdigit(*n))
			tot++;
		n++;
	}
	return tot;
}

int contarLetras(char *l){
	int tot=0;
	while(*l!='\0'){
		if(isalpha(*l))
			tot++;
		l++;
	}
	return tot;
}
