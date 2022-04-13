 #include<stdio.h>

void main()
{  
  int n1,n2,p,q,r,s,t,u,n3,v,z,x,y,a,b;

    printf("enter any 4 digit number ");
    scanf("%d",&n1);
    printf("enter any 2 digit number ");
    scanf("%d",&n2);
    printf("Output -> \n");

// p is the remainder of division of first two digits of n1 and n2
   p=(n1/100)%n2;
// q is the third digit of n1
   q=(n1%100)/10;
// r is the number which is formed by adding p*10 and q
   r=(p*10)+q;
// s is the remainder of division of r and n2
     s=r%n2;
// t is the last digit of a four digit number 
   t=n1%10;
// u is the number which is formed by adding s*10 and t
   u=s*10+t;
// n3 is the remainder of the division of n1 and n2
   n3=n1%n2;
// z is the quotient of the division of n1 and n2
   z=n1/n2;
// x is the quotient of division of r and n2
   x=r/n2;
// y is the number which is being subtracted by r
   y=n2*x;
// a is the quotient of division of u and n2
   a=u/n2;
// b is the number which is being subtracted by u
   b=n2*a;
   printf("   ----- \n");
   printf("%d)%d(%d\n",n2,n1,z);
   printf("  -%d\n",n2);
   printf("   ----\n");
   printf("   %d\n",r);
   printf("   -%d\n",y);
   printf("   ----\n");
   printf("    %d\n",u);
   printf("   -%d\n",b);
   printf("   ----\n");
   printf("    %d\n",n3);  
}