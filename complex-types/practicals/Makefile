#If the ROSE bin directory is in your path, rose-config can be found automatically
ifndef ROSE_HOME
  ROSE_HOME = $(shell rose-config prefix)
endif

# Standard C++ compiler stuff (see rose-config --help)
ROSE_CXX         = $(shell $(ROSE_HOME)/bin/rose-config ROSE_CXX)
ROSE_CPPFLAGS    = $(shell $(ROSE_HOME)/bin/rose-config ROSE_CPPFLAGS)
ROSE_CXXFLAGS    = $(shell $(ROSE_HOME)/bin/rose-config ROSE_CXXFLAGS)
ROSE_LDFLAGS     = $(shell $(ROSE_HOME)/bin/rose-config ROSE_LDFLAGS)
ROSE_LIBDIRS     = $(shell $(ROSE_HOME)/bin/rose-config ROSE_LIBDIRS)
ROSE_RPATHS      = $(shell $(ROSE_HOME)/bin/rose-config ROSE_RPATHS)
ROSE_LINK_RPATHS = $(shell $(ROSE_HOME)/bin/rose-config ROSE_LINK_RPATHS)

# Location of source code
ROSE_SOURCE_DIR = /home/freecc/source/rose_src/quiz-practicals

# Executable files to build from source
executableFile = constTypeModifier

ERRORCOLOR = \033[0;31m
NORMCOLOR = \033[0m

RESULT = $(shell if diff const_output.txt expected_output.txt >/dev/null; then echo "PASSED"; else echo "FAILED"; fi)

##############################################################################
# Builds the executable

all: $(executableFile)

%.o: $(ROSE_SOURCE_DIR)/%.C
		$(ROSE_CXX) $(ROSE_CPPFLAGS) $(ROSE_CXXFLAGS) -o $@ -c $^

%: %.o
		$(ROSE_CXX) $(ROSE_CXXFLAGS) -o $@ $^ $(ROSE_LDFLAGS) $(ROSE_LINK_RPATHS) -Wl,-rpath=$(ROSE_HOME)/lib

##############################################################################
# Checks output against expected output

check:
		@echo $(RESULT)
