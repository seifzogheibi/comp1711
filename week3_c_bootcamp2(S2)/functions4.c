#include <stdio.h>

float fahr_to_cel (float f_temp)
{
    float c_temp;
    c_temp = (f_temp - 32)/1.8;
    return c_temp;
}

float fahr_to_kelvin (float f_temp)
{
    float kelvin;
    kelvin = fahr_to_cel (f_temp) + 273.15;
    return kelvin;
}

int main()
{
    float fahr;
    char option;

     printf ("Enter a temperature to convert in Fahrenheit:\n");
     scanf ("%f", &fahr);

      printf ("\n");
      printf ("Select A to convert to Celsius\n");
      printf ("Select B to convert to Kelvin\n");
      printf ("Select Q to quit\n");

      scanf (" %c", &option);

      switch (option)
      {
        case 'A': printf ("Converted to degrees Celsius: %f\n", fahr_to_cel(fahr));
                  break;

        case 'B': printf ("Converted to Kelvin: %f\n", fahr_to_kelvin(fahr));
                  break;

        case 'Q': break;

        default:  break;
    }

      return 0;
}
