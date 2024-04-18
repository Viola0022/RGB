#include <stdio.h>
#include <math.h>


int main()
{
    int x, y, z;
    char a, b, c, d, e, f;

    //enter color code RGB
    printf("Zadejte barvu v RGB formatu:\n");
 
   if (scanf(" rgb ( %d , %d , %d )", &x, &y, &z) != 3) 
    {
        printf("Nespravny vstup.\n");
        return 1;
    }
    if (x > 256 || y > 256 || z > 256) {
        printf("Nespravny vstup.\n");
        return 2;
    }

    //RGB code to hex code
    //first two - r 
    int first = ((int)(x/16));
        if (first < 10 && first > -1)
        {
            //we have a first whole number
            a = first + '0';
        }
        else if (first == 10)        //convert numbers to letters in hexadecimal
        {
            a = 'A';
        }
        else if (first == 11)
        {
            a = 'B';
        }
         else if (first == 12)
        {
            a = 'C';
        }
         else if (first == 13)
        {
            a = 'D';
        }
         else if (first == 14)
        {
            a = 'E';
        }
         else
        {
            a = 'F';
        }
    
    int second = (int)(((x/16.0) - first) * 16);
      if (second < 10)
        {
            b = second + '0';
        }
        else if (second == 10)        //convert numbers to letters in hexadecimal
        {
            b = 'A';
        }
        else if (second == 11)
        {
            b = 'B';
        }
         else if (second == 12)
        {
            b = 'C';
        }
         else if (second == 13)
        {
            b = 'D';
        }
         else if (second == 14)
        {
            b ='E';
        }
         else
        {
            b = 'F';
        }

    //second two - g

    int third = ((int)(y/16.0));
        if (third < 10)
        {
            c = third + '0';
        }
        else if (third == 10)        //convert numbers to letters in hexadecimal
        {
            c = 'A';
        }
        else if (third == 11)
        {
            c = 'B';
        }
         else if (third == 12)
        {
            c = 'C';
        }
         else if (third == 13)
        {
            c = 'D';
        }
         else if (third == 14)
        {
            c = 'E';
        }
         else
        {
            c = 'F';
        }

    int fourth = (int)(((y/16.0) - third) * 16);
      if (fourth < 10)
        {
            d = fourth + '0';
        }
        else if (fourth == 10)        //convert numbers to letters in hexadecimal
        {
            d = 'A';
        }
        else if (fourth == 11)
        {
            d = 'B';
        }
         else if (fourth == 12)
        {
            d = 'C';
        }
         else if (fourth == 13)
        {
            d = 'D';
        }
         else if (fourth == 14)
        {
            d = 'E';
        }
         else 
        {
            d = 'F';
        }

    //third two - b

    int fifth = (int)(z/16.0);
        if (fifth < 10)
        {
            e = fifth + '0';
        }
        else if (fifth == 10)        //convert numbers to letters in hexadecimal
        {
            e = 'A';
        }
        else if (fifth == 11)
        {
            e = 'B';
        }
         else if (fifth == 12)
        {
            e = 'C';
        }
         else if (fifth == 13)
        {
            e = 'D';
        }
         else if (fifth == 14)
        {
            e = 'E';
        }
         else
        {
            e = 'F';
        }

    int sixth = (int)(((z/16.0) - fifth) * 16);
      if (sixth < 10)
        {
            f = sixth + '0';
        }
        else if (sixth == 10)        //convert numbers to letters in hexadecimal
        {
            f = 'A';
        }
        else if (sixth == 11)
        {
            f = 'B';
        }
         else if (sixth == 12)
        {
            f = 'C';
        }
         else if (sixth == 13)
        {
            f = 'D';
        }
         else if (sixth == 14)
        {
            f = 'E';
        }
         else
        {
            f = 'F';
        }

    printf("#%c%c%c%c%c%c\n", a, b, c, d, e, f);
    return 0;
}