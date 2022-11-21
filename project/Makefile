
################################################################################
# Automatically-generated file. Do not edit!
################################################################################

RM := rm -rf


OPENOCDDIR := /opt/openocd/
OCDCONFIG=microchip_same54_xplained_pro.cfg
ODIR=obj
SDIR=src
CFLAGS=-Isrc/
CFLAGS += -DDEBUG=2
CFLAGS+=-O0 -fno-stack-protector -mthumb -march=armv7e-m -mtune=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -fvar-tracking -g3
CFLAGS+=-I./src/samd51/CMSIS/Include
CFLAGS+=-I./src/samd51/include/instance
CFLAGS+=-I./src/samd51/include/pio
CFLAGS+=-I./src/samd51/include
CFLAGS+=-I./src/samd51/include/component
CFLAGS+=-I./src/include
CFLAGS+=-I../kissfft/

CFLAGS+= -D__ATSAME70N21B__
#CFLAGS+= -D pvPortMalloc=malloc
#CFLAGS+= -D vPortMalloc=malloc
#CFLAGS+= -D pvPortFree=free
#CFLAGS+= -D vPortFree=free
#CFLAGS += -D STACK_SIZE=1024
#CFLAGS += -D printf=rprintf

CC=arm-none-eabi-gcc
LD=arm-none-eabi-ld
SIZE=arm-none-eabi-size


OBJS += main.o \
	atmel_start.o \
	hal_adc_sync.o \
	driver_init.o \
	utils_ringbuffer.o \
	hpl_core_m7_base.o \
	hpl_usart.o \
	hpl_xdmac.o \
	utils_assert.o \
	hpl_afec.o \
	hal_usart_sync.o \
	hal_timer.o \
	utils_list.o \
	hpl_tc.o \
	hal_atomic.o \
	hal_dac_sync.o \
	hpl_dac.o \
	hpl_init.o \
	hpl_pmc.o \
	stdio_start.o \
	stdio_io.o \
	hal_io.o \
	utils_syscalls.o \
	startup_same70q21b.o\
	hal_usart_os.o \
	kiss_fft.o

OBJ = $(patsubst %,$(ODIR)/%,$(OBJS))

$(ODIR)/%.o: $(SDIR)/%.c
	$(CC) $(CFLAGS) -c -g -o $@ $^

$(ODIR)/%.o: $(SDIR)/%.s
	nasm -f elf32 -g -o $@ $^


all: bin

bin: $(OBJ)
	$(CC)  $(CFLAGS) obj/* --specs=nano.specs -Tsame70.ld -specs=nosys.specs -L/usr/local/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/lib/thumb/v7e-m+fp/hard -L/usr/local/gcc-arm-none-eabi-9-2019-q4-major/lib/gcc/arm-none-eabi/9.2.1/thumb/v7e-m+fp/hard -Wl,"-u _printf_float" -lc -lgcc -lm -static -e Reset_Handler -o voltkey.elf
	ctags -R src/*
	$(SIZE) voltkey.elf

debug:
	ps aux | grep openocd | grep -v grep && { killall openocd; sleep 2; } || { echo "debugging..."; }
#	screen -S openocd -d -m openocd -f $(OPENOCDDIR)/tcl/board/microchip_same54_xplained_pro.cfg
	screen -S OpenOCD -d -m openocd -f board/atmel_same70_xplained.cfg
	sleep 2
	gdb-multiarch voltkey.elf -x ocd.txt



# Other Targets
clean:
	rm -rf voltkey.elf obj/*

disassemble:
	arm-none-eabi-objdump --source voltkey.elf




#debug:
#	screen -S OpenOCD -d -m openocd -f board/atmel_same70_xplained.cfg
#	gdb-multiarch project -x ocd.txt

#compile:
#	arm-none-eabi-gcc -g -o project main.c -T same70.ld -nostartfiles

