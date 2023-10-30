#include "main.h"
#include<stdio.h>
#include<elf.h>
void p_class(unsigned char *e_ident);
void close_elf(int elf);
void p_entry(unsigned long int e_entry, unsigned char *e_ident);
void p_abi(unsigned char *e_ident);


/**
 * close_elf - close
 * @elf: elf
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * p_entry - print elf en
 * @e_entry: entry
 * @e_ident: ident
 */
void p_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}


	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}

/**
 * p_type - tpe of elf
 * @e_type: e type
 * @e_ident: ident
 */
void p_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");

	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_type);
	}
}


/**
 * p_abi - elf abi
 * @e_ident: head str
 */
void p_abi(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n",
	       e_ident[EI_ABIVERSION]);
}


/**
 * p_osabi - print elf os
 * @e_ident: ident
 */
void p_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");

	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * p_version -  print elf versi
 * @e_ident: pointer
 */
void p_version(unsigned char *e_ident)
{
	printf("  Version:                           %d",
	       e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}


/**
 * p_data - pri elf data
 * @e_ident: poin to arrr
 */
void p_data(unsigned char *e_ident)
{
	printf("  Data:                              ");

	switch (e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	}
	printf("\n");
}

/**
 * p_class -  prin ele clss
 * @e_ident: point to arr
 */
void p_class(unsigned char *e_ident)
{
	printf("  Class:                             ");

	switch (e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	}
	printf("\n");
}

/**
 * p_magic - print elef magic
 * @e_ident: point to arr
 */
void p_magic(unsigned char *e_ident)
{
	int s;

	printf("  Magic:   ");

	for (s = 0; s < EI_NIDENT; s++)
	{
		printf("%02x", e_ident[s]);

		if (s == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * main - main func
 * @argc: num of arg
 * @argv: vector
 * Return: 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *head;
	int fd, x;

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	head = malloc(sizeof(Elf64_Ehdr));
	if (head == NULL)
	{
		close_elf(fd);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	x = read(fd, head, sizeof(Elf64_Ehdr));
	if (x == -1)
	{
		free(head);
		close_elf(fd);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}
	check_elf(head->e_ident);
	printf("ELF Header:\n");
	p_magic(head->e_ident);
	p_class(head->e_ident);
	p_data(head->e_ident);
	p_version(head->e_ident);
	p_osabi(head->e_ident);
	p_abi(head->e_ident);
	p_type(head->e_type, head->e_ident);
	p_entry(head->e_entry, head->e_ident);
	free(head);
	close_elf(fd);
	return (0);
}
