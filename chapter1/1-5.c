#include <stdio.h>

int main(){
	float fahr, celsius;
	int lower, upper, step;
	
	printf("%3s  %3s \n", "Farenheight", "Celsius");
	
	for( fahr = 300; fahr >= 0; fahr = fahr - 20){
		celsius = (5.0/9.0) * (fahr - 32.0);
		printf("%11.0f %6.1f\n", fahr, celsius);
	}
}
