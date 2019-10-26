#include"validar.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

void datosIngresados(Usuario_t *u);

int main(){
	srand(time(NULL));
	Usuario_t u;
	printf("Nombre: ");
	scanf("%s",u.nombre);
	printf("Apellido: ");
	scanf("%s",u.apellido);
	u.username[0]=u.nombre[0];
	strcat(u.username,u.apellido);
	printf("Password: ");
	scanf("%s",u.password);
	u.userid=rand();

	switch(validar(&u)){
		case 0:
		printf("\nIngreso de datos exitoso\n");
		datosIngresados(&u);
		break;
		case 3:
		printf("Password tiene menos de 10 caracteres: %s\n",u.password);
		break;
		case 5:
		printf("Password no contiene letras: %s\n",u.password);
		break;
		case 4:
		printf("Password no contiene nùmeros: %s\n",u.password);
		break;
		
	}
}
void datosIngresados(Usuario_t *u){
	printf("Nombre: %s\n",u->nombre);
	printf("Apellido: %s\n",u->apellido);
	printf("Username generated: %s\n",u->username);
	printf("Password: %s\n",u->password);
	printf("UserID: %d\n",u->userid); 
}
