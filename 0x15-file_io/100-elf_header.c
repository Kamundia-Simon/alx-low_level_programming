#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <elf.h>

/**
 * _elf - checks if file is elf type
 * @id: pointer to array
 */
void _elf(char *id)
{
	if (id[0] != 0x7f || id[1] != 'E' || id[2] != 'L' || id[3] != 'F')
		dprintf(STDERR_FILENO, "Error: Wrong file type\n"), exit(98);
}

/**
 * _magic - print elf magic
 * @id: pointer to array
 */
void _magic(char *id)
{
	int i;

	printf("ELF Header:\n  Magic:   ");

	for (i = 0; i < 15; i++)
		printf("%02x ", (unsigned int)id[i]);
	printf("%02x", (unsigned int)id[i]);

	printf("\n");
}
/**
 * _class - print elf class
 *@id: pointer to array
 * @x64: address
 */
void _class(char *id, int x64)
{
	if (id[4] != 1 && id[4] != 2)
	{
		printf("<unknown: %02hx>\n", id[4]);
		return;
	}
	printf("  %-35s", "Class:");
	if (x64 == 0)
		printf("ELF32\n");
	else if (x64 == 1)
		printf("ELF64\n");
}
/**
 * _data - print elf data
 * @id: pointer to array
 */
void _data(char *id)
{
	printf("  %-35s", "Data:");
	printf("2's complement, ");
	if (id[5] == 1)
		printf("little endian\n");
	else if (id[5] == 2)
		printf("big endian\n");
	else
		printf("<unknown: %02hx>\n", id[5]);
}
/**
 * _version - print elf version
 * @id: pointer to array
 */
void _version(char *id)
{
	printf("  %-35s", "Version:");
	if (id[6] == EV_CURRENT)
	{
		printf("%d (current)\n", id[6]);
	}
	else if (id[6] != EV_CURRENT)
	{
		printf("%d\n", id[6]);
	}
}
/**
 * _osabi - print elf OS/ABI
 * @id: poiter to array
 */
void _osabi(char *id)
{
	printf("  %-35s", "OS/ABI:");

	if (id[7] == 0)
		printf("UNIX - System V\n");
	else if (id[7] == 1)
		printf("UNIX - HP-UX\n");
	else if (id[7] == 2)
		printf("UNIX - NetBSD\n");
	else if (id[7] == 3)
		printf("UNIX - Linux\n");
	else if (id[7] == 4)
		printf("UNIX - GNU Hurd\n");
	else if (id[7] == 6)
		printf("UNIX - Solaris\n");
	else if (id[7] == 7)
		printf("UNIX - AIX\n");
	else if (id[7] == 8)
		printf("UNIX - IRIX\n");
	else if (id[7] == 9)
		printf("UNIX - FreeBSD\n");
	else if (id[7] == 10)
		printf("UNIX - Tru64\n");
	else if (id[7] == 11)
		printf("UNIX - Novell Modesto\n");
	else if (id[7] == 12)
		printf("UNIX - OpenBSD\n");
	else if (id[7] == 13)
		printf("UNIX - Open VMS\n");
	else if (id[7] == 14)
		printf("UNIX - NonStop Kernel\n");
	else if (id[7] == 15)
		printf("UNIX - AROS\n");
	else if (id[7] == 16)
		printf("UNIX - Fenix OS\n");
	else if (id[7] == 17)
		printf("UNIX - CloudABI\n");
	else
		printf("<unknown: %02hx>\n", id[7]);
}
/**
 * _abi - checks abi version
 * @id: header
 */
void _abi(char *id)
{
	printf("  %-35s", "ABI Version:");
	printf("%d\n", id[8]);
}
/**
 * _type - print elf type
 * @id: pointer to array
 * @x64: adress
 */
void _type(char *id, int x64)
{
	int x = 17;

	(void) x64;

	if (id[5] == 1)
		x = 16;

	printf("  %-35s", "Type:");

	switch (id[x])
	{
		case 0:
			printf("NONE\n");
			break;
		case 1:
			printf("REL (Relocatable file)\n");
			break;
		case 2:
			printf("EXEC (Executable file)\n");
			break;
		case 3:
			printf("DYN (Shared object file)\n");
			break;
		case 4:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown>: %02x\n", id[x]);
	}
}
/**
 * _entry - print elf entry poiny
 * @id: pointer to array
 * @x64: address
 */
void _entry(char *id, int x64)
{
	int x = 27, y;

	printf("  %-35s0x", "Entry point address:");

	if (x64 == 1)
		x = 31;

	if (id[5] == 1)
	{
		/* Little Endian */
		y = x;
		while (id[y] == 0 && y > 24)
			y--;
		printf("%x", id[y]);
		y--;

		while (y >= 24)
		{
			printf("%02x", (unsigned char) id[y]);
			y--;
		}
	}
	else
	{

		y = 24;
		while (id[y] == 0)
			y++;
		printf("%x", id[y]);
		y++;

		while (y <= x)
		{
			printf("%02x", (unsigned char) id[y]);
			y++;
		}
	}
	printf("\n");
}

/**
 * main - displays the information contained in the ELF
 * @argc: Counts the number of parameters that go into main
 * @argv: Pointer of array of pointers containing strings entering main
 * Return: 0
 */

int main(int argc, char **argv)
{
	int fdelf, relf, closecheck, x64 = 0;
	char id[32];

	if (argc != 2)
		dprintf(STDERR_FILENO, "Wrong # of Arguments\n"), exit(98);
	if (argv[1] == 0)
		dprintf(STDERR_FILENO, "Null name\n"), exit(98);
	fdelf = open(argv[1], O_RDONLY);
	if (fdelf == -1)
		dprintf(STDERR_FILENO, "Can't Open File\n"), exit(98);
	relf = read(fdelf, id, 32);
	if (relf == -1)
		dprintf(STDERR_FILENO, "Error Reading File\n"), exit(98);

	_elf(id);

	if (id[4] == 2)
		x64 = 1;

	_magic(id);
	_class(id, x64);
	_data(id);
	_version(id);
	_osabi(id);
	_abi(id);
	_type(id, x64);
	_entry(id, x64);

	closecheck = close(fdelf);

	if (closecheck == -1)
		dprintf(STDERR_FILENO, "Error Closing File\n"), exit(98);

	return (0);
}
