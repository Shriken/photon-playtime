SRC=hello-world.ino

build: $(SRC)
	particle compile photon $(SRC)

flash: build
	particle flash --usb *.bin
	rm *.bin

clean:
	rm -f *.bin

.PHONY: build flash clean
