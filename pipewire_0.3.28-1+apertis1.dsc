Format: 3.0 (quilt)
Source: pipewire
Binary: libpipewire-0.3-0, libpipewire-0.3-common, libpipewire-0.3-dev, libpipewire-0.3-modules, libspa-0.2-dev, libspa-0.2-modules, pipewire-doc, pipewire, pipewire-bin, pipewire-media-session, pipewire-pulse, pipewire-audio-client-libraries, pipewire-tests, gstreamer1.0-pipewire, libspa-0.2-bluetooth
Architecture: linux-any all
Version: 0.3.28-1+apertis1
Maintainer: Utopia Maintenance Team <pkg-utopia-maintainers@alioth-lists.debian.net>
Uploaders: Jeremy Bicha <jbicha@debian.org>
Homepage: https://pipewire.org/
Standards-Version: 4.5.1
Vcs-Browser: https://salsa.debian.org/utopia-team/pipewire
Vcs-Git: https://salsa.debian.org/utopia-team/pipewire.git
Testsuite: autopkgtest
Testsuite-Triggers: build-essential, gnome-desktop-testing, gstreamer1.0-tools, pkg-config
Build-Depends: debhelper-compat (= 13), dh-apparmor, doxygen <!nodoc>, graphviz <!nodoc>, libasound2-dev, libbluetooth-dev, libdbus-1-dev, libglib2.0-dev (>= 2.32.0), libgstreamer-plugins-base1.0-dev, libgstreamer1.0-dev, libldacbt-abr-dev [!s390x !hppa !m68k !powerpc !ppc64 !sparc64], libldacbt-enc-dev [!s390x !hppa !m68k !powerpc !ppc64 !sparc64], libncurses-dev, libpulse-dev (>= 11.1), libsbc-dev, libsndfile1-dev (>= 1.0.20), libsystemd-dev [linux-any], libudev-dev [linux-any], libv4l-dev, meson (>= 0.50.0), pkg-config (>= 0.22), systemd [linux-any], xmltoman
Build-Conflicts: libfdk-aac-dev
Package-List:
 gstreamer1.0-pipewire deb libs optional arch=linux-any
 libpipewire-0.3-0 deb libs optional arch=linux-any
 libpipewire-0.3-common deb libs optional arch=all
 libpipewire-0.3-dev deb libdevel optional arch=linux-any
 libpipewire-0.3-modules deb libs optional arch=linux-any
 libspa-0.2-bluetooth deb libs optional arch=linux-any
 libspa-0.2-dev deb libdevel optional arch=linux-any
 libspa-0.2-modules deb libs optional arch=linux-any
 pipewire deb video optional arch=linux-any
 pipewire-audio-client-libraries deb libs optional arch=linux-any
 pipewire-bin deb video optional arch=linux-any
 pipewire-doc deb doc optional arch=all profile=!nodoc
 pipewire-media-session deb video optional arch=linux-any
 pipewire-pulse deb video optional arch=linux-any
 pipewire-tests deb misc optional arch=linux-any
Checksums-Sha1:
 8a44ea2fb5094f7a30915e063c3fe341dd69200f 1474219 pipewire_0.3.28.orig.tar.gz
 85e89ed86765f991cdad1843d773a056824fcecb 17620 pipewire_0.3.28-1+apertis1.debian.tar.xz
Checksums-Sha256:
 1d9271e121a5049aef379e9bb7c50524faa6f971e668806637d7b9df1b7cab88 1474219 pipewire_0.3.28.orig.tar.gz
 693b808152422b6e0b81e79d1f5b3b5602f40f921abdd2e4bab4e0d10670f036 17620 pipewire_0.3.28-1+apertis1.debian.tar.xz
Files:
 98c26d5e3d9c7f23288d0ffe412222fe 1474219 pipewire_0.3.28.orig.tar.gz
 74a5b57c2c7a96c4697cdb27af9ae168 17620 pipewire_0.3.28-1+apertis1.debian.tar.xz
