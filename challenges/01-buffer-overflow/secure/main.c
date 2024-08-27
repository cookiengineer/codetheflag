#include <stdio.h>
#include <unistd.h>

int overflowme() {

	char buffer[200];

	int input;
	input = read(0, buffer, 200);

	printf("\n[+] user supplied %d bytes!", input);
	printf("\n[+] buffer content:\n%s", buffer);

	return 0;

}

int main(int argc, char *argv[]) {

	overflowme();

	return 0;

}
