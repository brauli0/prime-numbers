#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int isPrime(int x, int *primes) {
	int exit = 0, counter = 0, aux = 0;

	if (x == 2)
		return 1;
	if ((x % 2) == 0)
		return 0;

	while (!exit) {
		aux = primes[counter];
		if ((x % aux) == 0)
			return 0;

		if (aux > (x / 2)) {
			break;
		}
		counter++;
	}

	return 1;
}

int main(int argc, char *argv[]) {
	int i, interval, max;
	float n = 0, p;
	int *primes = malloc(1000000 * sizeof(int));
	int array_counter = 0;
	FILE *output_file;
	output_file = fopen ("data.json","w");

	if (argc == 3) {
		max = atoi(argv[1]);
		interval = atoi(argv[2]);
		if (max < 2)
			max = 2;

		fprintf(output_file ,"[\n");
		for (i = 2; i <= max; ++i) {
			if (isPrime(i, primes)) {
				primes[array_counter] = i;
				array_counter++;
				n++;
			}
			if ((i % interval) == 0) {
				p = (n / (i-1)) * 100;
				fprintf(output_file, "[%.d, %.4f],\n", i, p);
			}
		}
		/* Remove last comma */
		fseeko(output_file, -2, SEEK_END);
		off_t position = ftello(output_file);
		ftruncate(fileno(output_file), position);

		fprintf(output_file, "\n]");
		fclose(output_file);
	}
	else {
		printf("\n\tWrong arguments, usage: ./prime_statistics <max> <interval>)\n\n");
		return 1;
	}

	return 0;
}
