#include <stdio.h>

void ohmsLaw() {
    float V, I, R;
    int choice;

    printf("\n--- Ohm's Law Calculator ---\n");
    printf("1. Find Voltage (V = I * R)\n");
    printf("2. Find Current (I = V / R)\n");
    printf("3. Find Resistance (R = V / I)\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter Current (I): ");
            scanf("%f", &I);
            printf("Enter Resistance (R): ");
            scanf("%f", &R);
            printf("Voltage = %.2f V\n", I * R);
            break;

        case 2:
            printf("Enter Voltage (V): ");
            scanf("%f", &V);
            printf("Enter Resistance (R): ");
            scanf("%f", &R);
            if(R != 0)
                printf("Current = %.2f A\n", V / R);
            else
                printf("Error: Division by zero\n");
            break;

        case 3:
            printf("Enter Voltage (V): ");
            scanf("%f", &V);
            printf("Enter Current (I): ");
            scanf("%f", &I);
            if(I != 0)
                printf("Resistance = %.2f Ohms\n", V / I);
            else
                printf("Error: Division by zero\n");
            break;

        default:
            printf("Invalid choice\n");
    }
}

void voltageDivider() {
    float Vin, R1, R2, Vout;

    printf("\n--- Voltage Divider ---\n");
    printf("Enter Input Voltage (Vin): ");
    scanf("%f", &Vin);
    printf("Enter R1: ");
    scanf("%f", &R1);
    printf("Enter R2: ");
    scanf("%f", &R2);

    if(R1 + R2 != 0) {
        Vout = Vin * (R2 / (R1 + R2));
        printf("Output Voltage = %.2f V\n", Vout);
    } else {
        printf("Error: Invalid resistor values\n");
    }
}

int main() {
    int choice;

    while(1) {
        printf("\n===== Electrical Calculator =====\n");
        printf("1. Power (P = V * I)\n");
        printf("2. Resistance (R = V / I)\n");
        printf("3. Current (I = V / R)\n");
        printf("4. Ohm's Law Solver\n");
        printf("5. Voltage Divider\n");
        printf("6. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        float V, I, R, P;

        switch(choice) {
            case 1:
                printf("Enter Voltage: ");
                scanf("%f", &V);
                printf("Enter Current: ");
                scanf("%f", &I);
                P = V * I;
                printf("Power = %.2f W\n", P);
                break;

            case 2:
                printf("Enter Voltage: ");
                scanf("%f", &V);
                printf("Enter Current: ");
                scanf("%f", &I);
                if(I != 0)
                    printf("Resistance = %.2f Ohms\n", V / I);
                else
                    printf("Error\n");
                break;

            case 3:
                printf("Enter Voltage: ");
                scanf("%f", &V);
                printf("Enter Resistance: ");
                scanf("%f", &R);
                if(R != 0)
                    printf("Current = %.2f A\n", V / R);
                else
                    printf("Error\n");
                break;

            case 4:
                ohmsLaw();
                break;

            case 5:
                voltageDivider();
                break;

            case 6:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }
}


