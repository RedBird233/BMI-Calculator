#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float a;
    do
    {
        a = get_float("What's your age? ");
    }
    while ( a < 2 || a > 200);

    if (a<18)
    {
        char s;
        do
        {
            s = get_char("Are you a boy or a girl?('b' for boy and 'g'for girl. ) ");
        }
        while( s != 'b' && s != 'g');
        if (s == 'b')
        {
            float h = get_float("Type your height?(m) ");
            float w = get_float("Type your weight?(kg) ");
            float b = w / h / h ;
            string j;

            if(a == 2)
            {
                if (b < 16.3)
                {
                    j = "体重偏轻";
                }
                if (b == 16.3)
                {
                    j = "体重正常";
                }
                if (b > 16.3)
                {
                    j = "体重偏胖";
                }

            }
            if(a == 3)
            {
                if (b < 15.7)
                {
                    j = "体重偏轻";
                }
                if (b == 15.7)
                {
                    j = "体重正常";
                }
                if (b > 15.7)
                {
                    j = "体重偏胖";
                }

            }
            if(a == 4)
            {
                if (b < 15.3)
                {
                    j = "体重偏轻";
                }
                if (b == 15.3)
                {
                    j = "体重正常";
                }
                if (b > 15.3)
                {
                    j = "体重偏胖";
                }

            }
            if(a == 5)
            {
                if (b < 15.2)
                {
                    j = "体重偏轻";
                }
                if (b == 15.2)
                {
                    j = "体重正常";
                }
                if (b > 15.2)
                {
                    j = "体重偏胖";
                }

            }
            if(a == 6)
            {
                if (b < 15.3)
                {
                    j = "体重偏轻";
                }
                if (b == 15.3)
                {
                    j = "体重正常";
                }
                if (b > 15.3)
                {
                    j = "体重偏胖";
                }

            }
            if(a == 7)
            {
                if (b < 15.6)
                {
                    j = "体重偏轻";
                }
                if (b == 15.6)
                {
                    j = "体重正常";
                }
                if (b > 15.6)
                {
                    j = "体重偏胖";
                }

            }
            if(a == 8)
            {
                if (b < 16.0)
                {
                    j = "体重偏轻";
                }
                if (b == 16.0)
                {
                    j = "体重正常";
                }
                if (b > 16.0)
                {
                    j = "体重偏胖";
                }

            }
            if(a == 9)
            {
                if (b < 16.4)
                {
                    j = "体重偏轻";
                }
                if (b == 16.4)
                {
                    j = "体重正常";
                }
                if (b > 16.4)
                {
                    j = "体重偏胖";
                }

            }
            if(a == 10)
            {
                if (b < 17.0)
                {
                    j = "体重偏轻";
                }
                if (b == 17.0)
                {
                    j = "体重正常";
                }
                if (b > 17.0)
                {
                    j = "体重偏胖";
                }

            }
            if(a == 11)
            {
                if (b < 17.5)
                {
                    j = "体重偏轻";
                }
                if (b == 17.5)
                {
                    j = "体重正常";
                }
                if (b > 17.5)
                {
                    j = "体重偏胖";
                }
            }
            if(a == 12)
            {
                if (b < 18.1)
                {
                    j = "体重偏轻";
                }
                if (b == 18.1)
                {
                    j = "体重正常";
                }
                if (b > 18.1)
                {
                    j = "体重偏胖";
                }

            }
            if(a == 13)
            {
                if (b < 18.7)
                {
                    j = "体重偏轻";
                }
                if (b == 18.7)
                {
                    j = "体重正常";
                }
                if (b > 18.7)
                {
                    j = "体重偏胖";
                }

            }
            if(a == 14)
            {
                if (b < 19.2)
                {
                    j = "体重偏轻";
                }
                if (b == 19.2)
                {
                    j = "体重正常";
                }
                if (b > 19.2)
                {
                    j = "体重偏胖";
                }

            }
            if(a == 15)
            {
                if (b < 19.7)
                {
                    j = "体重偏轻";
                }
                if (b == 19.7)
                {
                    j = "体重正常";
                }
                if (b > 19.7)
                {
                    j = "体重偏胖";
                }

            }
            if(a == 16)
            {
                if (b < 20.1)
                {
                    j = "体重偏轻";
                }
                if (b == 20.1)
                {
                    j = "体重正常";
                }
                if (b > 20.1)
                {
                    j = "体重偏胖";
                }

            }
            if(a == 17)
            {
                if (b < 20.5)
                {
                    j = "体重偏轻";
                }
                if (b == 20.5)
                {
                    j = "体重正常";
                }
                if (b > 20.5)
                {
                    j = "体重偏胖";
                }

            }
            printf ("Your BMI is %f ,and you are now in %s period.\n", b,j);
        }
        else
        {
            float h = get_float("Type your height?(m) ");
            float w = get_float("Type your weight?(kg) ");
            float b = w / h / h ;
            string j;
                if(a == 2)
            {
                if (b < 15.9)
                {
                    j = "体重偏轻";
                }
                if (b == 15.9)
                {
                    j = "体重正常";
                }
                if (b > 15.9)
                {
                    j = "体重偏胖";
                }

            }
            if(a == 3)
            {
                if (b < 15.4)
                {
                    j = "体重偏轻";
                }
                if (b == 15.4)
                {
                    j = "体重正常";
                }
                if (b > 15.4)
                {
                    j = "体重偏胖";
                }

            }
            if(a == 4)
            {
                if (b < 15.2)
                {
                    j = "体重偏轻";
                }
                if (b == 15.2)
                {
                    j = "体重正常";
                }
                if (b > 15.2)
                {
                    j = "体重偏胖";
                }

            }
            if(a == 5)
            {
                if (b < 15.0)
                {
                    j = "体重偏轻";
                }
                if (b == 15.0)
                {
                    j = "体重正常";
                }
                if (b > 15.0)
                {
                    j = "体重偏胖";
                }

            }
            if(a == 6)
            {
                if (b < 15.0)
                {
                    j = "体重偏轻";
                }
                if (b == 15.0)
                {
                    j = "体重正常";
                }
                if (b > 15.0)
                {
                    j = "体重偏胖";
                }

            }
            if(a == 7)
            {
                if (b < 15.0)
                {
                    j = "体重偏轻";
                }
                if (b == 15.0)
                {
                    j = "体重正常";
                }
                if (b > 15.0)
                {
                    j = "体重偏胖";
                }

            }
            if(a == 8)
            {
                if (b < 15.2)
                {
                    j = "体重偏轻";
                }
                if (b == 15.2)
                {
                    j = "体重正常";
                }
                if (b > 15.2)
                {
                    j = "体重偏胖";
                }

            }
            if(a == 9)
            {
                if (b < 15.6)
                {
                    j = "体重偏轻";
                }
                if (b == 15.6)
                {
                    j = "体重正常";
                }
                if (b > 15.6)
                {
                    j = "体重偏胖";
                }

            }
            if(a == 10)
            {
                if (b < 16.1)
                {
                    j = "体重偏轻";
                }
                if (b == 16.1)
                {
                    j = "体重正常";
                }
                if (b > 16.1)
                {
                    j = "体重偏胖";
                }

            }
            if(a == 11)
            {
                if (b < 16.7)
                {
                    j = "体重偏轻";
                }
                if (b == 16.7)
                {
                    j = "体重正常";
                }
                if (b > 16.7)
                {
                    j = "体重偏胖";
                }

            }
            if(a == 12)
            {
                if (b < 17.4)
                {
                    j = "体重偏轻";
                }
                if (b == 17.4)
                {
                    j = "体重正常";
                }
                if (b > 17.4)
                {
                    j = "体重偏胖";
                }

            }
            if(a == 13)
            {
                if (b < 18.1)
                {
                    j = "体重偏轻";
                }
                if (b == 18.1)
                {
                    j = "体重正常";
                }
                if (b > 18.1)
                {
                    j = "体重偏胖";
                }

            }
            if(a == 14)
            {
                if (b < 18.8)
                {
                    j = "体重偏轻";
                }
                if (b == 18.8)
                {
                    j = "体重正常";
                }
                if (b > 18.8)
                {
                    j = "体重偏胖";
                }

            }
            if(a == 15)
            {
                if (b < 19.3)
                {
                    j = "体重偏轻";
                }
                if (b == 19.3)
                {
                    j = "体重正常";
                }
                if (b > 19.3)
                {
                    j = "体重偏胖";
                }

            }
            if(a == 16)
            {
                if (b < 19.7)
                {
                    j = "体重偏轻";
                }
                if (b == 19.7)
                {
                    j = "体重正常";
                }
                if (b > 19.7)
                {
                    j = "体重偏胖";
                }

            }
            if(a == 17)
            {
                if (b < 20.0)
                {
                    j = "体重偏轻";
                }
                if (b == 20.0)
                {
                    j = "体重正常";
                }
                if (b > 20.0)
                {
                    j = "体重偏胖";
                }

            }
            printf("Your BMI is %f ,and you are now in %s period.\n", b,j );
        }
    }
    else
    {
            float h = get_float("Type your height?(m) ");
            float w = get_float("Type your weight?(kg) ");
            float b = w / h / h ;
            string j;
            if (b<15)
            {
                j = "体重过轻 （严重消瘦）";
            }
            else if (b>15 && b<=16)
            {
                j = "体重过轻 （中度消瘦）";
            }
            else if (b>16 && b<=18.5)
            {
                j = "体重过轻 （轻度消瘦）";
            }
            else if (b>18.5 && b<=25)
            {
                j = "体重正常";
            }
            else if (b>25 && b<=30)
            {
                j = "体重过重 （肥胖前期）";
            }
            else if (b>30 && b<=35)
            {
                j = "肥胖I级（轻度肥胖）";
            }
            else if (b>35 && b<=40)
            {
                j = "肥胖II级（中度肥胖）";
            }
            else
            {
                j = "肥胖III级（严重肥胖）";
            }
            printf("Your BMI is %f ,and you are now in %s period.\n", b,j);
    }
}