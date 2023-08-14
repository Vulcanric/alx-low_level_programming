#include <elf.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

/**
 * magic_bytes - prints all the magic bytes of an ELF file
 * @elfheader: the elf header that will be read from the
 * first 16 bytes of the file
 * @elf_secname: the section name
 * Return: Nothing
 */
void magic_bytes(Elf64_Ehdr *elfheader, char *elf_secname)
{
	int i = 0;

	printf("%s", elf_secname);
	printf("   ");
	while (i < 16)
	{
		printf("%02x", elfheader->e_ident[i]);
		if (i != 16 - 1)
			putchar(' ');
		i++;
	}
	putchar('\n');
}

/**
 * class_info - prints the class of the machine 32 or 64
 * @elfheader: the elf header that will be read from the
 * first 16 bytes of the file
 * @elf_secname: the section name
 * Return: Nothing
 */
void class_info(Elf64_Ehdr *elfheader, char *elf_secname)
{
	int i = 0;

	magic_bytes(elfheader, "  Magic:");
	printf("%s", elf_secname);
	while (i < 29)
	{
		putchar(' ');
		i++;
	}
	switch (elfheader->e_ident[EI_CLASS])
	{
		case ELFCLASS32:
			puts("ELF32");
			break;
		case ELFCLASS64:
			puts("ELF64");
			break;
		default:
			printf("invalid: %c\n", elfheader->e_ident[EI_CLASS]);
	}
}

/**
 * data_info - prints the order("endian") in which bits are arranged
 * @elfheader: the elf header that will be read from the
 * first 16 bytes of the file
 * @elf_secname: the section name
 * Return: Nothing
 */
void data_info(Elf64_Ehdr *elfheader, char *elf_secname)
{
	int i = 0;

	class_info(elfheader, "  Class:");
	printf("%s", elf_secname);
	while (i < 30)
	{
		putchar(' ');
		i++;
	}

	switch (elfheader->e_ident[EI_DATA])
	{
		case ELFDATA2LSB:
			puts("2's complement, little endian");
			break;
		case ELFDATA2MSB:
			puts("2's complement, big endian");
			break;
		default:
			printf("<unknown: %d>\n", elfheader->e_ident[EI_DATA]);
	}
}

/**
 * version_info - prints the version of the ELF's machine
 * @elfheader: the elf header that will be read from the
 * first 16 bytes of the file
 * @elf_secname: the section name
 * Return: Nothing
 */
void version_info(Elf64_Ehdr *elfheader, char *elf_secname)
{
	int i = 0;

	data_info(elfheader, "  Data:");
	printf("%s", elf_secname);
	while (i < 27)
	{
		putchar(' ');
		i++;
	}
	switch (elfheader->e_ident[EI_VERSION])
	{
		case EV_NONE:
			printf("%d (invalid)\n", elfheader->e_ident[EI_VERSION]);
			break;
		case EV_CURRENT:
			printf("%d (current)\n", elfheader->e_ident[EI_VERSION]);
			break;
		default:
			break;
	}
}

/**
 * osabi_info - prints the Operating system's and abi's name of the machine
 * @elfheader: the elf header that will be read from the
 * first 16 bytes of the file
 * @elf_secname: the section name
 * Return: Nothing
 */
void osabi_info(Elf64_Ehdr *elfheader, char *elf_secname)
{
	int i = 0;

	version_info(elfheader, "  Version:");
	printf("%s", elf_secname);
	while (i < 28)
	{
		putchar(' ');
		i++;
	}

	switch (elfheader->e_ident[EI_OSABI])
	{
		case 0:
			puts("UNIX - System V");
			break;
		case ELFOSABI_HPUX:
			puts("HP-UX");
			break;
		case ELFOSABI_NETBSD:
			puts("UNIX - NetBSD");
			break;
		case ELFOSABI_LINUX:
			puts("UNIX - Linux");
			break;
		case ELFOSABI_SOLARIS:
			puts("UNIX - Solaris");
			break;
		case ELFOSABI_IRIX:
			puts("UNIX - IRIX");
			break;
		case ELFOSABI_FREEBSD:
			puts("UNIX - FreeBSD");
			break;
		case ELFOSABI_TRU64:
			puts("UNIX - TRU64");
			break;
		case ELFOSABI_ARM:
			puts("ARM");
			break;
		case ELFOSABI_STANDALONE:
			puts("Stand-alone (embedded)");
			break;
		default:
			printf("<unknown: %02x>\n", elfheader->e_ident[EI_OSABI]);
	}
}

/**
 * abiVersion_info - prints the abi's version of the ELF's machine
 * @elfheader: the elf header that will be read from the
 * first 16 bytes of the file
 * @elf_secname: the section name
 * Return: Nothing
 */
void abiVersion_info(Elf64_Ehdr *elfheader, char *elf_secname)
{
	int i = 0;

	osabi_info(elfheader, "  OS/ABI:");
	printf("%s", elf_secname);
	while (i < 23)
	{
		putchar(' ');
		i++;
	}
	printf("%d\n", elfheader->e_ident[EI_ABIVERSION]);
}

/**
 * type_info - prints the type of the ELF file
 * @elfheader: the elf header that will be read from the
 * first 16 bytes of the file
 * @elf_secname: the section name
 * Return: Nothing
 */
void type_info(Elf64_Ehdr *elfheader, char *elf_secname)
{
	int i = 0;

	abiVersion_info(elfheader, "  ABI Version:");
	printf("%s", elf_secname);
	while (i < 30)
	{
		putchar(' ');
		i++;
	}

	switch (elfheader->e_type)
	{
		case ET_NONE:
			puts("NONE (unknown type)");
			break;
		case ET_REL:
			puts("REL (Relocatable file)");
			break;
		case ET_EXEC:
			puts("EXEC (Executable file)");
			break;
		case ET_DYN:
			puts("DYN (Shared object file)");
			break;
		case ET_CORE:
			puts("CORE (Core file)");
			break;
		default:
			break;

	}
}

/**
 * entryPointAddr_info - prints the entry address in hex format
 * @elfheader: the elf header that will be read from the
 * first 16 bytes of the file
 * @elf_secname: the section name
 * Return: Nothing
 */
void entryPointAddr_info(Elf64_Ehdr *elfheader, char *elf_secname)
{
	int i = 0;

	type_info(elfheader, "  Type:");
	printf("%s", elf_secname);
	while (i < 15)
	{
		putchar(' ');
		i++;
	}

	printf("%#lx\n", elfheader->e_entry);
}

/**
 * main - displays the information contained in the ELF header
 * at the start of an ELF file
 * @argc: number of cmdline arguments passed to the function
 * which must be 2 (progname elf-file_name)
 * @argv: cmd line argument passed, which must be an elf-file name
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	Elf64_Ehdr *elfheader;
	size_t headersize = sizeof(Elf64_Ehdr);
	int fd, bytes;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s ELFfile\n", argv[0]);
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (!fd)
	{
		dprintf(STDERR_FILENO, "Error: failed to open file: %s\n", argv[1]);
		exit(98);
	}

	elfheader = malloc(headersize);
	bytes = read(fd, elfheader, headersize);

	if (bytes == -1 || elfheader->e_ident[0] != 0x7f)
	{
		dprintf(STDERR_FILENO, "%s: is not an elf file\n", argv[1]);
		close(fd);
		free(elfheader);
		exit(98);
	}
	printf("ELF Header:\n");

	/* All functions called in one */
	entryPointAddr_info(elfheader, "  Entry point address:");

	close(fd);
	free(elfheader);

	return (0);
}
