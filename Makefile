#
# Makefile for goc
#

include config.mk

OBJS=goc


all: goc

goc: goc.c


clean:
	@echo cleaning
	@$(RM) $(OBJS)

