CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89 -g -fPIC
TARGET = libdynamic.so
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)
DEPS = $(OBJS:.o=.d)

$(TARGET): $(OBJS)
	$(CC) -shared -o $@ $^

-include $(DEPS)

%.o: %.c
	$(CC) $(CFLAGS) -MMD -MP -c $< -o $@

.PHONY: all clean git

all: $(TARGET)

clean:
	rm -f $(OBJS) $(DEPS)

git:
	@read -p "Enter commit message: " message; \
	git add .; \
	git commit -m "$$message"; \
	git push origin master
