-include ../common.mk

ifeq ($(strip $(PRJ_CROSS)), )
ifeq ($(strip $(VE_OS)), macos)
all:ZLToolKit_build ZLMediaKit_build poco_build ffmpeg_build openssl_build_macos leveldb_build qt_build curl_build protobuf_build live555_build 
else
all:ZLToolKit_build ZLMediaKit_build poco_build ffmpeg_build openssl_build leveldb_build qt_build curl_build protobuf_build  live555_build 
endif

else
all:poco_build_cross ffmpeg_build_cross openssl_build_cross leveldb_build qt_build_cross  qtxmlpatterns_build  curl_build_cross protobuf_build_cross live555_build_cross
endif

clean:distclean
distclean:ZLToolKit_clean ZLMediaKit_clean poco_clean ffmpeg_clean openssl_clean leveldb_clean qt_clean qtxmlpatterns_clean  onvifc_clean protobuf_clean curl_clean live555_clean
ZLMediaKit_build:
	cd ZLMediaKit; mkdir -p build; cd build;cmake .. -DOPENSSL_ROOT_DIR=$(VE_PATH)/output/$(VE_INSTALL_DIR)/ -DCMAKE_CXX_FLAGS="-fpic" -DCMAKE_INSTALL_PREFIX=$(VE_PATH)/output/$(VE_INSTALL_DIR)/; 
	$(MAKE) -C ZLMediaKit/build && $(MAKE) -C ZLMediaKit/build install;

ZLToolKit_build:
	cd ZLToolKit; mkdir -p build; cd build;cmake .. -DOPENSSL_ROOT_DIR=$(VE_PATH)/output/$(VE_INSTALL_DIR)/  -DCMAKE_CXX_FLAGS="-fpic" -DCMAKE_INSTALL_PREFIX=$(VE_PATH)/output/$(VE_INSTALL_DIR)/; 
	$(MAKE) -C ZLToolKit/build && $(MAKE) -C ZLToolKit/build install;

