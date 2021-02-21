#include <stdio.h>
/* imprime la tabla Fahrenheit-Celicius para fahr=0,20, ..., 300*/
main()
{
	int fahr, celsius;
	int lower, upper, step;
	
	lower = 0;      /* limite inferior de la tabla de temperatura */
	upper = 300;/* límite superior */
	step = 20;      /* tamaño del incremento */
	
	fahr = lower;
	while (fahr <= upper) {
		celsius = 5 * (fahr-32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}
}
