/*
** main.c for main in /home/passep_j//Semestre2_Projets/Secondary_Projects/MiniTalk/trysocket
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Fri Feb 22 14:36:47 2013 jean-charles passepont
** Last update Fri Feb 22 17:18:07 2013 jean-charles passepont
*/

#include <sys/types.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <unistd.h>
#include "struct.h"

int     main(int ac, char **av)
{
  char        buf[100] = "Hello !";
  int		      sock;
  int		      csock;
  socklen_t		addrlen;
  socklen_t		caddrlen;
  struct sockaddr	    addr;
  struct sockaddr_in	sin;
  struct sockaddr_in	csin;

  addrlen = sizeof(sin);
  caddrlen = sizeof(csin);
  sock = socket(AF_INET, SOCK_STREAM, 0);
  if (sock != -1)
    {
      my_printf("The socket %d is now open for TCP/IP\n", sock);
      sin.sin_addr.s_addr = inet_addr("10.12.179.153");
      sin.sin_family = AF_INET;
      sin.sin_port = htons(23);
      bind(sock, (addr*)&sin, sizeof(addr));
      listen(sock, 5);
      csock = accept(sock, &addr, &caddrlen);
      send(csock, buf, sizeof(buf), 0);
      shutdown(sock, 2);
    }
  else
    my_printf("Error on socket, socket = %d\n", sock);
  return (0);
}

