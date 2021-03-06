#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=MinGW-Windows
CND_DLIB_EXT=dll
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/chapter10/account.o \
	${OBJECTDIR}/chapter12/cow.o \
	${OBJECTDIR}/chapter12/string2.o \
	${OBJECTDIR}/chapter12/usecow.o \
	${OBJECTDIR}/chapter8/golf.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/welcome_1.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/welcome_1.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/welcome_1 ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/chapter10/account.o: chapter10/account.cpp 
	${MKDIR} -p ${OBJECTDIR}/chapter10
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/chapter10/account.o chapter10/account.cpp

${OBJECTDIR}/chapter12/cow.o: chapter12/cow.cpp 
	${MKDIR} -p ${OBJECTDIR}/chapter12
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/chapter12/cow.o chapter12/cow.cpp

${OBJECTDIR}/chapter12/string2.o: chapter12/string2.cpp 
	${MKDIR} -p ${OBJECTDIR}/chapter12
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/chapter12/string2.o chapter12/string2.cpp

${OBJECTDIR}/chapter12/usecow.o: chapter12/usecow.cpp 
	${MKDIR} -p ${OBJECTDIR}/chapter12
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/chapter12/usecow.o chapter12/usecow.cpp

${OBJECTDIR}/chapter8/golf.o: chapter8/golf.cpp 
	${MKDIR} -p ${OBJECTDIR}/chapter8
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/chapter8/golf.o chapter8/golf.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/welcome_1.exe

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
