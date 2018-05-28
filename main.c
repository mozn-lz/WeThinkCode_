#include <stdio.h>
#include "../includes/libft.h"
#include <ctype.h>
#include <string.h>


void bzero_main()
{
	char	b1[10], b2[10];

	bzero(b1, 10);
	bzero(b2, 10);

	printf("\e[01;33mFT_BZERO\n");
	usleep(100000);
	(memcmp(b1, b2, 10) == 0) ? printf("\x1b[1;32m Correct string memory compare\n"):
	printf("\x1b[1;31m Incorrect string memory compare\n");
	usleep(100000);
	b1[0] = 1;
	ft_bzero(b1, 0);
	(b1[0] == 1) ? printf("\x1b[1;32m Correct bzero\n"):
	printf("\x1b[1;31m Incorrect bzero\n");
	usleep(100000);
}

void	ft_memset_main()
{
	char	b1[100], b2[100];

	printf("\e[01;33mFT_MEMSET\n");
	usleep(100000);
	ft_memset(b1, 42, 100);
	memset(b2, 42, 100);
	(memset(b1, 99, 0) == ft_memset(b1, 99, 0)) ? printf("\x1b[1;32m Correct memset test 1\n"):
	printf("\x1b[1;31m Incorrect memset test 1\n");
	usleep(100000);
	(memcmp(b1, b2, 100) == 0) ? printf("\x1b[1;32m Correct string memory compare\n"):
	printf("\x1b[1;31m Incorrect string memory compare\n");
	usleep(100000);
	b1[0] = 1;
	ft_memset(b1, 0, 0);
	(b1[0] == 1) ? printf("\x1b[1;32m Correct string memset test 2\n"):
	printf("\x1b[1;31m Incorrect string memset test 2\n");
	usleep(100000);
}

void	memcpy_main()
{
	char	b1[100], b2[100];
	printf("\e[01;33mFT_MEMCPY\n");
	usleep(100000);
	ft_memcpy(b1, b2, 100);
	(memcmp(b1, b2, 100) == 0) ? printf("\x1b[1;32m Correct string memory compare\n"):
	printf("\x1b[1;31m Incorrect string memory compare\n");
	usleep(100000);
	(b1 == ft_memcpy(b1, b2, 0)) ? printf("\x1b[1;32m Correct memory copying\n"):
	printf("\x1b[1;31m Incorrect string memory copying\n");
	usleep(100000);
}

void memccpy_main(){
	char	buf1[] = "Ceci est un test.";
	char	buf2[200];
	void	*p1, *p2;

	p1 = memccpy(buf2, buf1, 'i', 10);
	p2 = ft_memccpy(buf2, buf1, 'i', 10);
	printf("\e[01;33mFT_MEMCCPY\n");
	usleep(100000);
	(p1 == p2) ? printf("\x1b[1;32m memccpy matches ft_memccpy\n"):
	printf("\x1b[1;31m memccpy matches ft_memccpy\n");
	usleep(100000);
	(ft_memccpy(buf2, buf1, 'k', 5) == 0) ? printf("\x1b[1;32m Correct string memccpy test 1\n"):
	printf("\x1b[1;31m Incorrect string memccpy test 1\n");
	usleep(100000);
	(ft_memccpy(buf2, buf1, 0, 0) == memccpy(buf2, buf1, 0, 0)) ? printf("\x1b[1;32m Correct string memccpy test 2\n"):
	printf("\x1b[1;31m Incorrect string memccpy test 2\n");
	usleep(100000);
	(ft_memccpy(buf2, buf1, 0, sizeof(buf1)) == memccpy(buf2, buf1, 0, sizeof(buf1))) ? printf("\x1b[1;32m Correct string memccpy test 3\n"):
	printf("\x1b[1;31m Incorrect string memccpy test 2\n");
	usleep(100000);
	(ft_memccpy(buf2, buf1, 'C', 10) == buf2 + 1) ? printf("\x1b[1;32m Correct string memccpy test 3\n"):
	printf("\x1b[1;31m Incorrect string memccpy test 2\n");
	usleep(100000);
}

