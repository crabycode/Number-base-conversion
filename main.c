#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void decimalToBinary()
{
    printf("Please enter decimal number: ");
    int decimal;
    scanf("%d", &decimal);
    int reverseBinary[32];
    int i = 0;
    while (decimal > 0)
    {
        reverseBinary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }
    printf("\nThis number in binary is ");
    for(int j = i -1; j >= 0; j--)
    {
        printf("%d", reverseBinary[j]);
    }
}
void binaryToDecimal() {
    printf("Please enter a binary number: ");
    char binary[32];
    scanf("%s", binary);
    int decimal = 0;
    int length = 0;
    while (binary[length] != '\0')
    {
        length++;
    }
    for (int i = 0; i < length; i++)
    {
        if (binary[length - i - 1] == '1')
        {
            decimal += pow(2, i);
        }
    }
    printf("\nThis number in decimal is: %d\n", decimal);
}

void decimalToOctal()
{

}

void octalToDecimal()
{

}

void hexdecimalToBinary()
{

}

void binaryToHexdecimal()
{

}
int main()
{
    printf("Welcome to number base conversion. Please enter what you would like to do. \n");
    printf("1) Decimal to Binary  2)Binary to Decimal\n3)Decimal to Octal    4)Octal to Decimal\n5)Hexdecimal to Binary  6)Binary to Hexdecimal\n");
    int choice;
    scanf("%d", &choice);
    while(choice <1 && choice>6)
    {
        printf("Incorrect choice, please choose again.\n");
        scanf("%d", &choice);
    }
    switch(choice)
    {
    case 1:
        decimalToBinary();
    case 2:
        binaryToDecimal();
    case 3:
        decimalToOctal();
    case 4:
        octalToDecimal();
    case 5:
        hexdecimalToBinary();
    case 6:
        binaryToHexdecimal();
    }
    return 0;
}