poco_build:
	cd poco; chmod +x ./configure; chmod +x ./build/script/*; ./configure --no-tests --no-samples --omit=Data/ODBC,Data/MySQL,Crypto,MongoDB,NetSSL_OpenSSL,CppUnit,PDF --prefix=$(VE_PATH)/output/$(VE_INSTALL_DIR)/;
	$(MAKE) -C poco && $(MAKE) -C poco install;

poco_build_cross:
	cd poco; chmod +x ./configure; chmod +x ./build/script/*; ./configure --config=ARM-Linux --no-tests --no-samples --omit=Data/ODBC,Data/MySQL,Crypto,MongoDB,NetSSL_OpenSSL,CppUnit,PDF --prefix=$(VE_PATH)/output/$(VE_INSTALL_DIR)/;
	$(MAKE) -C poco && $(MAKE) -C poco install;

ffmpeg_build:
	cd ffmpeg; chmod +x ./configure; chmod +x version.sh; ./configure  --disable-vaapi --disable-programs  --disable-static --enable-shared --prefix=$(VE_PATH)/output/$(VE_INSTALL_DIR)/;
	$(MAKE) -C ffmpeg && $(MAKE) -C ffmpeg install;

ffmpeg_build_cross:
	cd ffmpeg; chmod +x ./configure; chmod +x version.sh; ./configure --enable-cross-compile --cross-prefix=$(VE_CROSS_COMPILER) --arch=arm --target-os=linux --disable-vaapi --disable-programs  --disable-static --enable-shared --prefix=$(VE_PATH)/output/$(VE_INSTALL_DIR)/;
	$(MAKE) -C ffmpeg && $(MAKE) -C ffmpeg install;

openssl_build:
	#cd openssl; chmod +x ./config; chmod +x ./util/pod2mantest; chmod +x ./util/point.sh; ./config --prefix=$(VE_PATH)/output/$(VE_INSTALL_DIR)/ -fPIC;
	cd openssl; chmod +x ./config; chmod +x ./util/pod2mantest; chmod +x ./util/point.sh; ./config --prefix=$(VE_PATH)/output/$(VE_INSTALL_DIR)/ shared;
	$(MAKE) -C openssl && $(MAKE) -C openssl install;
	chmod 777 $(VE_PATH)/output/$(VE_INSTALL_DIR)/lib/libssl*;
	chmod 777 $(VE_PATH)/output/$(VE_INSTALL_DIR)/lib/libcrypto*;

openssl_build_macos:
	cd openssl; chmod +x ./Configure; chmod +x ./util/pod2mantest; chmod +x ./util/point.sh; ./Configure darwin64-x86_64-cc --prefix=$(VE_PATH)/output/$(VE_INSTALL_DIR)/ -fPIC;
	$(MAKE) -C openssl && $(MAKE) -C openssl install_sw;

openssl_build_cross:
	cd openssl; chmod +x ./config; chmod +x ./util/pod2mantest; chmod +x ./util/point.sh; ./config --prefix=$(VE_PATH)/output/$(VE_INSTALL_DIR)/ os/compiler:$(VE_CROSS_COMPILER)gcc  -fPIC;
	$(MAKE) -C openssl && $(MAKE) -C openssl install;

leveldb_build:
	cd leveldb-posix; chmod +x ./build_detect_platform ;
	$(MAKE) -C leveldb-posix CC=$(CC) CXX=$(CPP);
	cp leveldb-posix/out-static/*.a $(VE_PATH)/output/$(VE_INSTALL_DIR)/lib/ 

onvifc_build:
	cd onvifc/prj_linux/ ; qmake .;
	$(MAKE) -C onvifc/prj_linux; 

protobuf_build:
	mkdir -p protobuf/cmake/linux;
	cd protobuf/cmake/linux && cmake -DCMAKE_CXX_FLAGS=-fPIC -DCMAKE_C_FLAGS=-fPIC -Dprotobuf_MSVC_STATIC_RUNTIME=ON -DCMAKE_BUILD_TYPE=Release -Dprotobuf_BUILD_TESTS=OFF -DCMAKE_INSTALL_PREFIX=$(VE_PATH)/output/$(VE_INSTALL_DIR)/  ../;
	$(MAKE) -C protobuf/cmake/linux;
	$(MAKE) -C protobuf/cmake/linux install;
	if  test -e $(VE_PATH)/output/$(VE_INSTALL_DIR)/lib64/libprotobuf.a; then cp $(VE_PATH)/output/$(VE_INSTALL_DIR)/lib64/*  $(VE_PATH)/output/$(VE_INSTALL_DIR)/lib/; fi;

protobuf_build_cross:
	cd protobuf; chmod +x ./configure ; make distclean; ./configure --prefix=$(VE_PATH)/output/host/
	$(MAKE) -C protobuf; 
	$(MAKE) -C protobuf install; 
	cd protobuf; chmod +x ./configure ; make distclean; ./configure --host=$(VE_CROSS_TOOL) CC=$(CC) CXX=$(CPP)  --prefix=$(VE_PATH)/output/$(VE_INSTALL_DIR)/ --with-protoc=$(VE_PATH)/output/host/bin/protoc
	$(MAKE) -C protobuf; 
	$(MAKE) -C protobuf install; 

qt_build:
	cd qt && tar zxvf qtbase-opensource-src-5.7.1.tar.gz ; 
	cd qt/qtbase-opensource-src-5.7.1; chmod +x ./configure ;./configure  -confirm-license -release -make libs -opensource --prefix=$(VE_PATH)/output/$(VE_INSTALL_DIR)/
	$(MAKE) -C qt/qtbase-opensource-src-5.7.1; 
	$(MAKE) -C qt/qtbase-opensource-src-5.7.1 install; 

qt_build_cross:
	cd qt && rm -rf pcre-8.39
	cd qt && unzip pcre-8.39.zip;
	cd qt/pcre-8.39; chmod +x ./configure ; ./configure --enable-pcre16  CC=$(VE_CROSS_COMPILER)gcc --host=$(VE_CROSS_TOOL)  --prefix=$(VE_PATH)/output/$(VE_INSTALL_DIR)/
	$(MAKE) -C qt/pcre-8.39;
	$(MAKE) -C qt/pcre-8.39 install; 
	cd qt && tar zxvf qtbase-opensource-src-5.7.1.tar.gz ; 
	cp -r qt/linux-cross-g++ qt/qtbase-opensource-src-5.7.1/mkspecs/devices
	cd qt/qtbase-opensource-src-5.7.1; chmod +x ./configure ;./configure  -confirm-license -opensource --prefix=$(VE_PATH)/output/$(VE_INSTALL_DIR)/ -device linux-cross-g++ -device-option CROSS_COMPILE=$(VE_CROSS_COMPILER) -hostprefix $(VE_PATH)/output/$(VE_INSTALL_DIR)/  -release -make libs -no-qpa-platform-guard -L $(VE_PATH)/output/$(VE_INSTALL_DIR)/lib/ -I $(VE_PATH)/output/$(VE_INSTALL_DIR)/include/ 
	#-system-pcre
	$(MAKE) -C qt/qtbase-opensource-src-5.7.1; 
	$(MAKE) -C qt/qtbase-opensource-src-5.7.1 install; 

qtscript_build:
	cd qt && tar zxvf qtscript-opensource-src-5.7.1.tar.gz ;
	cd qt/qtscript-opensource-src-5.7.1; qmake PREFIX=$(VE_PATH)/output/$(VE_INSTALL_DIR)/
	$(MAKE) -C qt/qtscript-opensource-src-5.7.1; 
	$(MAKE) -C qt/qtscript-opensource-src-5.7.1 install; 
qtxmlpatterns_build:
	cd qt && tar zxvf qtxmlpatterns-opensource-src-5.7.1.tar.gz ;
	cd qt/qtxmlpatterns-opensource-src-5.7.1;qmake PREFIX=$(VE_PATH)/output/$(VE_INSTALL_DIR)/ 
	$(MAKE) -C qt/qtxmlpatterns-opensource-src-5.7.1; 
	$(MAKE) -C qt/qtxmlpatterns-opensource-src-5.7.1 install;
curl_build:
	cd curl; chmod +x ./configure ./install-sh; ./configure --prefix=$(VE_PATH)/output/$(VE_INSTALL_DIR)/ --with-ssl=$(VE_PATH)/output/$(VE_INSTALL_DIR)/;
	$(MAKE) -C curl && $(MAKE) -C curl install;

curl_build_cross:
	cd curl; chmod +x ./configure ./install-sh; ./configure --host=$(VE_CROSS_TOOL) --prefix=$(VE_PATH)/output/$(VE_INSTALL_DIR)/;
	$(MAKE) -C curl && $(MAKE) -C curl install;
	
live555_build:
	cd live555; chmod +x genMakefiles; ./genMakefiles linux-64bit; 
	$(MAKE) -C live555;
	$(MAKE) -C live555/live555
	cp ./live555/live555/liblive555.so $(VE_PATH)/output/$(VE_INSTALL_DIR)/lib
	
live555_build_cross:
	cd live555; chmod +x genMakefiles; ./genMakefiles armlinux; 
	$(MAKE) -C live555 CROSS_COMPILE=$(VE_CROSS_COMPILER);
	$(MAKE) -C live555/live555
	cp ./live555/live555/liblive555.so $(VE_PATH)/output/$(VE_INSTALL_DIR)/lib
	
poco_clean:
	$(MAKE) -C poco clean
ffmpeg_clean:
	$(MAKE) -C ffmpeg clean
openssl_clean:
	$(MAKE) -C openssl clean
leveldb_clean:
	$(MAKE) -C leveldb-posix clean
onvifc_clean:
	cd onvifc/prj_linux/ ; qmake .;
	$(MAKE) -C onvifc/prj_linux/ clean
protobuf_clean:
	rm -rf protobuf/cmake/linux/*.*
qt_clean:
	rm -rf qt/qtbase-opensource-src-5.7.1	
qtxmlpatterns_clean:
	rm -rf qt/qtxmlpatterns-opensource-src-5.7.1;

qtscript_clean:
	rm -rf qt/qtscript-opensource-src-5.7.1;
curl_clean:
	$(MAKE) -C curl clean
	
	
live555_clean:
	$(MAKE) -C live555 clean
	$(MAKE) -C live555/live555 clean
ZLToolKit_clean:
	$(MAKE) -C ZLToolKit/build clean
	rm -rf ZLToolKit/build
	rm -rf $(VE_PATH)/output/$(VE_INSTALL_DIR)/lib/libZLToolKit.*
	rm -rf $(VE_PATH)/output/$(VE_INSTALL_DIR)/include/ZLToolKit
ZLMediaKit_clean:
	$(MAKE) -C ZLMediaKit/build clean
	rm -rf $(VE_PATH)/output/$(VE_INSTALL_DIR)/lib/libZLMediaKit.*
	rm -rf $(VE_PATH)/output/$(VE_INSTALL_DIR)/include/ZLMediaKit