
SYSLIB = -lm
EX_INCS              =
LDFLAGS              =
CC         = gcc
#OPTIONS =  -g -Wall
OPTIONS =  -g
OBJS = test.o wilksFormula.o
PROGRAM=tests
CFLAGS = $(OPTIONS) $(EX_INCS)
$(PROGRAM):$(OBJS)
	rm -f $@
	$(CC) -o $@ $(OBJS) $(CFLAGS) $(LDFLAGS) $(SYSLIB)