void	memmove_main()
{
	char	test[] = "abcdef";

	ft_memmove(test + 1, test, 5);
	ft_memmove(test + 1, test, 0);
	printf("\e[01;33mFT_MEMMOVE\n");
	usleep(100000);
	(strcmp(test, "aabcde") == 0) ? printf("\x1b[1;32m Memory correctly moved\n"):
	printf("\x1b[1;31m Memory correctly moved\n");
	usleep(100000);
}

void	memchr_main()
{
	char	test[] = "abcdef";
	printf("\e[01;33mFT_MEMCHR\n");
	usleep(100000);
	((ft_memchr(test, 'a', 5) == test) &&
	(ft_memchr(test, 'c', 5) == test + 2) &&
	(ft_memchr(test, '\0', 7) == memchr(test, '\0', 7)) &&
	(ft_memchr(test, 'z', 6) == 0)) ? printf("\x1b[1;32m Passed all the above tests\n"):
	printf("\x1b[1;31m Something is definetly wrong\n");
	usleep(100000);

}

void	memcmp_main()
{
	char	*t = "ab\0ab";
	printf("\e[01;33mFT_MEMCMP\n");
	usleep(100000);
	((ft_memcmp(t, t, 5)== 0) &&
	(ft_memcmp(t, "abcab", 5) != 0) &&
	(ft_memcmp("aaa", "aab", 4) < 0) &&
	(ft_memcmp("aww", "bpp", 0) == 0)) ? printf("\x1b[1;32m Passed all the above tests\n"):
	printf("\x1b[1;31m Something is definetly wrong\n");
	usleep(100000);
}

void	strlen_main()
{
		printf("\e[01;33mFT_STRLEN\n");
		usleep(100000);
	((ft_strlen("chat") == strlen("chat")) &&
	(ft_strlen("") == strlen(""))) ? printf("\x1b[1;32m Passed all the above tests\n"):
	printf("\x1b[1;31mYou shouldn't even be failing\n");
	usleep(100000);
}

void	strdup_main()
{
	char	*c;

	c = "AbC";
	printf("\e[01;33mFT_STRDUP\n");
	usleep(100000);
	(strcmp(ft_strdup("aaaaa"), "aaaaa")== 0) &&
	(strcmp(ft_strdup(""), "")== 0) &&
	(c != ft_strdup(c)) ? printf("\x1b[1;32m Passed all the above tests\n"):
	printf("\x1b[1;31mFiled one or more of the above tests\n");
	usleep(100000);
}

void	strcpy_main()
{
	char	buf[6];
	printf("\e[01;33mFT_STRCPY\n");
	ft_strcpy(buf, "abcde");
	(strcmp(buf, "abcde") == 0) ? printf("\x1b[1;32m Passed all the above tests\n"):
	printf("\x1b[1;31mFiled one or more of the above tests\n");
	usleep(100000);
}

void strncpy_main()
{
	char	b[6];
	printf("\e[01;33mFT_STRNCPY\n");
	usleep(100000);
	ft_strncpy(b, "abc", 6);
	(memcmp(b, "abc\0\0", 6)== 0) ? printf("\e[1;32m Passed test 1\n"):
	printf("\e[1;31mFiled test 1\n");
	ft_strncpy(b, "abcdefghi", 6);
	(memcmp(b, "abcdefghi", 6)== 0) ? printf("\e[1;32m Passed test 2\n"):
	printf("\e[1;31mFiled test 2\n");
	usleep(100000);
}

void strcat_main()
{
	char	buf[9];
	printf("\e[01;33mFT_STRCAT\n");
	usleep(100000);
	bzero(buf, 9);
	ft_strcat(buf, "Bon");
	ft_strcat(buf, "jour.");
	ft_strcat(buf, "");
	((strcmp(buf, "Bonjour.") == 0) && (buf == ft_strcat(buf, ""))) ? printf("\x1b[1;32m Passed all the above tests\n"):
	printf("\x1b[1;31mFiled one or more of the above tests\n");
	usleep(100000);
}

