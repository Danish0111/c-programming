#include <stdio.h>
struct distance
{
    int feet;
    float inches;
};

struct distance addDistance(struct distance d1, struct distance d2)
{
    struct distance sum;
    sum.feet = d1.feet + d2.feet;
    sum.inches = d1.inches + d2.inches;

    if (sum.inches >= 12)
    {
        sum.inches -= 12;
        sum.feet++;
    }
    return sum;
}
int main()
{
    struct distance dis1, dis2, result;
    printf("enter first distance in feet and inches : ");
    scanf("%d %f", &dis1.feet, &dis1.inches);

    printf("enter second distance in feet and inches : ");
    scanf("%d %f", &dis2.feet, &dis2.inches);

    result = addDistance(dis1, dis2);
    printf("sum is : %d feet %.2f inches\n", result.feet, result.inches);

    return 0;
}