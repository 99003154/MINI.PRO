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
        scanf("%d %d", &calculator_operand1, &calculator_operand2);
    }
    else
    {
        printf("\n\t---Wrong choice---\nEnter to continue\n");
        __fpurge(stdin);
        getchar();
        return;
        
    }
    switch(calculator_operation)
    {
        case ADD:
            printf("\n\t%d + %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            add(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
        case SUBTRACT:
            printf("\n\t%d - %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            subtract(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
        case MULTIPLY:
            printf("\n\t%d * %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            multiply(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
        case DIVIDE:
            printf("\n\t%d / %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            divide(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
        case GREATER:
            printf("\n\t Greater %d and %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            greater(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
        case PRIMENUM:
            printf("\n\t Primenum %d =%d\nEnter to continue", 
            calculator_operand1, 
            primenum(calculator_operand1));
            
            __fpurge(stdin);
            getchar();
            break;
        case PRIMENUM1:
            printf("\n\t Primenum1 %d =%d\nEnter to continue", 
            calculator_operand2, 
            primenum1(calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
          case EVENODD:
            printf("\n\t evenodd %d =%d\nEnter to continue", 
            calculator_operand1, 
            evenodd(calculator_operand1));
            
            __fpurge(stdin);
            getchar();
            break;
          case EVENODD1:
            printf("\n\t evenodd1 %d =%d\nEnter to continue", 
            calculator_operand1, 
            evenodd1(calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
          case POSNEG:
            printf("\n\t posneg %d =%d\nEnter to continue", 
            calculator_operand1, 
            posneg(calculator_operand1));
            
            __fpurge(stdin);
            getchar();
            break;
        case POSNEG1:
            printf("\n\t posneg1 %d =%d\nEnter to continue", 
            calculator_operand2, 
            posneg1(calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
        case FACTORIAL:
            printf("\n\t factorial %d =%d\nEnter to continue", 
            calculator_operand1, 
            factorial(calculator_operand1));
            
            __fpurge(stdin);
            getchar();
            break;
        case FACTORIAL1:
            printf("\n\t factorial %d =%d\nEnter to continue", 
            calculator_operand2, 
            factorial1(calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
            case SQUAREAREA:
            printf("\n\t area %d =%d\nEnter to continue", 
            calculator_operand1, 
            squarearea(calculator_operand1));
            
            __fpurge(stdin);
            getchar();
            break;
            case SQUAREPERI:
            printf("\n\t peri %d =%d\nEnter to continue", 
            calculator_operand1, 
            squareperi(calculator_operand1));
            
            __fpurge(stdin);
            getchar();
            break;
            case SQUARE:
            printf("\n\t square %d =%d\nEnter to continue", 
            calculator_operand1, 
            square(calculator_operand1));
            
            __fpurge(stdin);
            getchar();
            break;
            case SQUARE1:
            printf("\n\t square %d =%d\nEnter to continue", 
            calculator_operand2, 
            square1(calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
            case CUBE:
            printf("\n\t cube %d =%d\nEnter to continue", 
            calculator_operand1, 
            cube(calculator_operand1));
            
            __fpurge(stdin);
            getchar();
            break;
            case CUBE1:
            printf("\n\t cube1 %d =%d\nEnter to continue", 
            calculator_operand2, 
            cube1(calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
            case REVERSE:
            printf("\n\t reverse %d =%d\nEnter to continue", 
            calculator_operand1, 
            reverse(calculator_operand1));
            
            __fpurge(stdin);
            getchar();
            break;
            case REVERSE1:
            printf("\n\t reverse1 %d =%d\nEnter to continue", 
            calculator_operand2, 
           reverse1(calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
            case PALINDROME:
            printf("\n\t palindrome %d =%d\nEnter to continue", 
            calculator_operand1, 
           palindrome(calculator_operand1));
            
            __fpurge(stdin);
            getchar();
            break;
            case PALINDROME1:
            printf("\n\t palindrome1 %d =%d\nEnter to continue", 
            calculator_operand2, 
            palindrome1(calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
            case GCD:
            printf("\n\t gcd =%d\nEnter to continue", 
            gcd(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
            case LCM:
            printf("\n\t lcm  =%d\nEnter to continue", 
            
            lcm(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
            case MODULUS:
            printf("\n\t modulus  =%d\nEnter to continue", 
             
            modulus(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
            case KILOMETERTOMETER:
            printf("\n\t km %d =%d\nEnter to continue", 
            calculator_operand1, 
            kilometertometer(calculator_operand1));
            
            __fpurge(stdin);
            getchar();
            break;
            case KILOTOCENTIMETER:
            printf("\n\t km %d =%d\nEnter to continue", 
            calculator_operand1, 
            kilotocentimeter(calculator_operand1));
            
            __fpurge(stdin);
            getchar();
            break;
            case KILOTOMILLIMETER:
            printf("\n\t km %d =%d\nEnter to continue", 
            calculator_operand1, 
            kilotomillimeter(calculator_operand1));
            
            __fpurge(stdin);
            getchar();
            break;
             case SMALLER:
            printf("\n\t SMALLER %d and %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            smaller(calculator_operand1, calculator_operand2));
            
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
    return ((ADD <= operation) && (EXIT >= operation)) ? VALID: INVALID;
}
