#ifndef IFLIST_H
#define IFLIST_H

typedef struct iflist {
	char interface[MAXIFLEN];
	uint32_t bandwidth;
	struct iflist *next;
} iflist;

int iflistadd(iflist **ifl, const char *iface, const uint32_t bandwidth);
int iflistsearch(iflist **ifl, const char *iface);
void iflistfree(iflist **ifl);

#endif
