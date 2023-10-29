default: compile-dates compile-logger
	make build && \
		rm -rf *.o && \
		./hello_world

compile-dates:
	clang++ \
		-g \
		-std=c++20 \
		-c lib/dates/dates.cpp \
		-o dates.o

compile-logger:
	clang++ \
		-g \
		-std=c++20 \
		-c lib/logger/logger.cpp \
		-o logger.o

build:
	clang++ \
		-g \
		-std=c++20 \
		main.cpp *.o \
		-o hello_world

clean:
	rm -rf hello_world.dSYM hello_world *.o
