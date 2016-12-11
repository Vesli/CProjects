/*
** struct.h for struct in /home/passep_j//Semestre2_Projets/Secondary_Projects/MiniTalk/trysocket
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Fri Feb 22 16:17:55 2013 jean-charles passepont
** Last update Fri Feb 22 17:17:57 2013 jean-charles passepont
*/
#include <sys/socket.h>
#include <sys/types.h>

#ifndef				_STRUCT_H_
#define				_STRUCT_H_

typedef	struct		sockaddr_in
{
  short				sin_family;
  unsigned short	sin_port;
  struct in_addr	sin_addr;
  char				sin_zero;
}					sockaddr_in;

#endif				/*_STRUCT_H_*/