void strncat_main()
{
	char	buf[20];
	printf("\e[01;33mFT_STRNCAT\n");
	usleep(100000);
	strcpy(buf, "To be ");
	ft_strncat(buf, "or not to be", 6);
	(strcmp(buf, "To be or not")== 0)? printf("\e[1;32m Passed test 1\n"):
	printf("\e[1;31mFiled test 1\n");
	usleep(100000);
	ft_strncat(buf, "efefef", 0);
	(strcmp(buf, "To be or not")== 0)? printf("\e[1;32m Passed test 2\n"):
	printf("\e[1;31mFiled test 2\n");
	usleep(100000);
	(buf == ft_strncat(buf, "", 0)) ? printf("\e[1;32m Passed test 3\n"):
	printf("\e[1;31mFiled test 3\n");
	usleep(100000);
}

void strlcat_main()
{
	char	buf[10];
	printf("\e[01;33mFT_STRLCAT\n");
	usleep(100000);
	bzero(buf, 10);
	strcpy(buf, "abc");
	ft_strlcat(buf, "abcdefghijklmnop", 10);
	(strcmp(buf, "abcabcdef") == 0) ? printf("\e[1;32m Passed test 1\n"):
	printf("\e[1;31mFiled test 1\n");
	usleep(100000);
	(ft_strlcat(buf, "abcd", 2)== 6) ? printf("\e[1;32m Passed test 2\n"):
	printf("\e[1;31mFiled test 2\n");
	usleep(100000);
	bzero(buf, 10);
	(ft_strlcat(buf, "abc", 10)== 3) ? printf("\e[1;32m Passed test 3\n"):
	printf("\e[1;31mFiled test 3\n");
	usleep(100000);;
	(ft_strlcat(buf, "def", 10)== 6) ? printf("\e[1;32m Passed test 4\n"):
	printf("\e[1;31mFiled test 4\n");
	usleep(100000);
	bzero(buf, 10);
	memset(buf, 'a', 10);
	(ft_strlcat(buf, "ccc", 10)== 13) ? printf("\e[1;32m Passed test 5\n"):
	printf("\e[1;31mFiled test 5\n");
	usleep(100000);
}

void strchr_main()
{
	char	buf[] = "Je suis un poisson.";
	printf("\e[01;33mFT_STRCHR\n");
	((strchr(buf, 'p') == ft_strchr(buf, 'p'))&&
	(strchr(buf, 0)== ft_strchr(buf, 0))&&
	(ft_strchr(buf, 'J') == buf)&&
	(ft_strchr(buf, 'z') == 0)) ? printf("\x1b[1;32m Passed all the above tests\n"):
	printf("\x1b[1;31mFiled one or more of the above tests\n");
	usleep(100000);
}

void strrchr_main()
{
	char	buf[] = "abcdedcba";
	printf("\e[01;33mFT_STRRCHR\n");
	usleep(100000);
	(strrchr(buf, 'a') == ft_strrchr(buf, 'a'))? printf("\e[1;32m Passed test 1\n"):
	printf("\e[1;31mFiled test 1\n");
	usleep(100000);
	(strrchr(buf, 0) == ft_strrchr(buf, 0))? printf("\e[1;32m Passed test 2\n"):
	printf("\e[1;31mFiled test 2\n");
	usleep(100000);
	(ft_strrchr(buf, 'z') == 0)? printf("\e[1;32m Passed test 3\n"):
	printf("\e[1;31mFiled test 3\n");
	usleep(100000);
	buf[5] = 0;
	(ft_strrchr(buf, 'a') == buf)? printf("\e[1;32m Passed test 4\n"):
	printf("\e[1;31mFiled test 4\n");
	usleep(100000);
}

void strstr_main()
{
	char	buf[] = "Ceci n'est pas une pipe.";
	printf("\e[01;33mFT_STRSTR\n");
	usleep(100000);
	(strstr(buf, "une")== ft_strstr(buf, "une"))&&
	(strstr(buf, "")== ft_strstr(buf, ""))&&
	(strstr(buf, "aaaaa")== ft_strstr(buf, "aaaaa"))&&
	(ft_strstr(buf, "BWAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA")== NULL) ? printf("\x1b[1;32m Passed all the above tests\n"):
	printf("\x1b[1;31mFiled one or more of the above tests\n");
	usleep(100000);
}

