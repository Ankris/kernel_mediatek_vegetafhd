CUR_DIR=$(pwd)

rm flasher/zImage
./makeMtk -t vegetafhd n k
cd $CUR_DIR
cp out/Download/flash/kernel_vegetafhd.bin ./flasher/zImage
cd flasher; zip -r ../out/flasher.zip $(pwd); cd ..;
