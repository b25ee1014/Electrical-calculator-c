#include <stdio.h>

int main() {
    int choice;
    float V, I, R, P;

    while(1) {
        printf("\n--- Electrical Calculator ---\n");
        printf("1. Calculate Power (P = V * I)\n");
        printf("2. Calculate Resistance (R = V / I)\n");
        printf("3. Calculate Current (I = V / R)\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter Voltage (V): ");
                scanf("%f", &V);
                printf("Enter Current (I): ");
                scanf("%f", &I);
                P = V * I;
                printf("Power = %.2f Watts\n", P);
                break;

            case 2:
                printf("Enter Voltage (V): ");
                scanf("%f", &V);
                printf("Enter Current (I): ");
                scanf("%f", &I);
                if(I != 0)
                    printf("Resistance = %.2f Ohms\n", V/I);
                else
                    printf("Error: Division by zero\n");
                break;

            case 3:
                printf("Enter Voltage (V): ");
                scanf("%f", &V);
                printf("Enter Resistance (R): ");
                scanf("%f", &R);
                if(R != 0)
                    printf("Current = %.2f Amps\n", V/R);
                else
                    printf("Error: Division by zero\n");
                break;

            case 4:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }
}
