/* Q3. Frequency Counter using switch-case 
 Write a program to input 10 integers (range 0–9). Store them in an array. Then, using a
 switch-case, print the frequency of each digit. */

#include<stdio.h>
int main() {
    int arr[10];
    int freq[10] = {0};

    printf("Enter 10 elements: ");
    for(int i=0;i<10;i++) {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<10;i++) {
        switch(arr[i]) {
            case 0: freq[0]++;
            break;
            case 1: freq[1]++;
            break;
            case 2: freq[2]++;
            break;
            case 3: freq[3]++;
            break;
            case 4: freq[4]++;
            break;
            case 5: freq[5]++;
            break;
            case 6: freq[6]++;
            break;
            case 7: freq[7]++;
            break;
            case 8: freq[8]++;
            break;
            case 9: freq[9]++;
            break;
            default:
            printf("invalid number %d",arr[i]);

        }
    }
    printf("Frequency of digits are: \n");
    for(int i=0;i<10;i++) {
    printf("%d number present %d times.\n",i,freq[i]);
    }

    return 0;
}