bin_PROGRAMS=test
test_SOURCES=test.c

SPLINT_OPT=+posixlib +gnuextensions +charintliteral

if SPLINT_PRESENT
splint:
	$(SPLINT) -I.. $(SPLINT_OPT) $(test_CPPFLAGS) $(test_SOURCES)
endif