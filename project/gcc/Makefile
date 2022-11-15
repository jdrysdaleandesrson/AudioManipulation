################################################################################
# Automatically-generated file. Do not edit!
################################################################################

ifdef SystemRoot
	SHELL = cmd.exe
	MK_DIR = mkdir
else
	ifeq ($(shell uname), Linux)
		MK_DIR = mkdir -p
	endif

	ifeq ($(shell uname | cut -d _ -f 1), CYGWIN)
		MK_DIR = mkdir -p
	endif

	ifeq ($(shell uname | cut -d _ -f 1), MINGW32)
		MK_DIR = mkdir -p
	endif

	ifeq ($(shell uname | cut -d _ -f 1), MINGW64)
		MK_DIR = mkdir -p
	endif

	ifeq ($(shell uname | cut -d _ -f 1), DARWIN)
		MK_DIR = mkdir -p
	endif
endif

# List the subdirectories for creating object files
SUB_DIRS +=  \
 \
stdio_redirect \
hpl/tc \
hpl/uart \
hpl/afec \
hpl/dac \
hpl/pmc \
hal/src \
stdio_redirect/gcc \
hpl/xdmac \
hal/utils/src \
same70b/gcc/gcc \
examples \
same70b/gcc \
hpl/core

# List the object files
OBJS +=  \
hal/src/hal_io.o \
stdio_redirect/stdio_io.o \
stdio_redirect/gcc/write.o \
atmel_start.o \
hpl/uart/hpl_uart.o \
hal/utils/src/utils_syscalls.o \
hpl/pmc/hpl_pmc.o \
hal/src/hal_timer.o \
stdio_redirect/gcc/read.o \
hal/src/hal_delay.o \
hpl/core/hpl_init.o \
hal/utils/src/utils_list.o \
same70b/gcc/gcc/startup_same70q21b.o \
hal/utils/src/utils_assert.o \
hpl/afec/hpl_afec.o \
hal/src/hal_usart_sync.o \
hpl/dac/hpl_dac.o \
stdio_start.o \
hal/src/hal_init.o \
main.o \
examples/driver_examples.o \
driver_init.o \
hal/src/hal_adc_sync.o \
hal/src/hal_dac_sync.o \
same70b/gcc/system_same70q21b.o \
hal/utils/src/utils_ringbuffer.o \
hal/src/hal_gpio.o \
hal/utils/src/utils_event.o \
hal/src/hal_sleep.o \
hpl/pmc/hpl_sleep.o \
hpl/core/hpl_core_m7_base.o \
hpl/tc/hpl_tc.o \
hal/src/hal_atomic.o \
hpl/xdmac/hpl_xdmac.o

OBJS_AS_ARGS +=  \
"hal/src/hal_io.o" \
"stdio_redirect/stdio_io.o" \
"stdio_redirect/gcc/write.o" \
"atmel_start.o" \
"hpl/uart/hpl_uart.o" \
"hal/utils/src/utils_syscalls.o" \
"hpl/pmc/hpl_pmc.o" \
"hal/src/hal_timer.o" \
"stdio_redirect/gcc/read.o" \
"hal/src/hal_delay.o" \
"hpl/core/hpl_init.o" \
"hal/utils/src/utils_list.o" \
"same70b/gcc/gcc/startup_same70q21b.o" \
"hal/utils/src/utils_assert.o" \
"hpl/afec/hpl_afec.o" \
"hal/src/hal_usart_sync.o" \
"hpl/dac/hpl_dac.o" \
"stdio_start.o" \
"hal/src/hal_init.o" \
"main.o" \
"examples/driver_examples.o" \
"driver_init.o" \
"hal/src/hal_adc_sync.o" \
"hal/src/hal_dac_sync.o" \
"same70b/gcc/system_same70q21b.o" \
"hal/utils/src/utils_ringbuffer.o" \
"hal/src/hal_gpio.o" \
"hal/utils/src/utils_event.o" \
"hal/src/hal_sleep.o" \
"hpl/pmc/hpl_sleep.o" \
"hpl/core/hpl_core_m7_base.o" \
"hpl/tc/hpl_tc.o" \
"hal/src/hal_atomic.o" \
"hpl/xdmac/hpl_xdmac.o"

# List the directories containing header files
DIR_INCLUDES +=  \
-I"../" \
-I"../config" \
-I"../examples" \
-I"../hal/include" \
-I"../hal/utils/include" \
-I"../hpl/afec" \
-I"../hpl/core" \
-I"../hpl/dac" \
-I"../hpl/pio" \
-I"../hpl/pmc" \
-I"../hpl/tc" \
-I"../hpl/uart" \
-I"../hpl/xdmac" \
-I"../hri" \
-I"../" \
-I"../config" \
-I"../stdio_redirect" \
-I"../" \
-I"../CMSIS/Core/Include" \
-I"../same70b/include"

# List the dependency files
DEPS := $(OBJS:%.o=%.d)

