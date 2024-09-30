#include <stdio.h>
#include <stdlib.h>
#include <float.h>
#include <math.h>
#include "divi.h"
#include "main_divi.h"

float 
division(float numerateur, float denominateur)
{
    if (fabs(denominateur) <= FLT_MIN) 
    {
        fprintf(stderr, "%s: division par zéro\n", argv0);
        exit(EXIT_FAILURE);
    }
    return numerateur/denominateur;
}
