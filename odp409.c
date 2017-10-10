#include <stdio.h>
#include <math.h>
#include <stdlib.h>

main(int argc, char **argv)
{
	double input;
	char buffer[100];

	printf("%d\n", argc);

	if (argc != 2) {
		printf("ERR\n");
		exit(7);
	}	

	if (argv[1] < 0 ) {
		printf("NEG\n");
		exit(8);	
	}	

//	int ret = sscanf(argv[1], "%lf", &input);
	
//	if (ret != 1){
//		printf("INV\n");
//		exit(9);
//	}
	//	printf("sscanf converted %d\n", ret);
	printf("Square root of %lf is %lf\n", input, sqrt(input) );

	//	sscanf(buffer, "%lf", 
	//	printf("here is the next test: %lf\n", sqrt(25));
	printf("End of main");
	exit(0);


}
