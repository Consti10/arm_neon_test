# Test on rpi

_CFLAGS := $(CFLAGS) -O2 #-mfpu=neon -march=armv7-a -marm

all: hello_neon


hello_neon: hello_neon.c
	$(CC) $(_CFLAGS) -o hello_neon hello_neon.c

clean:
	rm -rf hello_neon