build:
	clang++ index.cpp -o hello_world

run:
	make build && ./hello_world
