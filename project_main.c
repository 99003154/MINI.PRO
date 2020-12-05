#include <calculator.h>

/* Status of the operation requested */
#define VALID   (1)
#define INVALID (0)

/* Calculator operation requested by user*/
unsigned int calculator = 0;

/* Operands on which calculation is performed */
float calculator_a = 0;
int calculator_b = 0;
int calculator_h = 0;
int calculator_c = 0;
int calculator_l = 0;
int calculator_w = 0;
int calculator_a1 = 0;
float calculator_r = 0;
float calculator_c1 = 0;
int calculator_f = 0;
int calculator_k = 0;

/* Valid operations */
enum operations{ AREA_CIRCLE=1, AREA_SQUARE, AREA_TRIANGLE, AREA_RECTANGLE, PERIMETER_SQUARE,  PERIMETER_TRIANGLE,  PERIMETER_RECTANGLE,  PERIMETER_CIRCLE, CELSIUS_FAHRENHEIT, CELSIUS_KELVIN, FAHRENHEIT_CELSIUS,FAHRENHEIT_KELVIN, KELVIN_CELSIUS, KELVIN_FAHRENHEIT, EXIT };

/* Display the menu of operations supported */
void calculator_menu(void);
/* Verifies the requested operations validity */
int valid_operation(int operation);


/* Start of the application */
int main(int argc, char *argv[])
{
    printf("\n****Calculator****\n");
    while(1)
    {
        calculator_menu();
    }
}

void calculator_menu(void)
{
    printf("\nAvailable Operations\n");
    printf("\n1. Area_cirlce\n2. Area_square\n3. Area_triangle\n4. Area_rectangle\n5. Perimeter_square\n6. Perimeter_triangle\n7. Perimeter_rectangle\n8. Perimeter_circle\n9. Celsius_fahrenheit\n10. Celsius_kelvin\n11. Fahrenheit_celsius\n12. Fahrenheit_kelvin\n13. Kelvin_celsius\n14. Kelvin_fahrenheit\n15.  Exit");
    printf("\n\tEnter your choice\n");
   
     __fpurge(stdin);
    scanf("%d", &calculator);

    if(EXIT == calculator)
    {
        printf("\nThank you. Exiting the Application\n");
        exit(0);
    }

    if(INVALID != valid_operation(calculator))
    {
        printf("\n\tEnter your Numbers with space between them\n");
        __fpurge(stdin);
        scanf("%f %f %f %d %d", &calculator_a, &calculator_r, &calculator_c1, &calculator_b, &calculator_h, &calculator_c, &calculator_l, &calculator_w, &calculator_a1, &calculator_f, &calculator_k);
    }
    else
    {
        printf("\n\t---Wrong choice---\nEnter to continue\n");
        __fpurge(stdin);
        getchar();
        return;
        
    }
    switch(calculator)
    {
        case AREA_CIRCLE:
            printf("\n\t%d + %d = %d\nEnter to continue", 
            calculator_a,
            area_circle(calculator_a));
            
            __fpurge(stdin);
            getchar();
            break;
        case AREA_SQUARE:
            printf("\n\t%d - %d = %d\nEnter to continue", 
            calculator_a1,
            area_square(calculator_a1));
            
            __fpurge(stdin);
            getchar();
            break;
        case AREA_TRIANGLE:
            printf("\n\t%d * %d = %d\nEnter to continue", 
            calculator_h, 
            calculator_b,
            area_triangle(calculator_h, calculator_b));
            
            __fpurge(stdin);
            getchar();
            break;
        case AREA_RECTANGLE:
            printf("\n\t%d / %d = %d\nEnter to continue", 
            calculator_a1, 
            calculator_b,
            area_rectangle(calculator_a1, calculator_b));
            
            __fpurge(stdin);
            getchar();
            break;
        case PERIMETER_SQUARE:
            printf("\n\t Greater %d and %d = %d\nEnter to continue", 
            calculator_a1,
            perimeter_square(calculator_a1));
            
            __fpurge(stdin);
            getchar();
            break;
        case PERIMETER_TRIANGLE:
            printf("\n\t Primenum %d =%d\nEnter to continue", 
            calculator_a1,
            calculator_b, 
            calculator_c, 
            perimeter_triangle(calculator_a1, calculator_b, calculator_c));
            
            __fpurge(stdin);
            getchar();
            break;
        case PERIMETER_RECTANGLE:
            printf("\n\t Primenum1 %d =%d\nEnter to continue", 
            calculator_l,
            calculator_w,
            perimeter_rectangle(calculator_l, calculator_w));
            
            __fpurge(stdin);
            getchar();
            break;
          case PERIMETER_CIRCLE:
            printf("\n\t evenodd %d =%d\nEnter to continue", 
            calculator_r, 
            perimeter_circle(calculator_r));
            
            __fpurge(stdin);
            getchar();
            break;
            
          case CELSIUS_FAHRENHEIT:
            printf("\n\t evenodd1 %d =%d\nEnter to continue", 
            calculator_c1, 
            celsius_fahrenheit(calculator_c1));
            
            __fpurge(stdin);
            getchar();
            break;
            
          case CELSIUS_KELVIN:
            printf("\n\t posneg %d =%d\nEnter to continue", 
            calculator_c1, 
            celsius_kelvin(calculator_c1));
            
            __fpurge(stdin);
            getchar();
            break;
        case FAHRENHEIT_CELSIUS:
            printf("\n\t posneg1 %d =%d\nEnter to continue", 
            calculator_f, 
            fahrenheit_celsius(calculator_f));
            
            __fpurge(stdin);
            getchar();
            break;
        case FAHRENHEIT_KELVIN:
            printf("\n\t factorial %d =%d\nEnter to continue", 
            calculator_f, 
            fahrenheit_kelvin(calculator_f));
            
            __fpurge(stdin);
            getchar();
            break;
        case KELVIN_CELSIUS:
            printf("\n\t factorial %d =%d\nEnter to continue", 
            calculator_k, 
            kelvin_celsius(calculator_k));
            
            __fpurge(stdin);
            getchar();
            break;
            
            case KELVIN_FAHRENHEIT:
            printf("\n\t area %d =%d\nEnter to continue", 
            calculator_k, 
            squarearea(calculator_k));
            
            __fpurge(stdin);
            getchar();
            break;
            
        case 31:
            exit(0);
            break;
        default:
            printf("\n\t---It should never come here---\n");
    }
}

int valid_operation(int operation)
{
    /* Check if the operation is a valid operation */
    return ((AREA_CIRCLE <= operation) && (EXIT >= operation)) ? VALID: INVALID;
}
