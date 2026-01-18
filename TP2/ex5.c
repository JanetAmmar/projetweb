#include<stdio.h>
int main()
{
 int nh;
 float s,ph;
 printf("entrer nh,ph ");
 scanf("%d %f", &nh,&ph);
 if(nh<=39)
 {
      s=nh*ph;
 }
 else
   if(nh<=44)
{
       s=(39+5*1.2+(nh-39)*1.2)*ph;

}
else
   if(nh<=49)
      {
         s=(39+5*1.2+(nh-44)*1.5)*ph;   
      }
else
         s=(39+5*1.2+5*1.5+(nh-49)*1.8)*ph;
printf("Le salaire est : %.2f\n", s);
return 0;
}

 