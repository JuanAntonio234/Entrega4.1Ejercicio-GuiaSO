#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 25

int main(int argc, char *argv[]) {
	
	char peticion[100];
	char respuesta[100];
	
	strcpy (peticion, "Manuel/55/JUAN/19/Josefa/17/mario/28");
	//resultado: Manuel*55-JUAN*19-Josefa*17-Mario*28
	
	char nombre[20];
	int edad;
	char *p = strtok (peticion, "/");
	
	while (p!=NULL)
	{
		strcpy (nombre, p);
		p = strtok (NULL, "/");
		edad = atoi (p);
		if (edad > 18)
			sprintf (respuesta, "%s%s*%d-", respuesta, nombre, edad);
		
		p = strtok (NULL, "/");
	}
	respuesta [strlen (respuesta) -1] = '\0'; //Per eliminar l'últim guió
	printf ("Resultado: %s\n", respuesta);
	
	int p_i, p_f;
	char Palabra[MAX], caracter;
	int i;
	
	printf("Introduzca el nombre: ");
	scanf("%c", &caracter);
	i=0;
	while(i<MAX && caracter != '.')
	{
		Palabra[i] = caracter;
		i = i + 1;
		scanf("%c", &caracter);
	}
	p_i = 0;
	p_f = i-1;
	
	while(p_i<p_f && Palabra[p_i]==Palabra[p_f])
	{
		p_i++;
		p_f--;
	}
	if(p_i>=p_f)
		printf("El nombre es palindromo\n");
	else
		printf ("El nombre no es palindromo\n");
	
	printf ("\n");
	return 0;
	
	printf("Ingresa tu nombre: ");
    scanf("%s", nombre);

    mayusculas = 1;
    for(i = 0; nombre[i] != '\0'; i++) {
        if(nombre[i] < 'A' || nombre[i] > 'Z') {
            mayusculas = 0;
            break;
        }
    }

    if(mayusculas == 1) {
        printf("Tu nombre esta completamente en mayusculas.\n");
    } else {
        printf("Tu nombre no esta completamente en mayusculas.\n");
    }

    return 0;
}