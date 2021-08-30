#include "search_algos.h"

/**
 * print_arr - print an array
 * @array: array
 * @first: index of array
 * @last: index of array
 */
void print_arr(int *array, size_t first, size_t last)
{
    size_t i;

    for (i = first; i <= last; i++)
    {
        printf("%d", array[i]);
        if (i != last)
        {
            printf(", ");
        }
    }
    printf("\n");
}
/**
 * binary_search - perform binary search on an array
 * @array: array
 * @size: size of the array
 * @value: value we're looking for
 * Return: If Integer found, return index of value in the array. -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
    size_t first = 0, last = size - 1, mid = (last / 2) - 1;

    printf("Searching in array: ");
    print_arr(array, first, last);
    while (first != last && first != mid)
    {
        if (array[mid] == value)
        {
            return (mid);
        }
        else if (array[mid] > value)
        {
            last = mid;
            mid = (first + last) / 2;
        }
        else
        {
            first = mid;
            mid = (first + last) / 2;
            if (array[last] != value)
                last = last -1;
        }
        printf("Searching in array: ");
        print_arr(array, first, last);
    }
    if (array[first] == value)
        return (first);
    if (array[last] == value)
        return (last);
    return (-1);
}
