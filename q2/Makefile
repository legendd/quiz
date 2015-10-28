CC ?= gcc
CFLAGS_common ?= -O0 -Wall -std=gnu99
ARRAY = "cfjpv"
INPUT := a b c d e f g h i j k l m n o p q r s t u v w x y z 
EXEC = iterative recursive
all: $(EXEC)

iterative: iterative.c
	$(CC) $(CFLAGS_common) -o $@ $@.c

recursive: recursive.c
	$(CC) $(CFLAGS_common) -o $@ $@.c

run_ite:
	$(foreach var,$(INPUT),./iterative $(ARRAY) $(var) ;)
run_rec:
	$(foreach var,$(INPUT),./recursive $(ARRAY) $(var) ;)

clean:
	$(RM) $(EXEC) *.o perf.* *.txt
	
