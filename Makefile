default:
	make compile-logger & make compile-dates \
		&& make build \
		&& ./hello_world

compile-logger:
	clang++ \
		-g \
		-std=c++20 \
		-c lib/logger/logger.cpp \
		-o logger.o

compile-dates:
	clang++ \
		-g \
		-std=c++20 \
		-c lib/dates/dates.cpp \
		-o dates.o

build:
	clang++ \
		-g \
		-std=c++20 main.cpp *.o \
		-o hello_world \
		&& rm -f *.o

clean:
	rm -rf hello_world.dSYM hello_world *.o
