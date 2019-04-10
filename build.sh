#!/bin/sh

echo "dist clean..."

make distclean

echo "clen done..."

echo "qmake..."
qmake 

echo "making..."

make -j4

echo "scp file to remote..."
scp src/src root@192.168.1.244:/home/


