#include <stdio.h> 				// Podkluchenie biblioteki dlya standartnih funktsiy
#include <math.h> 				// Podkluchenie biblioteki dlya matematicheskih funktsiy
main () { 					// Glavniy metod
int x, y; 					// Tselie peremennie
printf("VVedite tseloe znachenie x: \n"); 	// Vvod x s klaviaturi
scanf("%d", &x); 				// Schitivanie znacheniya s klaviaturi
y = pow(x,3) + pow(x,2) - 10; 			// Vichislenie znacheniya y
printf("y = %d", y); 				// Vivod znacheniya y
}