void strntsr_main()
{
	char	buf[10];
	printf("\e[01;33mFT_STRNSTR\n");
	usleep(100000);
	bzero(buf, 10);
	strcpy(buf, "un deux 9");
	(strnstr(buf, "deux", 10) == ft_strnstr(buf, "deux", 10))? printf("\e[1;32m Passed test 1\n"):
	printf("\e[1;31mFiled test 1\n");
	usleep(100000);
	(strnstr(buf, "9", 3) == ft_strnstr(buf, "9", 3))? printf("\e[1;32m Passed test 2\n"):
	printf("\e[1;31mFiled test 2\n");
	usleep(100000);
	(ft_strnstr(buf, "", 6) == buf)? printf("\e[1;32m Passed test 3\n"):
	printf("\e[1;31mFiled test 3\n");
	usleep(100000);
	(ft_strnstr(buf, "deux" ,5)== strnstr(buf, "deux", 5))? printf("\e[1;32m Passed test 4\n"):
	printf("\e[1;31mFiled test 4\n");
	usleep(100000);
	(ft_strnstr(buf, "9", 10) == strnstr(buf, "9", 10))? printf("\e[1;32m Passed test 5\n"):
	printf("\e[1;31mFiled test 5\n");
	usleep(100000);
	buf[9] = '6';
	(strnstr(buf, "cinq", 10) == ft_strnstr(buf, "cinq", 10))? printf("\e[1;32m Passed test 6\n"):
	printf("\e[1;31mFiled test 6\n");
	usleep(100000);
	(strnstr(buf, "deux", 10) == ft_strnstr(buf, "deux", 10))? printf("\e[1;32m Passed test 7\n"):
	printf("\e[1;31mFiled test 7\n");
	usleep(100000);
	(strnstr(buf, "9682", 10) == ft_strnstr(buf, "9682", 10))? printf("\e[1;32m Passed test 8\n"):
	printf("\e[1;31mFiled test 8\n");
	usleep(100000);
	(strnstr(buf, "6", 10) == ft_strnstr(buf, "6", 10))? printf("\e[1;32m Passed test 9\n"):
	printf("\e[1;31mFiled test 9\n");
	usleep(100000);
	buf[1] = 0;
	(strnstr(buf, "deux", 10) == ft_strnstr(buf, "deux", 10))? printf("\e[1;32m Passed test 10\n"):
	printf("\e[1;31mFiled test 10\n");
	usleep(100000);
}

void strcmp_main()
{
	printf("\e[01;33mFT_STRCMP\n");
	usleep(100000);
	((ft_strcmp("abc", "abc")== 0)&&
	(ft_strcmp("abc", "abd") < 0) &&
	(ft_strcmp("a", "abcde")!= 0)) ? printf("\x1b[1;32m Passed all the above tests\n"):
	printf("\x1b[1;31mFiled one or more of the above tests\n");
	usleep(100000);
}

void strncmp_main()
{
	printf("\e[01;33mFT_STRNCMP\n");
	usleep(100000);
	(ft_strncmp("abc", "abcde",3)== 0)&&
	(ft_strncmp("abc", "abc\0defg", 100)== 0)&&
	(ft_strncmp("ab\0cde", "abcc\0e", 20) != 0) ? printf("\x1b[1;32m Passed all the above tests\n"):
	printf("\x1b[1;31mFiled one or more of the above tests\n");
	usleep(100000);
}

void atoi_main()
{
	printf("\e[01;33mFT_ATOI\n");
	usleep(100000);
	((ft_atoi(" -sfecf") == 0) &&
	(ft_atoi("+2798") == 2798) &&
	(ft_atoi("  \t\n  \r\r\v\f-899") == -899) &&
	(ft_atoi("+0089") == 89) &&
	(ft_atoi("-2147483648") == -2147483648) &&
	(ft_atoi("a56") == 0) &&
	(ft_atoi("    555 5555555555555555") == 555)) ? printf("\x1b[1;32m Passed all the above tests\n"):
	printf("\x1b[1;31mFiled one or more of the above tests\n");
	usleep(100000);
}

