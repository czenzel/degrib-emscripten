#!/bin/sh

export CC=emcc
export AR=emar
export RANLIB=emranlib

emconfigure ./configure --host none
emmake make

cp degrib/degrib /build/degrib.js
cp degrib/degrib.bc /build/degrib.bc

cp degrib/degrib_DP /build/degrib_DP.js
cp degrib/degrib_DP.bc /build/degrib_DP.bc