default:
	make build && \
		rm -rf *.o && \
		./hello_world

build:
	clang++ \
		-g \
		-std=c++20 \
		main.cpp \
		-o hello_world

clean:
	rm -rf hello_world.dSYM hello_world *.o
