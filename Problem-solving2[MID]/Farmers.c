#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);
        int days_for_single_person = m1 * d;
        int after_join_farmers = m1 + m2;
        int fewer_days = (int)d - (days_for_single_person / after_join_farmers); // Calculating fewer days(divided by single person days need / all_famers days need)

        printf("%d\n", fewer_days);
    }

    return 0;
}