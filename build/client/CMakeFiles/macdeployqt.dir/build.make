# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.10.3/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.10.3/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/toomas/Documents/workspace/open-eid/tmp/DigiDoc4-Client

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/toomas/Documents/workspace/open-eid/tmp/DigiDoc4-Client/build

# Utility rule file for macdeployqt.

# Include the progress variables for this target.
include client/CMakeFiles/macdeployqt.dir/progress.make

client/CMakeFiles/macdeployqt: client/qdigidoc4.app/Contents/MacOS/qdigidoc4
	cd /Users/toomas/Documents/workspace/open-eid/tmp/DigiDoc4-Client/build/client && mkdir -p /Users/toomas/Documents/workspace/open-eid/tmp/DigiDoc4-Client/build/client/qdigidoc4.app/Contents/Frameworks/
	cd /Users/toomas/Documents/workspace/open-eid/tmp/DigiDoc4-Client/build/client && cp -a /Library/Frameworks/libdigidoc.framework /Users/toomas/Documents/workspace/open-eid/tmp/DigiDoc4-Client/build/client/qdigidoc4.app/Contents/MacOS/../Frameworks
	cd /Users/toomas/Documents/workspace/open-eid/tmp/DigiDoc4-Client/build/client && /Users/toomas/cmake_builds/Qt-5.9.1-OpenSSL/bin/macdeployqt /Users/toomas/Documents/workspace/open-eid/tmp/DigiDoc4-Client/build/client/qdigidoc4.app -executable=/Users/toomas/Documents/workspace/open-eid/tmp/DigiDoc4-Client/build/client/qdigidoc4.app/Contents/Frameworks/libdigidoc.framework/Versions/2/libdigidoc -executable=/Users/toomas/Documents/workspace/open-eid/tmp/DigiDoc4-Client/build/client/qdigidoc4.app/Contents/MacOS/opensc-pkcs11.so
	cd /Users/toomas/Documents/workspace/open-eid/tmp/DigiDoc4-Client/build/client && find /Users/toomas/Documents/workspace/open-eid/tmp/DigiDoc4-Client/build/client/qdigidoc4.app/Contents/MacOS/../PlugIns/imageformats -type f -a ! -name libqjpeg.dylib -a ! -name libqsvg.dylib -delete
	cd /Users/toomas/Documents/workspace/open-eid/tmp/DigiDoc4-Client/build/client && rm -rf /Users/toomas/Documents/workspace/open-eid/tmp/DigiDoc4-Client/build/client/qdigidoc4.app/Contents/MacOS/../PlugIns/bearer
	cd /Users/toomas/Documents/workspace/open-eid/tmp/DigiDoc4-Client/build/client && cp -a /Library/Frameworks/digidocpp.framework /Users/toomas/Documents/workspace/open-eid/tmp/DigiDoc4-Client/build/client/qdigidoc4.app/Contents/MacOS/../Frameworks
	cd /Users/toomas/Documents/workspace/open-eid/tmp/DigiDoc4-Client/build/client && rm /Users/toomas/Documents/workspace/open-eid/tmp/DigiDoc4-Client/build/client/qdigidoc4.app/Contents/MacOS/../Frameworks/digidocpp.framework/Resources/digidoc-tool
	cd /Users/toomas/Documents/workspace/open-eid/tmp/DigiDoc4-Client/build/client && rm /Users/toomas/Documents/workspace/open-eid/tmp/DigiDoc4-Client/build/client/qdigidoc4.app/Contents/MacOS/../Frameworks/libdigidoc.framework/Resources/cdigidoc
	cd /Users/toomas/Documents/workspace/open-eid/tmp/DigiDoc4-Client/build/client && ln -sf ../Frameworks/digidocpp.framework/Libraries/libcrypto.dylib /Users/toomas/Documents/workspace/open-eid/tmp/DigiDoc4-Client/build/client/qdigidoc4.app/Contents/MacOS/../Frameworks/libcrypto.1.0.0.dylib
	cd /Users/toomas/Documents/workspace/open-eid/tmp/DigiDoc4-Client/build/client && ln -sf ../Frameworks/digidocpp.framework/Libraries/libcrypto.dylib /Users/toomas/Documents/workspace/open-eid/tmp/DigiDoc4-Client/build/client/qdigidoc4.app/Contents/MacOS/../Frameworks/libcrypto.dylib
	cd /Users/toomas/Documents/workspace/open-eid/tmp/DigiDoc4-Client/build/client && ln -sf ../Frameworks/digidocpp.framework/Libraries/libssl.dylib /Users/toomas/Documents/workspace/open-eid/tmp/DigiDoc4-Client/build/client/qdigidoc4.app/Contents/MacOS/../Frameworks/libssl.1.0.0.dylib
	cd /Users/toomas/Documents/workspace/open-eid/tmp/DigiDoc4-Client/build/client && ln -sf ../Frameworks/digidocpp.framework/Libraries/libssl.dylib /Users/toomas/Documents/workspace/open-eid/tmp/DigiDoc4-Client/build/client/qdigidoc4.app/Contents/MacOS/../Frameworks/libssl.dylib
	cd /Users/toomas/Documents/workspace/open-eid/tmp/DigiDoc4-Client/build/client && find /Users/toomas/Documents/workspace/open-eid/tmp/DigiDoc4-Client/build/client/qdigidoc4.app/Contents/MacOS/../Frameworks -name Headers | xargs rm -rf
	cd /Users/toomas/Documents/workspace/open-eid/tmp/DigiDoc4-Client/build/client && find /Users/toomas/Documents/workspace/open-eid/tmp/DigiDoc4-Client/build/client/qdigidoc4.app/Contents/MacOS/../Frameworks -name 'TEST*.crt' -delete
	cd /Users/toomas/Documents/workspace/open-eid/tmp/DigiDoc4-Client/build/client && install_name_tool -delete_rpath /Library/Frameworks /Users/toomas/Documents/workspace/open-eid/tmp/DigiDoc4-Client/build/client/qdigidoc4.app/Contents/MacOS/qdigidoc4
	cd /Users/toomas/Documents/workspace/open-eid/tmp/DigiDoc4-Client/build/client && install_name_tool -change /Library/EstonianIDCard/lib/libssl.1.0.0.dylib @loader_path/../../../libssl.1.0.0.dylib /Users/toomas/Documents/workspace/open-eid/tmp/DigiDoc4-Client/build/client/qdigidoc4.app/Contents/Frameworks/libdigidoc.framework/Versions/2/libdigidoc
	cd /Users/toomas/Documents/workspace/open-eid/tmp/DigiDoc4-Client/build/client && install_name_tool -change /Library/EstonianIDCard/lib/libcrypto.1.0.0.dylib @loader_path/../../../libcrypto.1.0.0.dylib /Users/toomas/Documents/workspace/open-eid/tmp/DigiDoc4-Client/build/client/qdigidoc4.app/Contents/Frameworks/libdigidoc.framework/Versions/2/libdigidoc

