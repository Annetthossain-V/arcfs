KMOD = arcfs
SRCS != find src/ -name *.c 
OBJ != find src/ -name *.o

CFLAGS += -I/usr/src/sys -I/usr/obj/usr/src/amd64.amd64/sys/GENERIC/

clean:
	rm -v $(OBJ)

.include <bsd.kmod.mk>
