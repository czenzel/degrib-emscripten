#!/bin/sh

export CC=emcc
export AR=emar

emconfigure ./configure --host none
emmake make
