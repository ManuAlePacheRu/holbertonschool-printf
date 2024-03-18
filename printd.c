#include "main.h"

/**
 *
 */

void reverse(char str[], int length)
{
    int start;
    int end = length -1;
for(start = 0; start < end; ++start, --end)
{
	const char ch = str[start];
	str[start] = str[end];
	str[end] = ch;
}
}

char* _itoa(int num, char* str, int base)
{
    int i = 0;
    char isNegNum = 0;
    /*Handle 0 explicitly, 
      otherwise empty string is printed for 0 */
    if (num == 0)
    {
        str[i++] = '0';
        str[i] = '\0';
    }
    else
    {
        // In library itoa function -ve numbers handled only with
        // base 10. SO here we are also following same concept
        if ((num < 0) && (base == 10))
        {
            isNegNum = 1;
            num = -num; // make num positive
        }
        // Process individual digits
        do
        {
            const int rem = (num % base);
            str[i++] = (rem > 9)? ((rem-10) + 'a') : (rem + '0');
            num = num/base;
        }
        while (num != 0);
        // If number is negative, append '-'
        if (isNegNum)
        {
            str[i++] = '-';
        }
        // Append string terminator
        str[i] = '\0';
        // Reverse the string
        reverse(str, i);
    }
    return str;
}

int printd()
{
	int i;
	char r;
	char *str = 0;
	str = malloc(10 * sizeof(int));

		for (i = 48; i <= 57; i++)
		{	
			str[r] = r;
			r = _itoa(0, str, 10);
		}

	putchar(str[r]);
return (r);
}

int main()
{
	char *str = "Hola2324";
	_itoa(7, str, 10);
	return (0);
}
