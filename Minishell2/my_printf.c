/*
** my_printf.c for my_printf in /home/passep_j//GODMOD
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Sun Nov 18 21:31:41 2012 jean-charles passepont
** Last update Sun Dec 30 16:20:03 2012 jean-charles passepont
*/

#include <stdarg.h>

int	modulo2(const char *format, int m, va_list ap)
{
  int	oct;
  int	dec;
  int	hex;

  if (format[m] == 'o')
    {
      oct = va_arg(ap, unsigned int);
      my_putnbr_base2(oct, "01234567");
    }
  if (format[m] == 'u')
    {
      dec = va_arg(ap, unsigned int);
      my_putnbr_base2(dec, "0123456789");
    }
  if (format[m] == 'x')
    {
      hex = va_arg(ap, unsigned int);
      my_putnbr_base2(hex, "0123456789abcdef");
    }
  if (format[m] == 'X')
    {
      hex = va_arg(ap, unsigned int);
      my_putnbr_base2(hex, "0123456789ABCDEF");
    }
}

int	modulo(const char *format, int m, va_list ap)
{
  char	*o;
  int	nb;
  int	c;

  if (format[m] == 's')
    {
      o = va_arg(ap, char *);
      my_putstr(o);
    }
  if (format[m] == 'd' || format[m] == 'i')
    {
      nb = va_arg(ap, int);
      my_put_nbr(nb);
    }
  if (format[m] == 'c')
    {
      c = (char)va_arg(ap, int);
      my_putchar(c);
    }
  if (format[m] == '%')
    my_putchar('%');
  modulo2(format, m, ap);
}

int	my_printf(const char *format, ...)
{
  va_list	ap;
  int		m;

  va_start(ap, format);
  m = 0;
  while (format[m] != 0)
    {
      if (format[m] == '%')
	{
	  m++;
	  modulo(format, m, ap);
	}
      else
	my_putchar(format[m]);
      m++;
    }
  va_end(ap);
}

