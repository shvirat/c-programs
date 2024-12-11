#include<stdio.h>
int main()
{
    int math,phy,chem,comp,mech,total;
    float percent;
    printf("Enter marks obtained in Maths: ");
    scanf("%d",&math);
    printf("Enter marks obtained in Physics: ");
    scanf("%d",&phy);
    printf("Enter marks obtained in Chemistry: ");
    scanf("%d",&chem);
    printf("Enter marks obtained in Computer: ");
    scanf("%d", &comp);
    printf("Enter marks obtained in Mechanics: ");
    scanf("%d",&mech);
    total=math+phy+chem+mech+comp;
    percent=(float)total/5;
    printf("Total marks= %d\nAnd percentage= %.2f", total,percent);
    return 0;
}
