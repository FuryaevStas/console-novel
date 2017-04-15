#ifndef	_EDITOR_H_
#define	_EDITOR_H_

#include	"core.h"

class reditor {
private:
	// Windows, parameters and so on
	//
public:
	reditor(FILE* _path, fmode_t _fmode);
	~reditor();

	void init();
	void render();	
};

class editor : reditor {
private:
	void save();		// Methods for text manipulating
public:

};

#endif//_EDITOR_H_