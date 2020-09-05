//
// Created by Darth Butterwell on 9/5/20.
//

int			get_utf8_len(char ch)
{
	if (ch >= 0)
		return (1);
	else if (ch & -16)
		return(4);
	else if (ch & -32)
		return(3);
	else if (ch & -64)
		return(2);
	return 0;
}