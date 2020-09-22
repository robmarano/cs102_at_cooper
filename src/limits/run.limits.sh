#!/usr/bin/env bash

make -f Makefile.limits

APP=limits
EXE=./${APP}.exe
${EXE} | tee -a ${APP}.log

