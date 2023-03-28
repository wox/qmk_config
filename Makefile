.PHONY: clean
clean:
	cd qmk_firmware; git clean -df	

.PHONY: clone
clone:
	git clone https://github.com/qmk/qmk_firmware.git

.PHONY: update-qmk
update-qmk: clean
	cd qmk_firmware; git pull; make git-submodule
	ln -s $(shell pwd)/src/keyboards/ferris/keymaps/wox qmk_firmware/keyboards/ferris/keymaps/wox
	ln -s $(shell pwd)/src/keyboards/bad_wings qmk_firmware/keyboards/bad_wings

.PHONY: ferris
ferris:
	cd qmk_firmware; make ferris/0_2:wox:flash

.PHONY: badwings
badwings:
	cd qmk_firmware; make bad_wings:wox:flash