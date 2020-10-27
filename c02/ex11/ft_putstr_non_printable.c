
#include <unistd.h>

void ft_putstr_non_printable(char *str);
char *ascii_to_hex(char *buf);

int main()
{

char string[7] = "abcdef";
ft_putstr_non_printable(string);

}

void ft_putstr_non_printable(char *str)
 {
     while (*str++)
     {
        if (!(*str >= 32 && *str <= 127))
        {
            write(1, ascii_to_hex(str), 3);
        }
        else 
            {
                write(1, str, 1);
            }
     }
 }

char *ascii_to_hex(char *buf)
{
    char value[3];
    char hex[17] = "0123456789abcdef";
    value[0] = '\\';
    value[1] = hex[*buf / 16];
    value[2] = hex[*buf % 16];
    char *tab = value; 
    return tab; 
}
