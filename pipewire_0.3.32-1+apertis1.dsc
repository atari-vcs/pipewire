Format: 3.0 (quilt)
Source: pipewire
Binary: libpipewire-0.3-0, libpipewire-0.3-common, libpipewire-0.3-dev, libpipewire-0.3-modules, libspa-0.2-dev, libspa-0.2-modules, pipewire-doc, pipewire, pipewire-bin, pipewire-media-session, pipewire-pulse, pipewire-audio-client-libraries, pipewire-tests, gstreamer1.0-pipewire, libspa-0.2-bluetooth
Architecture: linux-any all
Version: 0.3.32-1+apertis1
Maintainer: Utopia Maintenance Team <pkg-utopia-maintainers@alioth-lists.debian.net>
Uploaders: Jeremy Bicha <jbicha@debian.org>
Homepage: https://pipewire.org/
Standards-Version: 4.5.1
Vcs-Browser: https://salsa.debian.org/utopia-team/pipewire
Vcs-Git: https://salsa.debian.org/utopia-team/pipewire.git
Testsuite: autopkgtest
Testsuite-Triggers: build-essential, gnome-desktop-testing, gstreamer1.0-tools, pkg-config
Build-Depends: debhelper-compat (= 13), dh-apparmor, doxygen <!nodoc>, graphviz <!nodoc>, libasound2-dev, libbluetooth-dev, libdbus-1-dev, libglib2.0-dev (>= 2.32.0), libgstreamer-plugins-base1.0-dev, libgstreamer1.0-dev, libldacbt-abr-dev [!s390x !hppa !m68k !powerpc !ppc64 !sparc64], libldacbt-enc-dev [!s390x !hppa !m68k !powerpc !ppc64 !sparc64], libncurses-dev, libpulse-dev (>= 11.1), libsbc-dev, libsndfile1-dev (>= 1.0.20), libsystemd-dev [linux-any], libudev-dev [linux-any], libusb-1.0-0-dev, libv4l-dev, libwebrtc-audio-processing-dev, meson (>= 0.50.0), pkg-config (>= 0.22), systemd [linux-any], xmltoman
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
 74eb99864be9cd3c2159bca72083232a360d3b96 1604622 pipewire_0.3.32.orig.tar.gz
 ca7e2d554c06730f261222d3a11ed8dbf0d0323c 18072 pipewire_0.3.32-1+apertis1.debian.tar.xz
Checksums-Sha256:
 8b2af6138529fd9214dd148f2a6304f13c16e0b0d3a4a98c1afa87b7e65c574f 1604622 pipewire_0.3.32.orig.tar.gz
 56291b36778407ce3a728f18a862937c4c7ad76324fbc6f3ea0e7b09d576244c 18072 pipewire_0.3.32-1+apertis1.debian.tar.xz
Files:
 a2b97e7c57f8098bdb15c7121633cf0e 1604622 pipewire_0.3.32.orig.tar.gz
 21fe299ba019225aedf204ee12828096 18072 pipewire_0.3.32-1+apertis1.debian.tar.xz
