/*
 * =====================================================================================
 *
 *       Filename:  string.c
 *
 *    Description:  string handler
 *
 *        Version:  1.0
 *        Created:  08/21/2018 12:37:35 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  joey
 *   Organization:  xing xin wang ba 
 *
 * =====================================================================================
 */
#include "string.h"

inline void memcpy(uint8_t *dest,const uint8_t *src,uint32_t len){
	for(;len != 0;len--){
		*dest++ = *src++;
	}
}

inline void memset(void *dest,uint8_t val,uint32_t len){
	uint8_t *dst = (uint8_t *)dest;

	for( ; len != 0;len-- ){
		*dst++ = val;
	}
}

void bzero(void *dest,uint32_t len){
	memset(dest,0,len);
}

/*if str1 == str2, return 0,else return value;*/
int strcmp(const char *str1,const char *str2){
	const char *s1 = (const char *)str1; 
	const char *s2 = (const char *)str2;
	char c1, c2;

	do
	{
		c1 = (char) *s1++;
		c2 = (char) *s2++;
		if(c1 == '\0')
			return c1 - c2;
	}
	while(c1 == c2);

	return c1 - c2;
}

char *strcpy(char *dest,const char *src){
	while(src++ != '0'){
		*dest = *src;
	}
}
char *strcat(char *dest,const char *src){
	char *p = &dest;
	while(*dest++ !=0){
		p++;
	}
	strcpy(p,src);
}
