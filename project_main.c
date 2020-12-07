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

int calculator_operand1 = 0;
int calculator_operand2 = 0;
int calculator_operand3 = 0;

/* Valid operations */
enum operations{ AREA_CIRCLE=1, AREA_SQUARE, AREA_TRIANGLE, AREA_RECTANGLE, PERIMETER_SQUARE,  PERIMETER_TRIANGLE,  PERIMETER_RECTANGLE,  PERIMETER_CIRCLE, CELSIUS_FAHRENHEIT, CELSIUS_KELVIN, FAHRENHEIT_CELSIUS,FAHRENHEIT_KELVIN, KELVIN_CELSIUS, KELVIN_FAHRENHEIT, ADD, SUBTRACT, MULTIPLY, DIVIDE, MODULUS, SQUARE, CUBE, SQUAREROOT, GREATER, LESSER, EQUAL, PRIME, ODD, EVEN, REVERSE, SI, CI, PROFIT, LOSS, EXIT };

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
    printf("\n1. Area_cirlce\n2. Area_square\n3. Area_triangle\n4. Area_rectangle\n5. Perimeter_square\n6. Perimeter_triangle\n7. Perimeter_rectangle\n8. Perimeter_circle\n9. Celsius_fahrenheit\n10. Celsius_kelvin\n11. Fahrenheit_celsius\n12. Fahrenheit_kelvin\n13. Kelvin_celsius\n14. Kelvin_fahrenheit\n15. Add\n16. Subtract\n17. Multiply\n18. Divide\n19. Modulus\n20. square\n21. cube\n22. squareroot\n23. greater\n24. lesser\n25. equal\n26. prime\n27. odd\n28. even\n29. reverse\n30. si\n31. ci\n32. profit\n33. loss\n34 Exit");
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
        scanf("%f %f %f %d %d %d %d %d %d %d %d %d %d %d", &calculator_a, &calculator_r, &calculator_c1, &calculator_b, &calculator_h, &calculator_c, &calculator_l, &calculator_w, &calculator_a1, &calculator_f, &calculator_k, &calculator_operand1, &calculator_operand2, &calculator_operand3);
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
            kelvin_fahrenheit(calculator_k));
            
            __fpurge(stdin);
            getchar();
            break;
            
            case ADD:
            printf("\n\t%d + %d= %d\nEnter to continue",
            calculator_operand1,
            calculator_operand2,
            add(calculator_operand1, calculator_operand2));

            __fpurge(stdin);
            getchar();
            break;
        case SUBTRACT:
            printf("\n\t%d- %d= %d\nEnter to continue",
            calculator_operand1,
            calculator_operand2,
            subtract(calculator_operand1, calculator_operand2));

            __fpurge(stdin);
            getchar();
            break;
        case MULTIPLY:
            printf("\n\t%d* %d = %d\nEnter to continue",
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
        case MODULUS:
            printf("\n\t modulus  =%d\nEnter to continue",

            modulus(calculator_operand1, calculator_operand2));

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
            case CUBE:
            printf("\n\t cube %d =%d\nEnter to continue",
            calculator_operand1,
            cube(calculator_operand1));

            __fpurge(stdin);
            getchar();
            break;
        /*case SQUAREROOT:
            printf("\n\t squareroot %d =%d\nEnter to continue",
            calculator_operand1,
            squareroot(calculator_operand1));
            __fpurge(stdin);
            getchar();
            break;*/
        case GREATER:
            printf("\n\t Greater %d and %d = %d\nEnter to continue",
            calculator_operand1,
            calculator_operand2,
            greater(calculator_operand1, calculator_operand2));

            __fpurge(stdin);
            getchar();
            break;
        case LESSER:
            printf("\n\t Lesser %d and %d = %d\nEnter to continue",
            calculator_operand1,
            calculator_operand2,
            lesser(calculator_operand1, calculator_operand2));

            __fpurge(stdin);
            getchar();
            break;
        /*case EQUAL:
            printf("\n\t Equal %d and %d= %d\nEnter to continue",
            calculator_operand1,
            calculator_operand2,
            equal(calculator_operand1, calculator_operand2));
            __fpurge(stdin);
            getchar();
            break;*/
         case PRIME:
            printf("\n\t Prime %d=%d\nEnter to continue",
            calculator_operand1,
            prime(calculator_operand1));

            __fpurge(stdin);
            getchar();
            break;
        case ODD:
            printf("\n\t Odd %d =%d\nEnter to continue",
            calculator_operand1,
            odd(calculator_operand1));

            __fpurge(stdin);
            getchar();
            break;
        case EVEN:
            printf("\n\t Even %d =%d\nEnter to continue",
            calculator_operand1,
            even(calculator_operand1));

            __fpurge(stdin);
            getchar();
            break;
        case REVERSE:
            printf("\n\t Reverse %d =%d\nEnter to continue",
            calculator_operand1,
            reverse(calculator_operand1));

            __fpurge(stdin);
            getchar();
            break;
        /*case SI:
            printf("\n\t simple interest = %d\nEnter to continue",
            si(calculator_operand1, calculator_operand2, calculator_operand3));
            __fpurge(stdin);
            getchar();
            break;
        case CI:
            printf("\n\t compound interest = %d\nEnter to continue",
            ci(calculator_operand1, calculator_operand2, calculator_operand3));
            __fpurge(stdin);
            getchar();
            break;*/
        case PROFIT:
            printf("\n\t profit = %d\nEnter to continue",

            profit(calculator_operand1, calculator_operand2));

            __fpurge(stdin);
            getchar();
            break;
        case LOSS:
            printf("\n\t loss = %d\nEnter to continue",

            loss(calculator_operand1, calculator_operand2));

            __fpurge(stdin);
            getchar();
            break;
            
        case 34:
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
  
#include<function.h>
#include<stdio.h>

int main()
{
    double input1,result;
    int choice;
    printf("\nPlease select the required operation to be performed \n");
    printf("1.cm_m\n");
    printf("2.km_m\n");
    printf("3.miles_km\n");
    printf("4.miles_m\n");
    printf("5.km_miles\n");
    printf("\nEnter you choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("\nEnter distance to convert");
            scanf("%lf",&input1);
            result = do_cm_m(input1);
            printf("%lf",result);
            break;

        case 2:
            printf("\nEnter distance to convert");
            scanf("%lf",&input1);
            result = do_km_m(input1);
            printf("%lf",result);
            break;

        case 3:
            printf("\nEnter distance to convert");
            scanf("%lf",&input1);
            result = do_miles_km(input1);
            printf("%lf",result);
            break;

        case 4:
            printf("\nEnter distance to convert");
            scanf("%lf",&input1);
            result = do_miles_m(input1);
            printf("%lf",result);
            break;

        case 5:
            printf("\nEnter distance to convert");
            scanf("%lf",&input1);
            result = do_km_miles(input1);
            printf("%lf",result);
            break;
    }
}
