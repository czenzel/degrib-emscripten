SHELL = /bin/bash

top_srcdir = ..

CC = /mnt/c/Users/chris/Linux/emsdk_portable/emscripten/master/emcc
STRIP = /usr/bin/strip
STRIP_FLAGS = -s
STD_FLAGS =  -Wall -fsigned-char -pedantic
EXEEXT = 

STD_DEF = -DSIZEOF_LONG_INT=8   
STD_INC =  -I${top_srcdir}/libaat

STD_LIB =  -L${top_srcdir}/libaat/ -laat -L/usr/lib/ -lm

PRJ_NAME = xyz2shp

CFLAGS = $(STD_FLAGS) $(STD_DEF) $(STD_INC)
MAINFLAGS = $(CFLAGS) -DPKGVERS=\"2.07\" -DPKGDATE=\"20160824\" -DPKGNAME=\"xyz2shp\"

############################
# FILES
############################
SOURCE = xyzuser.c

OBJECTS = $(SOURCE:.c=.o)

HEADERS = xyzuser.h 

MAIN = xyz2shp.c

LIB_DEPENDS =  ${top_srcdir}/libaat/libaat.a

############################
# TARGETS
############################
all: $(PRJ_NAME)

$(PRJ_NAME): $(OBJECTS) $(MAIN) $(LIB_DEPENDS) $(HEADERS)
	$(CC) $(MAIN) $(MAINFLAGS) $(LD_FLAGS) $(OBJECTS) $(STD_LIB) -o $(PRJ_NAME)
	# $(STRIP) $(STRIP_FLAGS) $(PRJ_NAME)$(EXEEXT)

install: $(PRJ_NAME)
	cp $(PRJ_NAME)$(EXEEXT) ../../bin

clean:
	rm -f *.o *.bak *.BAK *.obj
	rm -f $(PRJ_NAME)$(EXEEXT)

distclean: clean
	rm -r -f Makefile

# DIST_DIR is usually set by the calling Makefile... Set a default here.
package = degrib-2.07
DIST_DIR = ./$(package)
DISTRIB = $(SOURCE) $(HEADERS) $(MAIN) Makefile.in
dist:
	@if [ ! -d $(DIST_DIR) ]; then mkdir $(DIST_DIR); fi
	@for file in $(DISTRIB); do cp $$file $(DIST_DIR); done

############################
# SUFFIXES
############################
.c.o : $(HEADERS)
	$(CC) -c $(CFLAGS) $<
