#include <stdio.h>

int main() {
    int stealthMode; // Variable to hold the state of the feature

    // Prompt the user for input
    printf("Welcome to the Game!\n");
    printf("Enter 1 to activate Stealth Mode, 0 to deactivate: ");
    scanf("%d", &stealthMode);

    // Check the input and respond accordingly
    if (stealthMode == 1) {
        printf("Stealth Mode is now ACTIVE! You are hidden from enemies.\n");
    } else if (stealthMode == 0) {
        printf("Stealth Mode is now INACTIVE! Enemies can see you.\n");
    } else {
        printf("Invalid input! Please enter 0 or 1.\n");
    }

    return 0;
}
