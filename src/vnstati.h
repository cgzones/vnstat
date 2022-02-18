#ifndef VNSTATI_H
#define VNSTATI_H

typedef struct {
	int cache, help;
	int32_t limit;
	char interface[MAXIFPARAMLEN], filename[512], cfgfile[512];
	FILE *pngout;
} IPARAMS;

void initiparams(IPARAMS *p);
void showihelp(IPARAMS *p);
void parseargs(IPARAMS *p, IMAGECONTENT *ic, int argc, char **argv);
void validateinput(IPARAMS *p);
void handlecaching(IPARAMS *p, IMAGECONTENT *ic);
void handledatabase(IPARAMS *p, IMAGECONTENT *ic);
void validateoutput(IPARAMS *p);
void writeoutput(IPARAMS *p, IMAGECONTENT *ic);
#if HAVE_DECL_GDIMAGEFILE
void showsupportedfileextensions(void);
#endif

#endif
