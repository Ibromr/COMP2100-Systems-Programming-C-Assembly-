# include <stdio.h>
# include <math.h>
# include <string.h>

struct bits {
    unsigned     frac : 23;
    unsigned      exp : 8;
    unsigned     sign : 1;
};

char *binary(float f);
char *norm(float f);

int main()
{
    /* 5.0, 2.5, 1.25, 0.625, 0.0, -0.0, 2.e-38, 1.e-38, 2.e-45, 1.4e-45, 1.e-45, 1.e-46, 1.0/0.0*0.0 */
    float f = 1.0/-0.0+1.0/0.0;
    int p = *(int *) &f;
    struct bits b = *(struct bits *) &f;
    printf ("%g: s=%d ", f, b.sign);
    if (b.exp == 0)
        printf ("E=-126 de");
    else if (b.exp == 255)
        printf ("E=special ");
    else
        printf ("E=%d ", (int)b.exp - 127);
    printf ("norm=%s\n", norm(f));
    printf ("%08x : s=%d exp=%d frac=%06x\n", p, b.sign, b.exp, b.frac);
    printf ("%s\n", binary(f));
    return 0;
}

char *binary(float f)
{
    static char str[60];
    int i, j, p;
    /* Access float as int */
    p = *(int *) &f;
    /* Fill the buffer with formatting */
    strcpy(str, "s=x  exp=xxxx xxxx  frac=xxxx xxxx xxxx xxxx xxxx xxx");
    /* Encode bits with spaces for float */
    for (i = 0, j = 2; i < 32; i++, j++) {
        if (i == 1) j += 6;
        else if (i == 9) j += 7;
        else if ((i+3)%4 == 0) j++;
        str[j] = ((p>>(31-i)) & 1) + '0';
    }
    str[53] = '\0'; /* nul terminate */
    return str;
}

char *norm(float f)
{
    static char str[60];
    struct bits b = *(struct bits *) &f;
    int i, j, p = *(int *) &f;
    strcpy (str, "x.xxxx xxxx xxxx xxxx xxxx xxx");
    if (b.exp == 0)
        str[0] = '0';
    else
        str[0] = '1';
    for (i = 0, j = 1; i < 23; i++, j++) {
        if (i % 4 == 0) j++;
        str[j] = ((p >> (22-i)) & 1) + '0';
    }
    return str;
}