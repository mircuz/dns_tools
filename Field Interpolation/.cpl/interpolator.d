LOADLIBES+=-lm

interpolator : .cpl/interpolator.o /usr/local/fri/complex.o /usr/local/fri/fft.o /usr/local/fri/rbmat.o  /usr/local/fri/parallel.o .cpl/dnsdata.o .cpl/rbmatmod.o
	$(CC) $(LDFLAGS) -o interpolator .cpl/interpolator.o /usr/local/fri/complex.o /usr/local/fri/fft.o /usr/local/fri/rbmat.o  /usr/local/fri/parallel.o .cpl/dnsdata.o .cpl/rbmatmod.o $(LOADLIBES) $(LDLIBS)

.cpl/interpolator.c .cpl/interpolator.d : interpolator.cpl /usr/local/fri/complex.cpl /usr/local/fri/fft.cpl /usr/local/fri/rbmat.cpl /usr/local/fri/matrix.cmn /usr/local/fri/parallel.cpl dnsdata.cpl rbmatmod.cpl