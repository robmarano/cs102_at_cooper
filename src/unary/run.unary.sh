#!/usr/bin/env bash

make -f Makefile.unary

APP=unary
EXE=./${APP}.exe
${EXE} | tee -a ${APP}.log

