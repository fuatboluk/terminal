all: terminal

terminal: src/terminal.c
	gcc `pkg-config --cflags --libs gtk+-3.0 vte-2.91` -o terminal $^

.PHONY: clean

clean:
	rm -f src/terminal