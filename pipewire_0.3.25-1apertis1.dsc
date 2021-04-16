Format: 3.0 (quilt)
Source: pipewire
Binary: libpipewire-0.3-0, libpipewire-0.3-dev, libpipewire-0.3-modules, libspa-0.2-dev, libspa-0.2-modules, pipewire-doc, pipewire, pipewire-bin, pipewire-audio-client-libraries, pipewire-tests, gstreamer1.0-pipewire, libspa-0.2-bluetooth
Architecture: linux-any all
Version: 0.3.25-1apertis1
Maintainer: Utopia Maintenance Team <pkg-utopia-maintainers@alioth-lists.debian.net>
Uploaders: Jeremy Bicha <jbicha@debian.org>
Homepage: https://pipewire.org/
Standards-Version: 4.5.1
Vcs-Browser: https://salsa.debian.org/utopia-team/pipewire
Vcs-Git: https://salsa.debian.org/utopia-team/pipewire.git
Testsuite: autopkgtest
Testsuite-Triggers: build-essential, gnome-desktop-testing, gstreamer1.0-tools, pkg-config
Build-Depends: debhelper-compat (= 13), doxygen <!nodoc>, graphviz <!nodoc>, libasound2-dev, libbluetooth-dev, libdbus-1-dev, libglib2.0-dev (>= 2.32.0), libgstreamer-plugins-base1.0-dev, libgstreamer1.0-dev, libldacbt-abr-dev [!s390x !hppa !m68k !powerpc !ppc64 !sparc64], libldacbt-enc-dev [!s390x !hppa !m68k !powerpc !ppc64 !sparc64], libncurses-dev, libpulse-dev (>= 11.1), libsbc-dev, libsndfile1-dev (>= 1.0.20), libsystemd-dev [linux-any], libudev-dev [linux-any], libv4l-dev, meson (>= 0.50.0), pkg-config (>= 0.22), systemd [linux-any], xmltoman
Build-Conflicts: libfdk-aac-dev
Package-List:
 gstreamer1.0-pipewire deb libs optional arch=linux-any
 libpipewire-0.3-0 deb libs optional arch=linux-any
 libpipewire-0.3-dev deb libdevel optional arch=linux-any
 libpipewire-0.3-modules deb libs optional arch=linux-any
 libspa-0.2-bluetooth deb libs optional arch=linux-any
 libspa-0.2-dev deb libdevel optional arch=linux-any
 libspa-0.2-modules deb libs optional arch=linux-any
 pipewire deb video optional arch=linux-any
 pipewire-audio-client-libraries deb libs optional arch=linux-any
 pipewire-bin deb video optional arch=linux-any
 pipewire-doc deb doc optional arch=all profile=!nodoc
 pipewire-tests deb misc optional arch=linux-any
Checksums-Sha1:
 93ea86f527e09acc0abceffa3155ae76bfce897e 1351257 pipewire_0.3.25.orig.tar.gz
 12fd65b0a821a699f3781e6c84629bbd6e448a80 16112 pipewire_0.3.25-1apertis1.debian.tar.xz
Checksums-Sha256:
 fb6d5a0cbde621659ffd67622f19744dd6c8da8745b060cb1951c3d2045e5166 1351257 pipewire_0.3.25.orig.tar.gz
 3631ccdcd44a726fd31dfd80851fd40cffad947455b1b60d2ccad9e5b7661ca0 16112 pipewire_0.3.25-1apertis1.debian.tar.xz
Files:
 e6d23d02fff09935278868702cf7ffc8 1351257 pipewire_0.3.25.orig.tar.gz
 9d6f17528be731d97114ababf7ce27f3 16112 pipewire_0.3.25-1apertis1.debian.tar.xz
