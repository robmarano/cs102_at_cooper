#
# krevma/
#

TOPTARGETS=all clean

SUBDIRS=$(wildcard */.)

.PHONY: $(TOPTARGETS) $(SUBDIRS) clean

$(TOPTARGETS): $(SUBDIRS)
	
$(SUBDIRS):
	+$(MAKE) -C $@ $(MAKECMDGOALS)
