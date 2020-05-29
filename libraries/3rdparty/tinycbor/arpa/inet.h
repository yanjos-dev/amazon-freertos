
#ifndef ntohs
#define ntohs(x) (((uint16_t)x >> 8) | ((uint16_t)x << 8))
#endif

#ifndef htons
#define htons ntohs
#endif

#ifndef ntohl
#define ntohl(x) ((((uint32_t)x >> 24) & 0xff) | (((uint32_t)x >> 8) & 0xff00) | (((uint32_t)x & 0xff00) << 8) | (((uint32_t)x & 0xff) << 24))
#endif

#ifndef ntonl
#define htonl ntohl
#endif
