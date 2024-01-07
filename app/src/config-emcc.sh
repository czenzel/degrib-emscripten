#!/bin/sh

export CC=emcc
export AR=emar

emconfigure ./configure --host none
emmake make

#configure CFLAGS="-O3" TCL_PREFIX=/usr/local/tcltk
#configure CFLAGS="-O3" TCL_PREFIX=/usr/local/tcltk --with-halo
#configure CFLAGS="-O3" --with-halo CC=gcc34
