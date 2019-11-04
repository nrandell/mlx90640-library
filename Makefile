I2C_MODE = RPI
I2C_LIBS = -lbcm2835

all: libMLX90640_API.so

libMLX90640_API.so: functions/wrapper.o functions/MLX90640_API.o functions/MLX90640_$(I2C_MODE)_I2C_Driver.o
	$(CXX) -fPIC -shared $^ -o $@ $(I2C_LIBS)

functions/wrapper.o functions/MLX90640_API.o functions/MLX90640_RPI_I2C_Driver.o: CXXFLAGS+=-fPIC -I headers -shared $(I2C_LIBS)

clean:
	rm -f $(examples_output)
	rm -f $(SRC_DIR)*.o
	rm -f $(LIB_DIR)*.o
	rm -f functions/*.o
	rm -f *.o
	rm -f *.so
	rm -f *.a