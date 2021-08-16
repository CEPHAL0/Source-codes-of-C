#include <stdio.h>
#include <math.h>
struct complex
{
    int real;
    char op;
    int img;
};

void add(struct complex c, struct complex d)
{
    struct complex sum;
    printf("Enter the first complex number: ");
    scanf("%d%c%di", &c.real, &c.op, &c.img);
    printf("Enter the second complex number: ");
    scanf("%d%c%di", &d.real, &d.op, &d.img);
    sum.real = c.real + d.real;

    //Checking signs of c and d
    if (c.op == '+' && d.op == '+')
    {
        sum.img = c.img + d.img;
        sum.op = '+';
    }
    else if (c.op == '+' && d.op == '-')
    {
        sum.img = c.img - d.img;
        sum.op = '+';
    }
    else if (c.op == '-' && d.op == '-')
    {
        sum.img = 0 - (c.img + d.img);
        sum.op = '-';
    }
    else
    {
        sum.img = d.img - c.img;
        sum.op = '-';
    }

    // Deciding operator of sum number
    if (sum.img > 0)
    {
        sum.op = '+';
    }
    else
    {
        sum.op = '-';
        sum.img = abs(sum.img);
    }
    printf("The sum of %d%c%di and %d%c%di is: %d%c%di", c.real, c.op, c.img, d.real, d.op, d.img, sum.real, sum.op, sum.img);
}

int main()
{
    struct complex c;
    struct complex d;
    struct complex sum;
    add(c, d);
    return 0;
}