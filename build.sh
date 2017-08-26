CUR_DIR=$(pwd)
MAKEJOBS=1

./makeMtk -t vegetafhd n k
cd $CUR_DIR
cp out/target/product/vegetafhd/obj/KERNEL_OBJ/arch/arm/boot/zImage ./zImage
