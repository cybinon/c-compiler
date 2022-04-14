#include<stdio.h>

int main()
{   
    int n;
	printf("Sar aa oruulna uu:");
	scanf("%d",&n);
	
	switch(n)
	{
		case 1:
			printf(" %d sar ni 31 honogtoi.",n);
			break;
		case 3:
			printf(" %d sar ni 31 honogtoi.",n);
			break;
		case 5:
			printf(" %d sar ni 31 honogtoi.",n);
			break;
		case 7:
			printf(" %d sar ni 31 honogtoi.",n);
			break;
		case 8:
			printf(" %d sar ni 31 honogtoi.",n);
			break;
		case 10:
			printf(" %d sar ni 31 honogtoi.",n);
			break;
		case 12:
			printf(" %d sar ni 31 honogtoi.",n);
			break;
	    case 2:
	    	printf("%d sar ni 29 honogtoi.",n);
	    	break;
	    case  4:
	    	printf("%d sar ni 30 honogtoi.",n);
	    	break;
	    case  6:
	    	printf("%d sar ni 30 honogtoi.",n);
	    	break;
	    case  9:
	    	printf("%d sar ni 30 honogtoi.",n);
	    	break;
	    case  11:
	    	printf("%d sar ni 30 honogtoi.",n);
	    	break;
	    default:
	    	printf("Ta 1-12 gesen saruudiig oruulna uu.");
	}
	return 0;
}
