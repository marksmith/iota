#ifndef IOTA_H
#define IOTA_H

#ifdef __cplusplus
extern "C" {
#endif

struct iota
{
	int (*recv)(struct iota *, void *, size_t);
};

#define IOTA_EXEC 0
#define IOTA_MESG SIZE_MAX

static __inline__
int
iota_send(struct iota *iota, void *data, size_t size)
{
	return iota->recv(iota, data, size);
}

#ifdef __cplusplus
}
#endif

#endif /* IOTA_H */
