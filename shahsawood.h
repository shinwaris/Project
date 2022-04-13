#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Create a string data type
typedef char * string;

// Print ascii value of a character
int ascii_value(char c)
{
	return (int) c;
}

// Calculating average
float average(int *array)
{
	int i;
	float sum = 0.00;
	float av = 0.00;

	for (i = 0; i < (sizeof(array) / (int) sizeof(i)); i++)
	{
		sum += array[i];
	}
	return sum / i;
}

// Find length of an integer
int num_length(int number)
{
	int y = 0;
	if (number <= 0)
	{
		y = log10(abs(number)) + 1;
		return number;
	}
	else if (number >= 1)
	{
		y = log10(number) + 1;
		return y;
	}
	return y;
}

// Sort array in ascending order via bubble sort
int * bubble_sort(int *A, int n)
{
    int temp = 0;
	for (int i = 0; i < n - 1; i++)
    {
		for (int j = 0; j < n - 1 - i; j++)
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
    return A;
}

// Print triangle using height
void triangle(int h)
{
	if (h < 1 || h > 30)
	{
		printf("Sorry! Height can't be less than 1.\nAlso Height can't be greater than 30.\n");
		return;
	}
	for(int i = h; i > 0; i--)
	{
		for(int j = 0; j <= h; j++)
	    {
	        if(j >= i)
			{
	            printf("* ");
			}
			else
			{
				printf(" ");
			}
	    }
		printf("\n");
	}
}

// Printing sqaure
void square(int x)
{
	for (int i = 0; i < x; i++)
    {
		for (int j = 0; j < x; j++)
        {
            // (First row)  (First col) (last col)     (last row)
            if ((i == 0) || (j == 0) || (j == x - 1) || (i == x - 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// Find distance b/w two points
int distance(int x1, int x2, int y1, int y2)
{
    return sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
}
void AP(void)
{
	int bottom, top, columns, counter = 1;
	printf("Bottom: ");
	scanf("%i", &bottom);
	printf("Top: ");
	scanf("%i", &top);
	for ( ; ; )
	{
		printf("Columns: ");
		scanf("%i", &columns);
		if (columns >= 5)
		{
			break;
		}
	}

	for (; bottom <= top; bottom++)
	{
		printf("%i", bottom);
		if (counter % columns == 0 && counter != top)
		{
			printf("\n\n");
		}
		else if (counter == top)
		{
			//do nothing
		}
		else
		{
			printf("\t");
		}
		counter++;
	}
}
// Take integral input from user
int get_integer(string strings)
{
	// user input stores here
	string str = "\0";
prompt:
	// prompt user for input
	printf("%s", strings);
	scanf("%s", str);

	int length = strlen(str);

	if (str[0] == '+' || str[0] == '-')
	{
		// looping over all characters ensuring digits
		for (int i = 1; i < length; i++)
		{
			// checking for digits
			if (str[i] < 48 || str[i] > 57)
			{
				goto prompt;
			}
		}
		// checking integeral limit
		if (atol(str) < INT_MIN || atol(str) > INT_MAX)
		{
			goto prompt;
		}
	}
	else
	{
		for (int i = 0; i < length; i++)
		{
			if (str[i] < 48 || str[i] > 57)
			{
				goto prompt;
			}
		}
		// checking integeral limit
		if (atol(str) < INT_MIN || atol(str) > INT_MAX)
		{
			goto prompt;
		}
	}
	return atoi(str);
}
string getString(string s)
{

	string str = NULL;
	printf ("%s", s);
	scanf ("%m[^\n]%*c", &str);
	return str;
}
char get_character(string s)
{
	printf("%s", s);
	char c;
	scanf("%c", &c);
	return c;
}
int IsEven(int number)
{
	return number % 2 == 0;
}

int IsOdd(int number)
{
	return number % 2 != 0;
}

int IsLeapYear(int year)
{
	return ((year % 100 != 0 && year % 4 == 0) || year % 400 == 0);
}
int IsSpace(char c)
{
	return (c == ' ' || c == '\n' || c == '\r' || c == '\v' || c == '\t' || c == '\b' || c == '\f');
}
int IsNumber(string s)
{
	int len = strlen(s);
	int true = 1;
	int false = 0;
	int counter = 0;
	while(counter < len)
	{
		if (s[counter] < '0' || s[counter] > '9')
		{
			return false;
		}
		counter++;
	}
	return true;
}
int IsLower(char c)
{
	return c >= 'a' && c <= 'z';
}
int IsUpper(char c)
{
	return c >= 'A' && c <= 'Z';
}
int IsAlphabet(char c)
{
	return IsUpper(c) || IsLower(c);
}
char ToUpperCase(char c)
{
	if (IsUpper(c)) return c; else if (IsLower(c)) return c - ' '; else return '0';
}
char ToLowerCase(char c)
{
	if (IsLower(c)) return c; else if (IsUpper(c)) return c + ' '; else return '0';
}
