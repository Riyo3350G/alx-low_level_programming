#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * _is_zero - determines if any number is zero
 * @argv: argument vector.
 *
 * Return: no return.
 */
void _is_zero(char *argv[])
{
    int i, isn1 = 1, isn2 = 1;

    for (i = 0; argv[1][i]; i++)
        if (argv[1][i] != '0')
        {
            isn1 = 0;
            break;
        }

    for (i = 0; argv[2][i]; i++)
        if (argv[2][i] != '0')
        {
            isn2 = 0;
            break;
        }

    if (isn1 == 1 || isn2 == 1)
    {
        printf("0\n");
        exit(0);
    }
}

/**
 * _initialize_array - set memory to zero in a new array
 * @ar: char array.
 * @lar: length of the char array.
 *
 * Return: pointer of a char array.
 */
char *_initialize_array(char *ar, int lar)
{
    int i = 0;

    for (i = 0; i < lar; i++)
        ar[i] = '0';
    ar[lar] = '\0';
    return (ar);
}

/**
 * _check_num - determines length of the number
 * and checks if number is in base 10.
 * @argv: arguments vector.
 * @n: row of the array.
 *
 * Return: length of the number.
 */
int _check_num(char *argv[], int n)
{
    int ln;

    for (ln = 0; argv[n][ln]; ln++)
        if (!isdigit(argv[n][ln]))
        {
            printf("Error\n");
            exit(98);
        }

    return (ln);
}

/**
 * main - Entry point.
 * program that multiplies two positive numbers.
 * @argc: number of arguments.
 * @argv: arguments vector.
 *
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
    int ln1, ln2, ln_out, add, add_l, i, j, k, carry;
    char *n_out;

    if (argc != 3)
        printf("Error\n"), exit(98);

    ln1 = _check_num(argv, 1);
    ln2 = _check_num(argv, 2);
    _is_zero(argv);
    ln_out = ln1 + ln2;
    n_out = malloc(ln_out + 1);
    if (n_out == NULL)
        printf("Error\n"), exit(98);
    n_out = _initialize_array(n_out, ln_out);

    k = ln_out - 1;
    i = ln1 - 1;
    j = ln2 - 1;
    carry = add_l = 0;
    for (; k >= 0; k--, i--)
    {
        if (i < 0)
        {
            if (add_l > 0)
            {
                add = (n_out[k] - '0') + add_l;
                if (add > 9)
                    n_out[k - 1] = (add / 10) + '0';
                n_out[k] = (add % 10) + '0';
            }
            i = ln1 - 1;
            j--;
            add_l = carry = 0;
            k = ln_out - (1 + carry);
        }

	if (j < 0)
		{
			if (nout[0] != '0')
				break;

			lnout--;
			free(nout);
			nout = malloc(lnout + 1);
			nout = _initialize_array(nout, lnout);

			k = lnout - 1;
			i = ln1 - 1;
			j = ln2 - 1;
			addl = 0;
			carry = 0;
		}

		if (j >= 0)
		{
			add = ((argv[1][i] - '0') * (argv[2][j] - '0')) + (nout[k] - '0') + addl;
			addl = add / 10;
			nout[k] = (add % 10) + '0';
		}
	}

	printf("%s\n", nout);

	return (0);
}
