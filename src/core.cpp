#include	"core.h"

const char *options = "rwf:";

struct args_t global_args;

void display_usage (FILE* _stream)
{
	fprintf (_stream,
		"\n"
	);
}

int main (int argc, char *argv[]) {
	int arg;

	while ((arg = getopt (argc, argv, options)) != -1)
		switch (arg) {
			case 'r':
				global_args.fmode = READ_ONLY;
				break;

			case 'w':
				global_args.fmode = READ_WRITE;
				break;

			case 'f':
				global_args.file_path = optarg;
				break;
			
			default:
				break;
		}

	

	return 0;
}