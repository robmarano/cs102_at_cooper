#!/usr/bin/env bash

make -f Makefile.ascii

APP=ascii
EXE=./${APP}.exe
${EXE} | tee -a ${APP}.log

