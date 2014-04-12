Summary
=======

This repo is an adoption of `squashfs-tools` for Mac OS X. It was done to be able to unpack Mikrotik's *.npk files, which contain a SquashFS stream inside.

Some additional libraries may be required for building, like `xz`, `lzo2`. They can be installed with MacPorts.

Compilation is performed by running `make` command.

The original squashfs-tools is taken from [git://git.kernel.org/pub/scm/fs/squashfs/squashfs-tools.git](git://git.kernel.org/pub/scm/fs/squashfs/squashfs-tools.git). 
