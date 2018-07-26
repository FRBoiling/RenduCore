AUX_SOURCE_DIRECTORY(. core_Src)
AUX_SOURCE_DIRECTORY(network network_Src)
AUX_SOURCE_DIRECTORY(malloc malloc_Src)

ADD_LIBRARY(core ${core_Src} ${network_Src} ${malloc_Src} malloc/zmalloc.c malloc/zmalloc.h)

