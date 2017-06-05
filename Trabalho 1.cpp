#include<stdio.h>
#define Litros 22.4
//  DECLARAÇÃO DE VARIAVEIS
float CNTP, P_molecular, mol, x, temp, v, vol1, t, t1, V_Oxigenio, gas, volume, pressao, p1, v1, p, pressao2;


main(){
	//CALCULO 1.10
	// Calculo
	puts("						CALCULO 1.10");
	P_molecular = 35.5;
	printf("Informe o volume ocupado nas CNTP:");
	scanf("%f",&CNTP);
		mol = P_molecular * 2;
		x = (CNTP * Litros)/ mol;
	printf("Resultado de x e : %.1f Litros.\n", x);
	
	//Calculo 1.11
	puts("						CALCULO 1.11");
	P_molecular = 32;
	mol = P_molecular;
	printf("Informe o valor da massa de oxigenio:");
	scanf("%f",&V_Oxigenio);
		V_Oxigenio = V_Oxigenio * 1000;
		x = (mol * V_Oxigenio)/ Litros;
	printf("Resultado de x e : %.1f g.\n", x);
	
	//CALCULO 1.12
	puts("						CALCULO 1.12");
	mol = 0;
	printf("Informe o valor de gas sulfidrico:");
	scanf("%f",&gas);
	printf("Valor do volume:");
	scanf("%f",&volume);
		mol = (gas * Litros)/ volume;
		
	printf("Peso molecular e : %.0f.\n", mol);
	
	//CALCULO 1.13
	puts("						CALCULO 1.13");
	volume = 0;
	mol = 0;
	P_molecular = 14;
	printf("Informe o volume ocupado por:");
	scanf("%f",&volume);
	printf("Informe a temperatura:");
	scanf("%f",&temp);
		mol = P_molecular * 2;
		x = (volume * Litros)/ mol;
	printf("Resultado de x e : %.0f Litros\n", x);
	printf("%.0f Litros de nitrogenio a 0 graus e pressao normal.\n", x);
	v = x;
	t = 273;
	t1 = t + temp;
	vol1 = v * t1 / t;
	printf("%.4f Litros.\n",vol1);
	
	//CALCULO 1.14
	puts("						CALCULO 1.14");
	mol = 0;
	gas = 0;
	temp = 0;
	x = 0;
	t = 0;
	v = 0;
	P_molecular = 12;
	printf("Informe o valor do volume ocupado de gas carbonico:");
	scanf("%f",&gas);
	printf("Informe a temperatura:");
	scanf("%f",&temp);
	printf("Informe a pressao:");
	scanf("%f",&pressao);
	mol = P_molecular + 16 * 2;
	x = gas * Litros / mol;
	p1 = 760;
	t1 = 273;
	v1 = x;
	t = t1 + temp;
	v = (p1 * v1 * t) / (pressao * t1);
	printf("%.0f Litros, volume ocupado pelo gas carbonico (dioxido de carbono) nas CNTP.\n",x);
	printf("%.2f Litros.\n",v);
	
	//CALCULO 1.15
	puts("						CALCULO 1.15");
	temp = 0;
	volume = 0;
	pressao = 0;
	v1 = 0;
	printf("Informe a temperatura:");
	scanf("%f",&temp);
	printf("Informe o volume gasoso:");
	scanf("%f",&volume);
	printf("Informe a 1 pressao:");
	scanf("%f",&pressao);
	printf("Informe a 2 pressao:");
	scanf("%f",&pressao2);
	v1 = pressao * volume / pressao2;
	printf("%.0f Litros.\n",v1);
	
	
	
	
	
	
	
}
