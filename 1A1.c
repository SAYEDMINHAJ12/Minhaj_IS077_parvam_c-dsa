#include<stdio.h> 
void main() {
    char ch;
    printf("Enter a Character:"); //User gives the character input
    scanf("%c", &ch); // Reads the input and stores it in variable ch

    //Checks if the charater is in uppercase or lowercase
    if(ch >= 'A' && ch <= 'Z') {
        ch = ch + 32; // Converts uppercase to lowercase by adding 32 to ASCII
        printf("%c", ch); // Prints the lowercase character
    }
    // Check if the entered character is a lowercase letter
    else if(ch >= 'a' && ch <= 'z') {
        ch = ch - 32; // Converts lowercase to uppercase by subtracting 32 from ASCII 
        printf("%c", ch); // Prints the uppercase character
    }
    else {
        printf("Invalid input"); //Gives error message
    }
}