#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar(); // prototype



char randchar() {
    
    srand(time(NULL)); //
    (rand()%(90-65))+65);        // prints random ASCII capital letter
    
    
}