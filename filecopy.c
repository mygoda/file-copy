#include <stdio.h>
#include <stdlib.h>

//Simple program to copy a file
int main()
{
	unsigned char current_byte;
	char input_name[30], output_name[30];
	FILE *input, *output;
	
	printf("Enter the name of the file you want to copy: ");
	scanf("%s", &input_name);
	
	printf("Enter the name of output file: ");
	scanf("%s", &output_name);
	
	input = fopen(input_name, "rb");
	output = fopen(output_name, "wb");
	
	while(!feof(input))
	{
		fread(&current_byte, sizeof(unsigned char), 1, input);
		fwrite(&current_byte, sizeof(unsigned char), 1, output);
	}
	
	fclose(input);
	fclose(output);
	
	return 0;
}