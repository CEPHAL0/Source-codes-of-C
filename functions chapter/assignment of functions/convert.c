#include <stdio.h>

// function for Feet to Inches
float convertfromFeettoInches(float feet)
{
    float inches;
    inches = feet * 12;
    return inches;
}

// function for Inches to Centimeters
float convertfromInchestoCentimeters(float inch)
{
    float centimeters;
    centimeters = inch * 2.54;
    return centimeters;
}

// function fot Centimeters to Meters
float convertfromCentimeterstoMeters(float centimeters)
{
    float meters;
    meters = centimeters / 100;
    return meters;
}

int main()
{
    float n, inch, cm, m;

    // For input in feet
    printf("Enter the value of feet: ");
    scanf("%f", &n);
    system("cls");
    printf("\nThe value in feet is: %f\n",n);
    printf("\n");

    // for feet to inch
    inch = convertfromFeettoInches(n);
    printf("The value in inches is: %f", inch);
    printf("\n");

    // for inch to centimeters
    cm = convertfromInchestoCentimeters(inch);
    printf("\nThe value in centimeters is: %f", cm);
    printf("\n");

    // for centimeters to meters
    m = convertfromCentimeterstoMeters(cm);
    printf("\nThe value in meters is: %f\n", m);
    printf("\n");
    printf("------------------------------");
    return 0;
}