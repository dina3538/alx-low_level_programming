#include "main.h"
#include<stdio.h>
#include<elf.h>

/**
 * check_elf - check elf
 * @e_ident: ident
 */
void check_elf(unsigned char *e_ident)
{
        int m;

        for (m = 0; m < 4; m++)
        {
                if (e_ident[m] != 127 &&
                    e_ident[m] != 'E' &&
                    e_ident[m] != 'L' &&
                    e_ident[m] != 'F')
                {
                        dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
                        exit(98);
                }
        }
}
