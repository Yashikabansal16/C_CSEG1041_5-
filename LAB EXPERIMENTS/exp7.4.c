/*Create a union containing 6 strings: name, home_address, hostel_address,
city, state and zip. Write a C program to display your present address. */

#include<stdio.h>

union address {
    char name[50];
    char home_address[50];
    char hostel_address[50];
    char city[50];
    char state[50];
    char zip[20];
};

int main() {
    union address a;
    printf("Enter you present address: ");
    fgets(a.hostel_address, sizeof(a.hostel_address),stdin);
      /*"Read a full line (with spaces) from the keyboard,
      store it into a.hostel_address,
      stop reading if size limit is reached,
      and keep everything safe."*/

    printf("Your present address is: ");
    printf("%s",a.hostel_address);

    return 0;
}