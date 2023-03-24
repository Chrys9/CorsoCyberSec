#include <stdio.h>
#include <math.h>
/*
 *Programma per il calcolo e l output di aree di: quadrato,cerchio e triangolo
*/

int main()

	{
		float D;
		float Area_quadrato;
 		float Area_cerchio;
                float Area_triangolo;
		printf ("Inserisci un valore numerico da tastiera: \n");
		scanf ("%f",&D);
		Area_quadrato = D * D;
		printf ("L'area del quadrato è uguale a: %f\n", Area_quadrato);
                Area_cerchio = M_PI * ( D * D);
                printf ("L'area del cerchio con raggio è  uguale a: %f\n", Area_cerchio);
                Area_triangolo = sqrt(3)/4 * ( D * D );
                printf ("L'area del triangolo è uguale a: %f\n", Area_triangolo);
		return 0;
	}
