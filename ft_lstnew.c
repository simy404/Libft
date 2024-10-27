/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamir <hsamir@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 21:13:56 by hsamir            #+#    #+#             */
/*   Updated: 2024/10/27 21:13:56 by hsamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct person
{
	long a; // 8
	int   a2; //4 + 4
	long a1; // 8
	char c; // 1 + 3

} person;

#pragma region  print_memory
#include <stdio.h>
int min(int a, int b) { return a < b ? a : b; }

void print_repeat(char c, int n) {
  while (n-- > 0)
    printf("%c", c);
}

void print_memory_ascii(void *addr, int size) {
  while (size-- > 0)
    if (*(unsigned char *)addr >= 32 && *(unsigned char *)addr <= 126)
      printf("%c ", *(unsigned char *)addr++);
    else
      printf(". ");
}

void print_memory_hex(void *addr, int size, int line_length) {
  while (size-- > 0)
    printf("%02x ", *(unsigned char *)addr++);
}

void print_memory(void *addr, int size) {
  unsigned char *mem = (unsigned char *)addr;
  int bytes_per_line = 8;
  int line = 0;
  int bounded_len;
  while (line <= size / bytes_per_line) {
  	bounded_len = min(bytes_per_line, size - line * bytes_per_line);
    printf("%p: ", mem);
    print_memory_hex(mem, bounded_len, bytes_per_line * 3);
    print_repeat(' ', (bytes_per_line - bounded_len) * 3);
    printf("-> ");
    print_memory_ascii(mem, bounded_len);
    printf("\n");
    mem += bounded_len;
    line++;
  }
}
#pragma endregion

int main()
{
	person test = {16,  2147483647, 2147483647, 'b'};
	printf("size:%lu\n", sizeof(person));
	print_memory(&test, sizeof(person));
	return 0;
}

