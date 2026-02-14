CFLAGS = -Wall -g
#加入寻找逻辑，有就加上-lm
LDFLAGS = $(shell grep -q "#include <math.h>" $(TARGET) && echo "-lm")
compile:
	$(CC) $(CFLAGS) $(TARGET) -o $(basename $(TARGET)).out $(LDFLAGS)
run:compile
	./$(basename $(TARGET)).out
clean:
	rm -f $(basename $(TARGET)).out $(basename $(TARGET)).o
.PHONY: compile clean run
