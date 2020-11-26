     #include<stdio.h>
     #include<conio.h>
     #include<math.h>
     void main()
     {
	  double a, b ,c , pr1;
	  printf("\nInput the first number");
	  scanf("%lf", &a);
	  printf("\nInput the second number");
	  scanf("%lf", &b);
	  printf("\nInput the third number");
	  scanf("%lf", &c);

	  pr1 = (b*b) - (4*(a)*(c));

	  if(pr1 > 0 && a!= 0) {
	     double x, y;
	     pr1 = sqrt(pr1);
	     x = (-b + pr1)/(2*a);
	     y = (-b -pr1)/(2*a);
	     printf("Root1 = %f\n",x);
	     printf("Root2 = %f\n",y);
	     }
	     else
	     {
	       printf("\nImpossible to find the roots\n");
	     }
	     getch();
	  }