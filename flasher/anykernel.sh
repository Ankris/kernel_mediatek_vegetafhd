# AnyKernel2 Ramdisk Mod Script
# osm0sis @ xda-developers

## AnyKernel setup
# begin properties
properties() {
kernel.string=Cold Kernel
owner.name=Ankris
do.cleanup=1
do.cleanuponabort=0
} # end properties

# shell variables
block=/dev/bootimg;
is_slot_device=0;


## AnyKernel methods (DO NOT CHANGE)
# import patching functions/variables - see for reference
. /tmp/anykernel/tools/ak2-core.sh;

## AnyKernel install
dump_boot;

write_boot;

## end install

