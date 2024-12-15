#include <stdio.h>
#include <math.h>

int main() {
    int original_num, temp_num;
	printf("Cac so Armstrong co 3 chu so la: \n");
	for (int i = 100; i <= 999; ++i) {
        original_num = i;
        int n = 3, result=0;
		while (original_num != 0) {
            temp_num = original_num % 10;
            result += pow(temp_num, n);
            original_num /= 10;
        }
		if (result == i) {
            printf("%d\n", i);
        }
    }
	printf("\n");
    return 0;
}
