#include <stdio.h>
#include <string.h>
#include <math.h>

void decimalToBinary(int decimal) {
    if (decimal == 0) {
        printf("Binary: 0\n");
        return;
    }

    int binary[32];
    int i = 0;

    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }

    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int binaryToDecimal(char binary[]) {
    int decimal = 0;
    int length = strlen(binary);

    for (int i = 0; i < length; i++) {
        if (binary[i] == '1') {
            decimal += pow(2, length - 1 - i);
        }
    }

    return decimal;
}

void decimalToOctal(int decimal) {
    if (decimal == 0) {
        printf("Octal: 0\n");
        return;
    }

    int octal[32];
    int i = 0;

    while (decimal > 0) {
        octal[i] = decimal % 8;
        decimal = decimal / 8;
        i++;
    }

    printf("Octal: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octal[j]);
    }
    printf("\n");
}

int octalToDecimal(char octal[]) {
    int decimal = 0;
    int length = strlen(octal);

    for (int i = 0; i < length; i++) {
        decimal += (octal[i] - '0') * pow(8, length - 1 - i);
    }

    return decimal;
}

void decimalToHexadecimal(int decimal) {
    if (decimal == 0) {
        printf("Hexadecimal: 0\n");
        return;
    }

    char hexadecimal[32];
    int i = 0;

    while (decimal > 0) {
        int remainder = decimal % 16;
        if (remainder < 10) {
            hexadecimal[i] = remainder + '0';
        } else {
            hexadecimal[i] = remainder - 10 + 'A';
        }
        decimal = decimal / 16;
        i++;
    }

    printf("Hexadecimal: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hexadecimal[j]);
    }
    printf("\n");
}

int hexadecimalToDecimal(char hexadecimal[]) {
    int decimal = 0;
    int length = strlen(hexadecimal);

    for (int i = 0; i < length; i++) {
        if (hexadecimal[i] >= '0' && hexadecimal[i] <= '9') {
            decimal += (hexadecimal[i] - '0') * pow(16, length - 1 - i);
        } else if (hexadecimal[i] >= 'A' && hexadecimal[i] <= 'F') {
            decimal += (hexadecimal[i] - 'A' + 10) * pow(16, length - 1 - i);
        } else if (hexadecimal[i] >= 'a' && hexadecimal[i] <= 'f') {
            decimal += (hexadecimal[i] - 'a' + 10) * pow(16, length - 1 - i);
        }
    }

    return decimal;
}

// Main function
int main() {
    int inputBase, outputBase;
    char inputValue[32];

    printf("Choose the input base:\n");
    printf("1. Decimal\n2. Binary\n3. Octal\n4. Hexadecimal\n");
    scanf("%d", &inputBase);

    printf("Enter the value: ");
    scanf("%s", inputValue);

    printf("Choose the output base:\n");
    printf("1. Decimal\n2. Binary\n3. Octal\n4. Hexadecimal\n");
    scanf("%d", &outputBase);

    int decimalValue;

    // Convert input to Decimal
    switch (inputBase) {
        case 1:
            decimalValue = atoi(inputValue);
            break;
        case 2:
            decimalValue = binaryToDecimal(inputValue);
            break;
        case 3:
            decimalValue = octalToDecimal(inputValue);
            break;
        case 4:
            decimalValue = hexadecimalToDecimal(inputValue);
            break;
        default:
            printf("Invalid input base!\n");
            return 1;
    }

    // Convert Decimal to output base
    switch (outputBase) {
        case 1:
            printf("Decimal: %d\n", decimalValue);
            break;
        case 2:
            decimalToBinary(decimalValue);
            break;
        case 3:
            decimalToOctal(decimalValue);
            break;
        case 4:
            decimalToHexadecimal(decimalValue);
            break;
        default:
            printf("Invalid output base!\n");
            return 1;
    }

    return 0;
}
