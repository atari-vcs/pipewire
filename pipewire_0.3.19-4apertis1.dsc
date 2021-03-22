Format: 3.0 (quilt)
Source: pipewire
Binary: libpipewire-0.3-0, libpipewire-0.3-dev, libpipewire-0.3-modules, libspa-0.2-dev, libspa-0.2-modules, pipewire-doc, pipewire, pipewire-bin, pipewire-audio-client-libraries, pipewire-tests, gstreamer1.0-pipewire, libspa-0.2-bluetooth, libspa-0.2-jack
Architecture: linux-any all
Version: 0.3.19-4apertis1
Maintainer: Utopia Maintenance Team <pkg-utopia-maintainers@alioth-lists.debian.net>
Uploaders: Jeremy Bicha <jbicha@debian.org>
Homepage: https://pipewire.org/
Standards-Version: 4.5.1
Vcs-Browser: https://salsa.debian.org/utopia-team/pipewire
Vcs-Git: https://salsa.debian.org/utopia-team/pipewire.git
Testsuite: autopkgtest
Testsuite-Triggers: build-essential, gnome-desktop-testing, gstreamer1.0-tools, pkg-config
Build-Depends: debhelper-compat (= 13), libasound2-dev, libbluetooth-dev, libdbus-1-dev, libglib2.0-dev (>= 2.32.0), libgstreamer-plugins-base1.0-dev, libgstreamer1.0-dev, libjack-jackd2-dev (>= 1.9.10), libldacbt-abr-dev [!s390x !hppa !m68k !powerpc !ppc64 !sparc64], libldacbt-enc-dev [!s390x !hppa !m68k !powerpc !ppc64 !sparc64], libncurses-dev, libopenaptx-dev (>= 0.2.0-5~), libpulse-dev (>= 11.1), libsbc-dev, libsndfile1-dev (>= 1.0.20), libsystemd-dev [linux-any], libudev-dev [linux-any], libv4l-dev, meson (>= 0.50.0), pkg-config (>= 0.22), systemd [linux-any], xmltoman
Build-Depends-Indep: doxygen <!nodoc>, graphviz <!nodoc>
Build-Conflicts: libfdk-aac-dev
Package-List:
 gstreamer1.0-pipewire deb libs optional arch=linux-any
 libpipewire-0.3-0 deb libs optional arch=linux-any
 libpipewire-0.3-dev deb libdevel optional arch=linux-any
 libpipewire-0.3-modules deb libs optional arch=linux-any
 libspa-0.2-bluetooth deb libs optional arch=linux-any
 libspa-0.2-dev deb libdevel optional arch=linux-any
 libspa-0.2-jack deb libs optional arch=linux-any
 libspa-0.2-modules deb libs optional arch=linux-any
 pipewire deb video optional arch=linux-any
 pipewire-audio-client-libraries deb libs optional arch=linux-any
 pipewire-bin deb video optional arch=linux-any
 pipewire-doc deb doc optional arch=all profile=!nodoc
 pipewire-tests deb misc optional arch=linux-any
Checksums-Sha1:
 b82e221d6118025e9f347c93ea8b2be346b50a41 1207431 pipewire_0.3.19.orig.tar.gz
 9710be6eb73be757f89d38031e3e121cb0152211 14408 pipewire_0.3.19-4apertis1.debian.tar.xz
Checksums-Sha256:
 de2e757a57ff313362341f4b18b976c707d397d853c0cd2032975b76d0c540dc 1207431 pipewire_0.3.19.orig.tar.gz
 3d1d6bf808707dd50c3ef1ccb9de0131853fe31bfc268d36eefa9d72c60f1436 14408 pipewire_0.3.19-4apertis1.debian.tar.xz
Files:
 2107281ae24b3f022c43b358ca8bfc58 1207431 pipewire_0.3.19.orig.tar.gz
 b33d870d69acafeb5443a68413ba9025 14408 pipewire_0.3.19-4apertis1.debian.tar.xz
