GENCCODE_ASSEMBLY_TYPE=
SO=dll
SOBJ=dll
A=lib
LIBPREFIX=
LIB_EXT_ORDER=64.dll
COMPILE=icl   -DHAVE_DLOPEN=0 -DU_HAVE_MMAP=0 -DU_HAVE_POPEN=0 -DU_HAVE_STRTOD_L=0  -DU_RELEASE=1 -D_CRT_SECURE_NO_DEPRECATE -DU_ATTRIBUTE_DEPRECATED= -DWIN32 -DCYGWINMSVC -W4 -W4   -GF -nologo -utf-8 -c
LIBFLAGS=-I/usr/local/include  
GENLIB=XILINK.EXE -DLL  -nologo
LDICUDTFLAGS=-base:0x4ad00000 -NOENTRY
LD_SONAME=-IMPLIB:
RPATH_FLAGS=
BIR_LDFLAGS=
AR=XILIB.EXE
ARFLAGS=-nologo
RANLIB=ls -s
INSTALL_CMD=/bin/install -c
