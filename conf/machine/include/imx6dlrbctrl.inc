
# Provides the i.MX6 SABRE SD common settings

require conf/machine/include/imx-base.inc
require conf/machine/include/tune-cortexa9.inc

SERIAL_CONSOLE = "115200 ttymxc0"



KERNEL_MODULE_AUTOLOAD += "fec smsc" 

MACHINE_ESSENTIAL_EXTRA_RRECOMMENDS += " \
	kernel-module-fec \
	kernel-module-smsc \
	kernel-module-hid \
	kernel-module-usbhid \
	kernel-module-hid-genreic \
	kernel-module-nls-cp936 \
	kernel-module-nls-utf8 \ "

