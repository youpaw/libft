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
	char 		ch[5];
	int 		len;

	bzero(ch, 5);
	if (buf[0] == '\0')
		read(STDIN_FILENO, buf, CHAR_BUFF_SIZE);
	if (buf[0] == '\33' && buf[1] == '\133')
	{
		strncpy(ch, buf, 4);
		bzero(buf, CHAR_BUFF_SIZE);
	}
	else
	{
		len = get_utf8_len(buf[0]);
		strncpy(ch, buf, len);
		memmove(buf, &buf[len], CHAR_BUFF_SIZE - len);
		bzero(&buf[CHAR_BUFF_SIZE - len], len);
	}
	memcpy(&len, ch, sizeof(int));
	return (len);
}