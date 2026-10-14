#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void BinaryPrinter(short TimeFrame) {
	int BiNumber;
	char CharsOnLine=1;


	TimeFrame *= 10; //TimeFrame -> Seconds
	
	for (char i = 0; i < TimeFrame; i++)
	{
		if (CharsOnLine > 32) { // 4 Octs
			if (CharsOnLine > 64)
			{
				CharsOnLine = 1;
				printf("\n");
			}
			else if (CharsOnLine % 33 == 0)
			{
				printf("\x20\x20");
			}
		}
		BiNumber = rand() % (3 - 1) + 0; //((maximum + 2) - maximum) + minimum?
		printf("%d", BiNumber);
		if (CharsOnLine % 4 == 0) {
			printf("\x20");
		}
		CharsOnLine++;
		_sleep(0);
	}

}

int main(void)
{
	char Input[6];
	short TimeFrame;

	printf("Welcome to BinaryPrinter\n(C) TrashBin 2026\n\n");
	printf("Commands:\n\texit - Closes program\n\tstart - Prints random strings of binary\n\tfor specified amount of time\n\n> ");
	
	scanf("%s", Input);

	if (!strcmp(Input,"exit")) {
		printf("\n\nexiting program...");
		return 0;
	}
	else if (!strcmp(Input,"start")) {
		printf("\nPlease Input a time you'd like to run for (In seconds):\n> ");
		scanf("%d", &TimeFrame);
		printf("\n\n");
		BinaryPrinter(TimeFrame);
		printf("\n\nPrinting has finished.");
		printf("\n\n\n");
		main();
	}
	else {
		printf("\"%s\" is not a valid input.\n\n", Input);
		main();
	}

	return 0;
}
