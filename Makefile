BASE_DIR=$(shell pwd)

PREFIX=/usr
JAVA_HOME=/usr/lib/jvm/default

CC=gcc
CFLAGS=-c -Wall -fPIC -I${JAVA_HOME}/include -I${JAVA_HOME}/include/linux
LDFLAGS=-fPIC -shared -lstp

SOURCES_DIR=${BASE_DIR}/src/main/c
OBJECTS_DIR=${BASE_DIR}/build/c
TARGET_DIR=${BASE_DIR}/build/libs
EXECUTABLE_NAME=libstpjava.so
EXECUTABLE=${TARGET_DIR}/$(EXECUTABLE_NAME)

SOURCES=$(shell find '$(SOURCES_DIR)' -type f -name '*.c')
OBJECTS=$(SOURCES:$(SOURCES_DIR)/%.c=$(OBJECTS_DIR)/%.o)

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS) headers
	mkdir -p $(TARGET_DIR)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

$(OBJECTS): $(SOURCES)
	mkdir -p $(OBJECTS_DIR)
	$(CC) $(CFLAGS) $< -o $@

headers:
	javah -d $(SOURCES_DIR) -classpath $(BASE_DIR)/src/main/java -force org.zhekehz.stpjava.Native

clean:
	rm -rfi $(OBJECTS_DIR) $(EXECUTABLE)

.PHONY: install
install:
	mkdir -p $(DESTDIR)$(PREFIX)/lib
	cp $(EXECUTABLE) $(DESTDIR)$(PREFIX)/lib/$(EXECUTABLE_NAME)

.PHONY: uninstall
uninstall:
	rm -f $(DESTDIR)$(PREFIX)/lib/$(EXECUTABLE_NAME)