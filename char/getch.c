//
// Created by Darth Butterwell on 9/5/20.
//

#include "cc_char.h"
#include "cc_mem.h"
#include "unistd.h"
#include "cc_str.h"



int 	getch(void)
{
	static char	buf[CHAR_BUFF_SIZE];
	static int	escape_flag;
	char 		ch[5];
	int 		len;

	bzero(ch, 5);
	if (buf[0] == '\0')
	{
		read(STDIN_FILENO, buf, CHAR_BUFF_SIZE);
		escape_flag = 0;
	}
	if (buf[0] == '\33' && buf[1] == '\133')
	{
		len = 2;
		escape_flag = 1;
	}
	else
	{
		if (escape_flag)
			len = 4;
		else
			len = get_utf8_len(buf[0]);
	}
	strncpy(ch, buf, len);
	memmove(buf, &buf[len], CHAR_BUFF_SIZE - len);
	bzero(&buf[CHAR_BUFF_SIZE - len], len);
	memcpy(&len, ch, sizeof(int));
	return (len);
}