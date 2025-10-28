#include <stdio.h>
#include <math.h>

//convert binary to decimal
int binaryToDecimal(long long binary){
  int decimal = 0;
  for (int i = 0; binary != 0; i++) {
    int last_digit = binary % 10;
    decimal += last_digit * pow(2, i);
    binary /= 10;
  }
  return decimal;
}

// convert decimal to binary
long long decimalToBinary(int decimal) {
  long long binary = 0;
  for (int i = 1; decimal != 0; i *= 10) {
    int remainder = decimal % 2;
    binary += remainder * i;
    decimal /= 2;
  }
  return binary;
}

// Function to validate binary input
int isBinary(long long n) {
    while (n != 0) {
        int digit = n % 10;
        if (digit != 0 && digit != 1)
            return 0;
        n /= 10;
    }
    return 1;
}


int main() {
    int choice;
    int valid;

    // Choice input loop
    do {
        printf("Choose conversion type:\n");
        printf("1. Binary to Decimal\n");
        printf("2. Decimal to Binary\n");
        printf("Enter your choice (1 or 2): ");

        valid = scanf("%d", &choice);

        if (!valid) {
            printf("Invalid input! Please enter a number.\n\n");
            while (getchar() != '\n'); // clear buffer
            choice = 0; // force loop to continue
        } else if (choice != 1 && choice != 2) {
            printf("Invalid choice! Please try again.\n\n");
        }

    } while (choice != 1 && choice != 2);

    // Binary to Decimal
    if (choice == 1) {
        long long binary;
        do {
            printf("Enter a binary number (only 0s and 1s): ");
            valid = scanf("%lld", &binary);
            while (getchar() != '\n'); // clear buffer

            if (!valid || !isBinary(binary)) {
                printf("Invalid binary number! Try again.\n\n");
                valid = 0;
            }
        } while (!valid);

        printf("Decimal equivalent: %d\n", binaryToDecimal(binary));
    }
    // Decimal to Binary
    else {
        int decimal;
        do {
            printf("Enter a decimal number: ");
            valid = scanf("%d", &decimal);
            while (getchar() != '\n'); // clear buffer

            if (!valid) {
                printf("Invalid input! Please enter a valid decimal number.\n\n");
            }
        } while (!valid);

        printf("Binary equivalent: %lld\n", decimalToBinary(decimal));
    }

    return 0;
}