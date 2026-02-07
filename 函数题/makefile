CFLAGS = -Wall -g
compile:
	$(CC) $(CFLAGS) $(TARGET) -o $(basename $(TARGET)).out
run:compile
	./$(basename $(TARGET)).out
clean:
	rm -f $(basename $(TARGET)).out $(basename $(TARGET)).o
.PHONY: compile clean run
