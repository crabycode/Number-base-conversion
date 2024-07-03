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
    for(int j = i-1; j>=0; j--)
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
    for (int i=0; i<length; i++)
    {
        if (binary[length-i-1] == '1')
        {
            decimal += pow(2, i);
        }
    }
    printf("\nThis number in decimal is: %d\n", decimal);
}

void decimalToOctal()
{
    printf("Please enter decimal number: ");
    int decimal;
    scanf("%d", &decimal);
    int reverseOctal[32];
    int i = 0;
    while(decimal>0)
    {
        reverseOctal[i] = decimal%8;
        decimal = decimal/8;
        i++;
    }
    printf("This number in octal is ");
    for(int j = i-1; j>=0; j--)
    {
        printf("%d", reverseOctal[j]);
    }
}

void octalToDecimal()
{
    printf("Please enter an octal number: ");
    char octal[32]; //to read it on one line!
    scanf("%s", octal);
    int decimal = 0;
    int length = 0;
    while(octal[length] != '\0')
    {
        length++;
    }
    for(int i = 0; i<length; i++)
    {
        decimal = decimal*8 + (octal[i] - '0');
    }
    printf("\nThis number in decimal is %d", decimal);
}

void hexdecimalToBinary()
{
    printf("Please enter a hexadecimal number: ");
    char hexadecimal[32];
    scanf("%s", hexadecimal);
    printf("\nThis number in binary is ");
    for (int i = 0; hexadecimal[i]!='\0'; i++)
    {
        switch (hexadecimal[i])
        {
            case '0':
                printf("0000");
                break;
            case '1':
                printf("0001");
                break;
            case '2':
                printf("0010");
                break;
            case '3':
                printf("0011");
                break;
            case '4':
                printf("0100");
                break;
            case '5':
                printf("0101");
                break;
            case '6':
                printf("0110");
                break;
            case '7':
                printf("0111");
                break;
            case '8':
                printf("1000");
                break;
            case '9':
                printf("1009");
                break;
            case 'A':
                case 'a':
                    printf("1010");
                    break;
            case 'B':
                case 'b':
                    printf("1011");
                    break;
            case 'C':
                case 'c':
                    printf("1100");
                    break;
            case 'D':
                case 'd':
                    printf("1101");
                    break;
            case 'E':
                case 'e':
                    printf("1110");
                    break;
            case 'F':
                case 'f':
                    printf("1111");
                    break;
            default:
                printf("Invalid hexadecimal digit %c", hexadecimal[i]);
        }
    }
}

void binaryToHexdecimal()
{
    printf("Please enter a binary number: ");
    char binary[32];
    scanf("%s", binary);
    int length = 0;
    while (binary[length] != '\0')
    {
        length++;
    }
    int temp = length%4;
    if (temp != 0)
    {
        temp = 4 - temp;
    }
    printf("\nThis number in hexadecimal is ");
    for (int i = 0; i < temp; i++)
    {
        printf("0");
    }
    for (int i = 0; i < length; i += 4)
    {
        int value = 0;
        for (int j = 0; j < 4; j++)
        {
            if (i + j < length && binary[i + j] == '1')
            {
                value += pow(2, 3 - j);
            }
        }
        if (value < 10)
        {
            printf("%d", value);
        }
        else
        {
            printf("%c", 'A' + (value - 10));
        }
    }
}
int main()
{
    printf("Welcome to number base conversion. Please enter what you would like to do. \n");
    printf("1) Decimal to Binary  2)Binary to Decimal\n3)Decimal to Octal    4)Octal to Decimal\n5)Hexdecimal to Binary  6)Binary to Hexdecimal\n");
    int choice;
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
            decimalToBinary();
            break;
        case 2:
            binaryToDecimal();
            break;
        case 3:
            decimalToOctal();
            break;
        case 4:
            octalToDecimal();
            break;
        case 5:
            hexdecimalToBinary();
            break;
        case 6:
            binaryToHexdecimal();
            break;
        default:
            printf("Incorrect choice\n");
            break;
    }
    return 0;
}
