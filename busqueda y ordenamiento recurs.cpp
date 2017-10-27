#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int a,temp,valor,b,ban=0;
	srand(time(NULL));
	printf("Tamaño del vector: ");
	scanf("%i",&a);
	int vec[a];
	printf("\n");
	//Numeros aleatorios;
	printf("Estos son tus numeros: \n");
	for(int i=0;i<a;i++){
		valor=1+rand()%(100-1);
		vec[i]=valor;
		printf(" %i",vec[i]);
	}
	//Ordenamiento;
	printf("\nEstos son tus numeros ordendos: \n");
	for(int i=0;i<a;i++){
		for(int j=i+1;j<=a;j++){
			if(vec[i]>vec[j]){
				temp=vec[i];
				vec[i]=vec[j];
				vec[j]=temp;
			}
		}
	}
	for(int i=0;i<a;i++){
		printf("%i ",vec[i]);
	}
	//Busqueda
	printf("\nQue numero quieres buscar?:");
	scanf("%i",&b);
	printf("\n");
	int mayor=a;
	int menor=0;
	int centro,r=0;
	while(menor<=mayor){
		centro=(mayor+menor)/2;
		if(vec[centro]==b){
			printf("El numero fue encontrado en la pocicion %i ",centro+1);
			ban=1;
			break;
		}
		if(vec[centro]>b){
			mayor=centro-1;
		}else{
			menor=centro+1;
		}
	}
	if(ban==0){
		printf("El numero no existe");
	}
}
