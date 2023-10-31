#include "main.h"
#include<stdio.h>
#include<elf.h>

void p_again_osa(Elf64_Ehdr head);

/**
 * p_entry - print elf en
 * @head: head
 */
void p_entry(Elf64_Ehdr head)
{
	int m = 0, l = 0;
	unsigned char *d = (unsigned char *)&head.e_entry;

	printf("  Entry point address:               0x");
	if (head.e_ident[EI_DATA] != ELFDATA2MSB)
	{
		m = head.e_ident[EI_DATA] == ELFCLASS64 ? 7 : 3;
		while (!d[m])
			m--;
		printf("%x", d[m--]);
		for (; m >= 0; m--)
			printf("%02x", d[m]);
		printf("\n");
	}
	else
	{
		m = 0;
		l = head.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!d[m])
			m++;
		printf("%x", d[m++]);
		for (; m <= l; m++)
			printf("%02x", d[m]);
		printf("\n");
	}

}

/**
 * p_type - tpe of elf
 * @head: header
 */
void p_type(Elf64_Ehdr head)
{
	char *d = (char *)&head.e_type;
	int m = 0;

	printf("  Type:                              ");
	if (head.e_ident[EI_DATA] == ELFDATA2MSB)
		m = 1;

	switch (d[m])
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
		printf("<unknown: %x>\n", d[m]);
		break;
	}
	printf("\n");
}


/**
 * p_abi - elf abi
 * @head: head str
 */
void p_abi(Elf64_Ehdr head)
{
	printf("  ABI Version:                       %d\n",
	       head.e_ident[EI_ABIVERSION]);
}


/**
 * p_osabi - print elf os
 * @head: ident
 */
void p_osabi(Elf64_Ehdr head)
{
	printf("  OS/ABI:                            ");

	switch (head.e_ident[EI_OSABI])
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
	}
	printf("\n");
}
/**
 * p_again_osa - print osabi
 * @head: header
 */
void p_again_osa(Elf64_Ehdr head)
{
	switch (head.e_ident[EI_OSABI])
	{
		case ELFOSABI_MODESTO:
			printf("movell - Modesto");
			break;
		case ELFOSABI_OPENBSD:
			printf("UNIX - OpenBSD");
			break;
		default:
			printf("<unknown: %x>\n", head.e_ident[EI_OSABI]);
			break;
	}
}

/**
 * p_version -  print elf versi
 * @head: pointer
 */
void p_version(Elf64_Ehdr head)
{
	printf("  Version:                           %d",
	       head.e_ident[EI_VERSION]);

	switch (head.e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	case EV_NONE:
		printf("%s", "");
		break;
		break;
	}
	printf("\n");
}


/**
 * p_data - pri elf data
 * @head: poin to arrr
 */
void p_data(Elf64_Ehdr head)
{
	printf("  Data:                              ");

	switch (head.e_ident[EI_DATA])
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
 * @head: point to arr
 */
void p_class(Elf64_Ehdr head)
{
	printf("  Class:                             ");

	switch (head.e_ident[EI_CLASS])
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
 * @head: point to arr
 */
void p_magic(Elf64_Ehdr head)
{
	int r;

	printf("  Magic:   ");

	for (r = 0; r < EI_NIDENT; r++)
		printf("%02x", head.e_ident[r]);
	if (r == EI_NIDENT - 1)
		printf("\n");
	else
		printf(" ");
}

/**
 * main - main func
 * @argc: num of arg
 * @argv: vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	Elf64_Ehdr head;
	int f;
	ssize_t byte;

	if (argc != 2)
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n"), exit(98);

	f = open(argv[1], O_RDONLY);
	if (f == -1)
		dprintf(STDERR_FILENO, "Can't open file: %s\n", argv[1]), exit(98);

	byte = read(f, &head, sizeof(head));
	if (byte < 1 || byte != sizeof(head))

		dprintf(STDERR_FILENO, "Can't read file: %s\n", argv[1]), exit(98);
	if (head.e_ident[0] == 0x7f && head.e_ident[1] == 'E' && head.e_ident[2] ==
			'L' && head.e_ident[3] == 'F')
	{
		printf("ELF Header: \n");
	}
	else
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]), exit(98);


	p_magic(head);
	p_class(head);
	p_data(head);
	p_version(head);
	p_osabi(head);
	p_abi(head);
	p_type(head);
	p_entry(head);
	if (close(f))
		dprintf(STDERR_FILENO, "error in close : %d\n", f), exit(98);
	return (EXIT_SUCCESS);
}
