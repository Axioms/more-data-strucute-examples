##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=polynomial
ConfigurationName      :=Debug
WorkspacePath          :="D:/Users/axiom/Documents/drive/College/Second Year/Spring Semester/Data Structures/Home Work/HomeWorkCode"
ProjectPath            :="D:/Users/axiom/Documents/drive/College/Second Year/Spring Semester/Data Structures/Home Work/HomeWorkCode/polynomial"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=axiom
Date                   :=02/05/2020
CodeLitePath           :="D:/Program Files/CodeLite"
LinkerName             :=C:/MinGW/bin/g++.exe
SharedObjectLinkerName :=C:/MinGW/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="polynomial.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/MinGW/bin/windres.exe
LinkOptions            :=  -static-libgcc -static-libstdc++
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/MinGW/bin/ar.exe rcu
CXX      := C:/MinGW/bin/g++.exe
CC       := C:/MinGW/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/MinGW/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=D:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/src_poly0.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_polyexam0.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/src_poly0.cpp$(ObjectSuffix): src/poly0.cpp $(IntermediateDirectory)/src_poly0.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/Users/axiom/Documents/drive/College/Second Year/Spring Semester/Data Structures/Home Work/HomeWorkCode/polynomial/src/poly0.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_poly0.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_poly0.cpp$(DependSuffix): src/poly0.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_poly0.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_poly0.cpp$(DependSuffix) -MM src/poly0.cpp

$(IntermediateDirectory)/src_poly0.cpp$(PreprocessSuffix): src/poly0.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_poly0.cpp$(PreprocessSuffix) src/poly0.cpp

$(IntermediateDirectory)/src_polyexam0.cpp$(ObjectSuffix): src/polyexam0.cpp $(IntermediateDirectory)/src_polyexam0.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/Users/axiom/Documents/drive/College/Second Year/Spring Semester/Data Structures/Home Work/HomeWorkCode/polynomial/src/polyexam0.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_polyexam0.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_polyexam0.cpp$(DependSuffix): src/polyexam0.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_polyexam0.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_polyexam0.cpp$(DependSuffix) -MM src/polyexam0.cpp

$(IntermediateDirectory)/src_polyexam0.cpp$(PreprocessSuffix): src/polyexam0.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_polyexam0.cpp$(PreprocessSuffix) src/polyexam0.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