DEPS_AS_ARGS +=  \
"stdio_redirect/stdio_io.d" \
"hal/utils/src/utils_event.d" \
"hal/src/hal_io.d" \
"hpl/uart/hpl_uart.d" \
"hal/utils/src/utils_syscalls.d" \
"hpl/xdmac/hpl_xdmac.d" \
"hal/src/hal_timer.d" \
"same70b/gcc/gcc/startup_same70q21b.d" \
"hal/utils/src/utils_list.d" \
"stdio_redirect/gcc/write.d" \
"hal/utils/src/utils_assert.d" \
"hal/src/hal_delay.d" \
"stdio_redirect/gcc/read.d" \
"hpl/core/hpl_init.d" \
"stdio_start.d" \
"hal/src/hal_init.d" \
"hal/src/hal_usart_sync.d" \
"hpl/afec/hpl_afec.d" \
"hpl/pmc/hpl_pmc.d" \
"driver_init.d" \
"hpl/dac/hpl_dac.d" \
"main.d" \
"examples/driver_examples.d" \
"hal/src/hal_sleep.d" \
"hal/utils/src/utils_ringbuffer.d" \
"same70b/gcc/system_same70q21b.d" \
"hal/src/hal_dac_sync.d" \
"hal/src/hal_gpio.d" \
"atmel_start.d" \
"hal/src/hal_atomic.d" \
"hpl/tc/hpl_tc.d" \
"hpl/core/hpl_core_m7_base.d" \
"hpl/pmc/hpl_sleep.d" \
"hal/src/hal_adc_sync.d"

OUTPUT_FILE_NAME :=AtmelStart
QUOTE := "
OUTPUT_FILE_PATH +=$(OUTPUT_FILE_NAME).elf
OUTPUT_FILE_PATH_AS_ARGS +=$(OUTPUT_FILE_NAME).elf

vpath %.c ../
vpath %.s ../
vpath %.S ../

# All Target
all: $(SUB_DIRS) $(OUTPUT_FILE_PATH)

# Linker target

$(OUTPUT_FILE_PATH): $(OBJS)
	@echo Building target: $@
	@echo Invoking: ARM/GNU Linker
	$(QUOTE)arm-none-eabi-gcc$(QUOTE) -o $(OUTPUT_FILE_NAME).elf $(OBJS_AS_ARGS) -Wl,--start-group -lm -Wl,--end-group -mthumb \
-Wl,-Map="$(OUTPUT_FILE_NAME).map" --specs=nano.specs -Wl,--gc-sections -mcpu=cortex-m7 \
 \
-T"../same70b/gcc/gcc/same70q21b_flash.ld" \
-L"../same70b/gcc/gcc"
	@echo Finished building target: $@

	"arm-none-eabi-objcopy" -O binary "$(OUTPUT_FILE_NAME).elf" "$(OUTPUT_FILE_NAME).bin"
	"arm-none-eabi-objcopy" -O ihex -R .eeprom -R .fuse -R .lock -R .signature  \
        "$(OUTPUT_FILE_NAME).elf" "$(OUTPUT_FILE_NAME).hex"
	"arm-none-eabi-objcopy" -j .eeprom --set-section-flags=.eeprom=alloc,load --change-section-lma \
        .eeprom=0 --no-change-warnings -O binary "$(OUTPUT_FILE_NAME).elf" \
        "$(OUTPUT_FILE_NAME).eep" || exit 0
	"arm-none-eabi-objdump" -h -S "$(OUTPUT_FILE_NAME).elf" > "$(OUTPUT_FILE_NAME).lss"
	"arm-none-eabi-size" "$(OUTPUT_FILE_NAME).elf"

	

# Compiler targets




%.o: %.c
	@echo Building file: $<
	@echo ARM/GNU C Compiler
	$(QUOTE)arm-none-eabi-gcc$(QUOTE) -x c -mthumb -DDEBUG -Os -ffunction-sections -mlong-calls -g3 -Wall -c -std=gnu99 \
-D__SAME70Q21B__ -mcpu=cortex-m7 -mfloat-abi=softfp -mfpu=fpv4-sp-d16 \
$(DIR_INCLUDES) \
-MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"  -o "$@" "$<"
	@echo Finished building: $<

%.o: %.s
	@echo Building file: $<
	@echo ARM/GNU Assembler
	$(QUOTE)arm-none-eabi-as$(QUOTE) -x c -mthumb -DDEBUG -Os -ffunction-sections -mlong-calls -g3 -Wall -c -std=gnu99 \
-D__SAME70Q21B__ -mcpu=cortex-m7 -mfloat-abi=softfp -mfpu=fpv4-sp-d16 \
$(DIR_INCLUDES) \
-MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"  -o "$@" "$<"
	@echo Finished building: $<

%.o: %.S
	@echo Building file: $<
	@echo ARM/GNU Preprocessing Assembler
	$(QUOTE)arm-none-eabi-gcc$(QUOTE) -x c -mthumb -DDEBUG -Os -ffunction-sections -mlong-calls -g3 -Wall -c -std=gnu99 \
-D__SAME70Q21B__ -mcpu=cortex-m7 -mfloat-abi=softfp -mfpu=fpv4-sp-d16 \
$(DIR_INCLUDES) \
-MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"  -o "$@" "$<"
	@echo Finished building: $<

# Detect changes in the dependent files and recompile the respective object files.
ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(DEPS)),)
-include $(DEPS)
endif
endif

$(SUB_DIRS):
	$(MK_DIR) "$@"

clean:
	rm -f $(OBJS_AS_ARGS)
	rm -f $(OUTPUT_FILE_PATH)
	rm -f $(DEPS_AS_ARGS)
	rm -f $(OUTPUT_FILE_NAME).a $(OUTPUT_FILE_NAME).hex $(OUTPUT_FILE_NAME).bin \
        $(OUTPUT_FILE_NAME).lss $(OUTPUT_FILE_NAME).eep $(OUTPUT_FILE_NAME).map \
        $(OUTPUT_FILE_NAME).srec