macdeployqt: client/CMakeFiles/macdeployqt
macdeployqt: client/CMakeFiles/macdeployqt.dir/build.make

.PHONY : macdeployqt

# Rule to build all files generated by this target.
client/CMakeFiles/macdeployqt.dir/build: macdeployqt

.PHONY : client/CMakeFiles/macdeployqt.dir/build

client/CMakeFiles/macdeployqt.dir/clean:
	cd /Users/toomas/Documents/workspace/open-eid/tmp/DigiDoc4-Client/build/client && $(CMAKE_COMMAND) -P CMakeFiles/macdeployqt.dir/cmake_clean.cmake
.PHONY : client/CMakeFiles/macdeployqt.dir/clean

client/CMakeFiles/macdeployqt.dir/depend:
	cd /Users/toomas/Documents/workspace/open-eid/tmp/DigiDoc4-Client/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/toomas/Documents/workspace/open-eid/tmp/DigiDoc4-Client /Users/toomas/Documents/workspace/open-eid/tmp/DigiDoc4-Client/client /Users/toomas/Documents/workspace/open-eid/tmp/DigiDoc4-Client/build /Users/toomas/Documents/workspace/open-eid/tmp/DigiDoc4-Client/build/client /Users/toomas/Documents/workspace/open-eid/tmp/DigiDoc4-Client/build/client/CMakeFiles/macdeployqt.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : client/CMakeFiles/macdeployqt.dir/depend

