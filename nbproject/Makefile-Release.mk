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
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/chapter10/account.o \
	${OBJECTDIR}/chapter10/useacc1.o \
	${OBJECTDIR}/chapter12/cow.o \
	${OBJECTDIR}/chapter12/string2.o \
	${OBJECTDIR}/chapter12/usecow.o \
	${OBJECTDIR}/chapter7/exercise_7_2.o \
	${OBJECTDIR}/chapter7/exercise_7_3.o \
	${OBJECTDIR}/chapter7/exercise_7_4.o \
	${OBJECTDIR}/chapter7/exercise_7_5.o \
	${OBJECTDIR}/chapter7/exercise_7_6.o \
	${OBJECTDIR}/chapter7/exercise_7_7.o \
	${OBJECTDIR}/chapter7/exercise_7_8.o \
	${OBJECTDIR}/chapter7/exercise_7_9.o \
	${OBJECTDIR}/chapter8/exercise_8_1.o \
	${OBJECTDIR}/chapter8/exercise_8_2.o \
	${OBJECTDIR}/chapter8/exercise_8_3.o \
	${OBJECTDIR}/chapter8/exercise_8_4.o \
	${OBJECTDIR}/chapter8/exercise_8_5.o \
	${OBJECTDIR}/chapter8/exercise_8_6.o \
	${OBJECTDIR}/chapter8/exercise_8_7.o \
	${OBJECTDIR}/chapter8/exercise_9_1.o \
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
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/chapter10/account.o chapter10/account.cpp

${OBJECTDIR}/chapter10/useacc1.o: chapter10/useacc1.cpp 
	${MKDIR} -p ${OBJECTDIR}/chapter10
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/chapter10/useacc1.o chapter10/useacc1.cpp

${OBJECTDIR}/chapter12/cow.o: chapter12/cow.cpp 
	${MKDIR} -p ${OBJECTDIR}/chapter12
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/chapter12/cow.o chapter12/cow.cpp

${OBJECTDIR}/chapter12/string2.o: chapter12/string2.cpp 
	${MKDIR} -p ${OBJECTDIR}/chapter12
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/chapter12/string2.o chapter12/string2.cpp

${OBJECTDIR}/chapter12/usecow.o: chapter12/usecow.cpp 
	${MKDIR} -p ${OBJECTDIR}/chapter12
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/chapter12/usecow.o chapter12/usecow.cpp

${OBJECTDIR}/chapter7/exercise_7_2.o: chapter7/exercise_7_2.cpp 
	${MKDIR} -p ${OBJECTDIR}/chapter7
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/chapter7/exercise_7_2.o chapter7/exercise_7_2.cpp

${OBJECTDIR}/chapter7/exercise_7_3.o: chapter7/exercise_7_3.cpp 
	${MKDIR} -p ${OBJECTDIR}/chapter7
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/chapter7/exercise_7_3.o chapter7/exercise_7_3.cpp

${OBJECTDIR}/chapter7/exercise_7_4.o: chapter7/exercise_7_4.cpp 
	${MKDIR} -p ${OBJECTDIR}/chapter7
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/chapter7/exercise_7_4.o chapter7/exercise_7_4.cpp

${OBJECTDIR}/chapter7/exercise_7_5.o: chapter7/exercise_7_5.cpp 
	${MKDIR} -p ${OBJECTDIR}/chapter7
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/chapter7/exercise_7_5.o chapter7/exercise_7_5.cpp

${OBJECTDIR}/chapter7/exercise_7_6.o: chapter7/exercise_7_6.cpp 
	${MKDIR} -p ${OBJECTDIR}/chapter7
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/chapter7/exercise_7_6.o chapter7/exercise_7_6.cpp

${OBJECTDIR}/chapter7/exercise_7_7.o: chapter7/exercise_7_7.cpp 
	${MKDIR} -p ${OBJECTDIR}/chapter7
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/chapter7/exercise_7_7.o chapter7/exercise_7_7.cpp

${OBJECTDIR}/chapter7/exercise_7_8.o: chapter7/exercise_7_8.cpp 
	${MKDIR} -p ${OBJECTDIR}/chapter7
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/chapter7/exercise_7_8.o chapter7/exercise_7_8.cpp

${OBJECTDIR}/chapter7/exercise_7_9.o: chapter7/exercise_7_9.cpp 
	${MKDIR} -p ${OBJECTDIR}/chapter7
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/chapter7/exercise_7_9.o chapter7/exercise_7_9.cpp

${OBJECTDIR}/chapter8/exercise_8_1.o: chapter8/exercise_8_1.cpp 
	${MKDIR} -p ${OBJECTDIR}/chapter8
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/chapter8/exercise_8_1.o chapter8/exercise_8_1.cpp

${OBJECTDIR}/chapter8/exercise_8_2.o: chapter8/exercise_8_2.cpp 
	${MKDIR} -p ${OBJECTDIR}/chapter8
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/chapter8/exercise_8_2.o chapter8/exercise_8_2.cpp

${OBJECTDIR}/chapter8/exercise_8_3.o: chapter8/exercise_8_3.cpp 
	${MKDIR} -p ${OBJECTDIR}/chapter8
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/chapter8/exercise_8_3.o chapter8/exercise_8_3.cpp

${OBJECTDIR}/chapter8/exercise_8_4.o: chapter8/exercise_8_4.cpp 
	${MKDIR} -p ${OBJECTDIR}/chapter8
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/chapter8/exercise_8_4.o chapter8/exercise_8_4.cpp

${OBJECTDIR}/chapter8/exercise_8_5.o: chapter8/exercise_8_5.cpp 
	${MKDIR} -p ${OBJECTDIR}/chapter8
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/chapter8/exercise_8_5.o chapter8/exercise_8_5.cpp

${OBJECTDIR}/chapter8/exercise_8_6.o: chapter8/exercise_8_6.cpp 
	${MKDIR} -p ${OBJECTDIR}/chapter8
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/chapter8/exercise_8_6.o chapter8/exercise_8_6.cpp

${OBJECTDIR}/chapter8/exercise_8_7.o: chapter8/exercise_8_7.cpp 
	${MKDIR} -p ${OBJECTDIR}/chapter8
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/chapter8/exercise_8_7.o chapter8/exercise_8_7.cpp

${OBJECTDIR}/chapter8/exercise_9_1.o: chapter8/exercise_9_1.cpp 
	${MKDIR} -p ${OBJECTDIR}/chapter8
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/chapter8/exercise_9_1.o chapter8/exercise_9_1.cpp

${OBJECTDIR}/chapter8/golf.o: chapter8/golf.cpp 
	${MKDIR} -p ${OBJECTDIR}/chapter8
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/chapter8/golf.o chapter8/golf.cpp

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
