KMOD = arcfs
SRCS != ls src/*.c

CFLAGS += -I/usr/src/sys -I/usr/obj/usr/src/amd64.amd64/sys/GENERIC/

.include <bsd.kmod.mk>
