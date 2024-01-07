#!/bin/sh

export CC=emcc
export AR=emar
export RANLIB=emranlib

emconfigure ./configure --host none
emmake make
