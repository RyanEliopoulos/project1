#include <stdio.h>
#include <math.h>
#include <stdlib.h>

main(int argc, char **argv)
{
	double input;


	if (argc != 2) {
		printf("ERR\n");
		exit(7);
	}	

	int ret = sscanf(argv[1], "%lf", &input);
	printf("%d\n", ret);
	
	if (ret < 1 ) {
		printf("INV\n");
		exit(8);	
	}	

	if (input < 0){
		printf("NEG\n");
		exit(9);
	}

	
//	if (ret != 1){
//		printf("INV\n");
//		exit(9);
//	}
	//	printf("sscanf converted %d\n", ret);
	printf("Square root of %lf is %lf\n", input, sqrt(input) );

	//	sscanf(buffer, "%lf", 
	//	printf("here is the next test: %lf\n", sqrt(25));
//	printf("End of main");
	exit(0);


}
