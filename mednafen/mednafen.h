#ifndef _MEDNAFEN_H
#define _MEDNAFEN_H

#include "mednafen-types.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define trio_snprintf snprintf /*compatibility with mednafen on libretro*/

#define _(String) (String)

#include "math_ops.h"
#include "git.h"
#include "mednafen-endian.h"
#include "settings.h"

#ifdef _WIN32
#define strcasecmp _stricmp
#endif

#define GET_FDATA_PTR(fp) (fp->data)
#define GET_FSIZE_PTR(fp) (fp->size)
#define GET_FEXTS_PTR(fp) (fp->ext)

extern MDFNGI *MDFNGameInfo;

void MDFN_DispMessage(const char *format, ...);

void MDFN_LoadGameCheats(void *override);
void MDFN_FlushGameCheats(int nosave);


#endif
