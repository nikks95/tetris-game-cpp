


all: lib models game

lib: 
	$(MAKE) -C lib clean
	$(MAKE) -C lib

models:
	$(MAKE) -C models clean
	$(MAKE) -C models

game: 
	$(MAKE) -C game clean
	$(MAKE) -C game



clean: 
	$(MAKE) -C lib clean
	$(MAKE) -C models clean
	$(MAKE) -C game clean

# Phony targets
.PHONY: all lib models game clean