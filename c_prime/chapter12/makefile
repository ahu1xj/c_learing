CFLAGS=-Wall -g
LDFLAGS = $(shell grep -q "#include <math.h>" $(TARGET) && echo "-lm")
compile:
	$(CC) $(CFLAGS) $(TARGET) $(SUPPORT) -o $(basename $(TARGET)).out $(LDFLAGS)
run:compile
	./$(basename $(TARGET)).out
clean:
	rm -f $(basename $(TARGET)).out $(basename $(TARGET)).o
.PHPNY:
	compile run clean
