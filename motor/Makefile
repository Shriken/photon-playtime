SRC=transistor.ino

build: $(SRC)
	particle compile photon $(SRC)

flash: build
	particle flash --usb *.bin
	rm -f *.bin

clean:
	rm -f *.bin

.PHONY: build flash clean
