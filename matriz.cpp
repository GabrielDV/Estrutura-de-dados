#include <iostream>


int main() {
	int matriz[2][3];
	int i,j, n=0;
	int input;
	int ma1=0, ma2=0,tp =0 ,tn1 =0, tn2 =0;
	printf("coloque as notas\n");
	for(i=0; i<=2; i++){
		if(i==0){
			printf("Digite as notas do aluno 1 :\n");
		}
		if(i==1){
			printf("Digite as notas do aluno 2 :\n");
		}
		if(i==2){
			printf("Digite o peso das notas :\n");
		}
		
	 	for(j=0;j<=2; j++){
	 		
	 		scanf("%d", &matriz[i][j]);
	 		
	 	}
		}
		for(j=0; j<=2;j++){
			tp += matriz[2][j];
		}
		for (j=0; j<=2;j++){
			tn1 += matriz[0][j];
		}
		for (j=0; j<=2;j++){
			tn2 += matriz[1][j];
		}
		ma1 = tn1 / tp;
		ma2 = tn2 / tp;
		printf("a media ponderada do aluno 1 e %d \n", ma1);
		printf("a media ponderada do aluno 2 e %d \n", ma2);
		
	
	
	return 0;
}
