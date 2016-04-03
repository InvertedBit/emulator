all:
	cd src && g++ main.cpp Computer.cpp Mainboard.cpp Socket.cpp Pin.cpp -o ../bin/emulator
