#############################################################################
# Makefile for building: make_video_form_pic_use_x264
# Generated by qmake (2.01a) (Qt 4.8.2) on: Thu Jul 19 14:40:09 2012
# Project:  make_video_form_pic_use_x264.pro
# Template: app
# Command: /usr/bin/qmake-qt4 -spec /usr/lib/qt4/mkspecs/linux-g++ CONFIG+=debug -o Makefile make_video_form_pic_use_x264.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = 
CFLAGS        = -pipe -g -Wall -W $(DEFINES)
CXXFLAGS      = -pipe -g -Wall -W $(DEFINES)
INCPATH       = -I/usr/lib/qt4/mkspecs/linux-g++ -I. -I/usr/local/include
LINK          = g++
LFLAGS        = 
LIBS          = $(SUBLIBS)   -L/usr/local/lib -lm -lpthread -lx264 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/bin/qmake-qt4
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = 
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = main.c \
		convert_csp.c 
OBJECTS       = main.o \
		convert_csp.o
DIST          = /usr/lib/qt4/mkspecs/common/unix.conf \
		/usr/lib/qt4/mkspecs/common/linux.conf \
		/usr/lib/qt4/mkspecs/common/gcc-base.conf \
		/usr/lib/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/lib/qt4/mkspecs/common/g++-base.conf \
		/usr/lib/qt4/mkspecs/common/g++-unix.conf \
		/usr/lib/qt4/mkspecs/qconfig.pri \
		/usr/lib/qt4/mkspecs/features/qt_functions.prf \
		/usr/lib/qt4/mkspecs/features/qt_config.prf \
		/usr/lib/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/lib/qt4/mkspecs/features/default_pre.prf \
		/usr/lib/qt4/mkspecs/features/debug.prf \
		/usr/lib/qt4/mkspecs/features/default_post.prf \
		/usr/lib/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/lib/qt4/mkspecs/features/warn_on.prf \
		/usr/lib/qt4/mkspecs/features/resources.prf \
		/usr/lib/qt4/mkspecs/features/uic.prf \
		/usr/lib/qt4/mkspecs/features/yacc.prf \
		/usr/lib/qt4/mkspecs/features/lex.prf \
		/usr/lib/qt4/mkspecs/features/include_source_dir.prf \
		make_video_form_pic_use_x264.pro
QMAKE_TARGET  = make_video_form_pic_use_x264
DESTDIR       = 
TARGET        = make_video_form_pic_use_x264

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET):  $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)
	{ test -n "$(DESTDIR)" && DESTDIR="$(DESTDIR)" || DESTDIR=.; } && test $$(gdb --version | sed -e 's,[^0-9]\+\([0-9]\)\.\([0-9]\).*,\1\2,;q') -gt 72 && gdb --nx --batch --quiet -ex 'set confirm off' -ex "save gdb-index $$DESTDIR" -ex quit '$(TARGET)' && test -f $(TARGET).gdb-index && objcopy --add-section '.gdb_index=$(TARGET).gdb-index' --set-section-flags '.gdb_index=readonly' '$(TARGET)' '$(TARGET)' && rm -f $(TARGET).gdb-index || true

Makefile: make_video_form_pic_use_x264.pro  /usr/lib/qt4/mkspecs/linux-g++/qmake.conf /usr/lib/qt4/mkspecs/common/unix.conf \
		/usr/lib/qt4/mkspecs/common/linux.conf \
		/usr/lib/qt4/mkspecs/common/gcc-base.conf \
		/usr/lib/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/lib/qt4/mkspecs/common/g++-base.conf \
		/usr/lib/qt4/mkspecs/common/g++-unix.conf \
		/usr/lib/qt4/mkspecs/qconfig.pri \
		/usr/lib/qt4/mkspecs/features/qt_functions.prf \
		/usr/lib/qt4/mkspecs/features/qt_config.prf \
		/usr/lib/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/lib/qt4/mkspecs/features/default_pre.prf \
		/usr/lib/qt4/mkspecs/features/debug.prf \
		/usr/lib/qt4/mkspecs/features/default_post.prf \
		/usr/lib/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/lib/qt4/mkspecs/features/warn_on.prf \
		/usr/lib/qt4/mkspecs/features/resources.prf \
		/usr/lib/qt4/mkspecs/features/uic.prf \
		/usr/lib/qt4/mkspecs/features/yacc.prf \
		/usr/lib/qt4/mkspecs/features/lex.prf \
		/usr/lib/qt4/mkspecs/features/include_source_dir.prf
	$(QMAKE) -spec /usr/lib/qt4/mkspecs/linux-g++ CONFIG+=debug -o Makefile make_video_form_pic_use_x264.pro
/usr/lib/qt4/mkspecs/common/unix.conf:
/usr/lib/qt4/mkspecs/common/linux.conf:
/usr/lib/qt4/mkspecs/common/gcc-base.conf:
/usr/lib/qt4/mkspecs/common/gcc-base-unix.conf:
/usr/lib/qt4/mkspecs/common/g++-base.conf:
/usr/lib/qt4/mkspecs/common/g++-unix.conf:
/usr/lib/qt4/mkspecs/qconfig.pri:
/usr/lib/qt4/mkspecs/features/qt_functions.prf:
/usr/lib/qt4/mkspecs/features/qt_config.prf:
/usr/lib/qt4/mkspecs/features/exclusive_builds.prf:
/usr/lib/qt4/mkspecs/features/default_pre.prf:
/usr/lib/qt4/mkspecs/features/debug.prf:
/usr/lib/qt4/mkspecs/features/default_post.prf:
/usr/lib/qt4/mkspecs/features/unix/gdb_dwarf_index.prf:
/usr/lib/qt4/mkspecs/features/warn_on.prf:
/usr/lib/qt4/mkspecs/features/resources.prf:
/usr/lib/qt4/mkspecs/features/uic.prf:
/usr/lib/qt4/mkspecs/features/yacc.prf:
/usr/lib/qt4/mkspecs/features/lex.prf:
/usr/lib/qt4/mkspecs/features/include_source_dir.prf:
qmake:  FORCE
	@$(QMAKE) -spec /usr/lib/qt4/mkspecs/linux-g++ CONFIG+=debug -o Makefile make_video_form_pic_use_x264.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/make_video_form_pic_use_x2641.0.0 || $(MKDIR) .tmp/make_video_form_pic_use_x2641.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/make_video_form_pic_use_x2641.0.0/ && (cd `dirname .tmp/make_video_form_pic_use_x2641.0.0` && $(TAR) make_video_form_pic_use_x2641.0.0.tar make_video_form_pic_use_x2641.0.0 && $(COMPRESS) make_video_form_pic_use_x2641.0.0.tar) && $(MOVE) `dirname .tmp/make_video_form_pic_use_x2641.0.0`/make_video_form_pic_use_x2641.0.0.tar.gz . && $(DEL_FILE) -r .tmp/make_video_form_pic_use_x2641.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: 

####### Compile

main.o: main.c main.h
	$(CC) -c $(CFLAGS) $(INCPATH) -o main.o main.c

convert_csp.o: convert_csp.c 
	$(CC) -c $(CFLAGS) $(INCPATH) -o convert_csp.o convert_csp.c

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

