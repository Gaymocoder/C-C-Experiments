#ifndef __GCSIO_H__
#define __GCSIO_H__

#ifndef _WIN32
	#include <wchar.h>
#endif

void setNormalLocaleW();

void clearConsole();
void clearStdinBuf();

void gcs_fgetws(wchar_t** wcstr, const size_t MAX_STR_LEN);

#endif
