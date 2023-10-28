default:
	make build && ./hello_world

build:
	clang++ -g -std=c++20 ./*.cpp -o hello_world
