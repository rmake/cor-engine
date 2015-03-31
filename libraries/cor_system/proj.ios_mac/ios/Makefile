
all:
	make -C . -f Makefile.dev.arm64.ios -j 8
	make -C . -f Makefile.dev.armv7.ios -j 8
	make -C . -f Makefile.dev.armv7s.ios -j 8
	make -C . -f Makefile.sim.i386.ios -j 8
	make -C . -f Makefile.sim.x86_64.ios -j 8
	lipo -create libcor_system_dev_arm64.a libcor_system_dev_armv7.a libcor_system_dev_armv7s.a libcor_system_sim_i386.a libcor_system_sim_x86_64.a -output libcor_system.a

clean:
	make -C . -f Makefile.dev.arm64.ios clean
	make -C . -f Makefile.dev.armv7.ios clean
	make -C . -f Makefile.dev.armv7s.ios clean
	make -C . -f Makefile.sim.i386.ios clean
	make -C . -f Makefile.sim.x86_64.ios clean
	-rm -f libcor_system.a

