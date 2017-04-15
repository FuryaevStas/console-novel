#ifndef	_CORE_H_
#define	_CORE_H_

#include	<stdio.h>
#include	<stdlib.h>
#include	<string.h>
#include	<unistd.h>
#include	<pthread.h>

#include	<curses.h>

#include	"debug.h"

enum fmode_t { READ_ONLY, READ_WRITE };

struct args_t {
	fmode_t fmode;			// -r or -w options
	char *file_path;		// -f option

	args_t () {
		fmode		= READ_ONLY;
		file_path	= NULL;
	}
};

extern struct args_t global_args;

#endif//_CORE_H_