FROM debian:buster as build

RUN apt-get update \
	&& apt-get install -y \
	build-essential \
	git \
	wget

RUN wget http://www.airspayce.com/mikem/bcm2835/bcm2835-1.60.tar.gz && \
   	tar xzvf bcm2835-1.60.tar.gz && \
	cd bcm2835-1.60; ./configure; make; make install


WORKDIR /build/mlx90640-library
RUN git clone https://github.com/nrandell/mlx90640-library.git . \
	&& make \
	&& mv libMLX90640_API.so /build
