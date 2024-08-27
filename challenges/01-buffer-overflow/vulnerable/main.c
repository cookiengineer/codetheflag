#include <stdio.h>
#include <unistd.h>

int overflowme() {

	char buffer[200];

	int input;
	input = read(0, buffer, 400); // overflow of 400-200 = 200 bytes

	printf("\n[+] user supplied %d bytes!", input);
	printf("\n[+] buffer content:\n%s", buffer);

	return 0;

}

int main(int argc, char *argv[]) {

	overflowme();

	return 0;

}