void IS_main()
{
	printf("\e[01;33mFT_ISALPHA\n");
	usleep(100000);
	((ft_isalpha('a') != 0) &&
	(ft_isalpha('a' + 0x100) == 0) &&
	(ft_isalpha('2') == 0) &&
	(ft_isalpha('Z') != 0) &&
	(ft_isalpha('t') != 0)) ? printf("\x1b[1;32m Passed all the above tests\n"):
	printf("\x1b[1;31mFiled one or more of the above tests\n\n");
	usleep(100000);

	printf("\e[01;33mFT_ISDIGIT\n");
	usleep(100000);
	((ft_isdigit(0) == 0) &&
	(ft_isdigit('8') != 0) &&
	(ft_isdigit('8' + 0x100) == 0)) ? printf("\x1b[1;32m Passed all the above tests\n"):
	printf("\x1b[1;31mFiled one or more of the above tests\n\n");
	usleep(100000);

	printf("\e[01;33mFT_ISALNUM\n");
	usleep(100000);
	((ft_isalnum(' ') == 0) &&
	(ft_isalnum('6') != 0) &&
	(ft_isalnum('Z') != 0) &&
	(ft_isalnum('5' + 0x100) == 0)) ? printf("\x1b[1;32m Passed all the above tests\n"):
	printf("\x1b[1;31mFiled one or more of the above tests\n\n");
	usleep(100000);

	printf("\e[01;33mFT_ISACSII\n");
	usleep(100000);
	((ft_isascii(200) == 0) &&
	(ft_isascii(0) != 0) &&
	(ft_isascii(127) != 0) ) ? printf("\x1b[1;32m Passed all the above tests\n"):
	printf("\x1b[1;31mFiled one or more of the above tests\n\n");
	usleep(100000);

	printf("\e[01;33mFT_ISPRINT\n");
	usleep(100000);
	((ft_isprint(0) == 0) &&
	(ft_isprint(127) == 0) &&
	(ft_isprint(' ') != 0) &&
	(ft_isprint('a') != 0) &&
	(ft_isprint(126) != 0)) ? printf("\x1b[1;32m Passed all the above tests\n"):
	printf("\x1b[1;31mFiled one or more of the above tests\n\n");
	usleep(100000);

	printf("\e[01;33mFT_TOUPPER\n");
	usleep(100000);
	((ft_toupper('a') == 'A') &&
	(ft_toupper(12345) == 12345) &&
	(ft_toupper(' ') == ' ') &&
	(ft_toupper('Z') == 'Z')) ? printf("\x1b[1;32m Passed all the above tests\n"):
	printf("\x1b[1;31mFiled one or more of the above tests\n\n");
	usleep(100000);

	printf("\e[01;33mFT_TOLOWER\n");
	usleep(100000);
	((ft_tolower('T') == 't') &&
	(ft_tolower(99999) == 99999) &&
	(ft_tolower('e') == 'e')) ? printf("\x1b[1;32m Passed all the above tests\n"):
	printf("\x1b[1;31mFiled one or more of the above tests\n");
	usleep(100000);
}

int main()
{
		ft_memset_main();printf("\n");
		bzero_main();printf("\n");
		memcpy_main();printf("\n");
		memccpy_main();printf("\n");
		memmove_main();printf("\n");
		memchr_main();printf("\n");
		memcmp_main();printf("\n");
		strlen_main();printf("\n");
		strdup_main();printf("\n");
		strcpy_main();printf("\n");
		strncpy_main(); printf("\n");
		strcat_main(); printf("\n");
		strncat_main();printf("\n");
		strlcat_main();printf("\n");
		strchr_main(); printf("\n");
		strrchr_main(); printf("\n");
		strstr_main();printf("\n");
		strntsr_main();printf("\n");
		strcmp_main(); printf("\n");
		strncmp_main();printf("\n");
		atoi_main();printf("\n");
		IS_main();printf("\n");
}
