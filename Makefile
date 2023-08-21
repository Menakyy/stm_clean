install:
	mkdir build

delete:
	rm -rf build

prepare:
	cmake -S . -B build

check: 
	cmake --build build/ -j

testing:
	cmake -S . -B build/ -DTESTING=ON
	cmake --build build/ -j

all: delete install prepare check