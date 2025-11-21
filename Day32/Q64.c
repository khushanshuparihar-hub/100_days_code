//Q64: Find the digit that occurs the most times in an integer number.
#include <stdio.h>
int main() {
    long long n;
    int freq[10] = {0};  
    int digit, maxDigit = 0, maxFreq = 0;

    printf("Enter an integer: ");
    scanf("%lld", &n);
    if (n < 0) {
        n = -n;
    }
    while (n > 0) {
        digit = n % 10;
        freq[digit]++;
        n /= 10;
    }
    for (int i = 0; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxDigit = i;
        }
    }
    printf("Digit occurring the most times: %d\n", maxDigit);
    printf("Frequency: %d\n", maxFreq);
    return 0;
}