#include <stdio.h>


int main(int argc, char** argv)
{
	FILE* fp;

	if (argc < 3) {
		printf("TagAdder Error: Two arguments are required.");
		return -1;
	}

	fp = fopen(argv[1], "ab");

	fprintf(fp, "%s", argv[2]);

	fclose(fp);

	printf("\"%s\" has been written to the file \"%s\"", argv[2], argv[1]);

	return 0;
}
