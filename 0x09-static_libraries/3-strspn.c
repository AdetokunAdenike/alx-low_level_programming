/**
 * _strspn - calculates the length of the initial segment of
 * s consisting of only the characters in accept
 * @s: pointer to the string to be analyzed
 * @accept: pointer to the set of characters to match
 * Return: length of the initial segment of s containing
 * only accept characters
 */

unsigned int _strspn(const char *s, const char *accept)
{
    unsigned int count = 0;

    while (*s != '\0')
    {
        const char *accept_ptr = accept;

        while (*accept_ptr != '\0' && *accept_ptr != *s)
        {
            accept_ptr++;
        }

        if (*accept_ptr == '\0')
        {
            break;
        }

        count++;
        s++;
    }

    return count;
}

