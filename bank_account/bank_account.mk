##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=bank_account
ConfigurationName      :=Debug
WorkspacePath          :="D:/Users/axiom/Documents/drive/College/Second Year/Spring Semester/Data Structures/Home Work/HomeWorkCode"
ProjectPath            :="D:/Users/axiom/Documents/drive/College/Second Year/Spring Semester/Data Structures/Home Work/HomeWorkCode/bank_account"
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
ObjectsFileList        :="bank_account.txt"
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
Objects0=$(IntermediateDirectory)/test.cpp$(ObjectSuffix) $(IntermediateDirectory)/bankAccount.cpp$(ObjectSuffix) 



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
$(IntermediateDirectory)/test.cpp$(ObjectSuffix): test.cpp $(IntermediateDirectory)/test.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/Users/axiom/Documents/drive/College/Second Year/Spring Semester/Data Structures/Home Work/HomeWorkCode/bank_account/test.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/test.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/test.cpp$(DependSuffix): test.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/test.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/test.cpp$(DependSuffix) -MM test.cpp

$(IntermediateDirectory)/test.cpp$(PreprocessSuffix): test.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/test.cpp$(PreprocessSuffix) test.cpp

$(IntermediateDirectory)/bankAccount.cpp$(ObjectSuffix): bankAccount.cpp $(IntermediateDirectory)/bankAccount.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/Users/axiom/Documents/drive/College/Second Year/Spring Semester/Data Structures/Home Work/HomeWorkCode/bank_account/bankAccount.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/bankAccount.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/bankAccount.cpp$(DependSuffix): bankAccount.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/bankAccount.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/bankAccount.cpp$(DependSuffix) -MM bankAccount.cpp

$(IntermediateDirectory)/bankAccount.cpp$(PreprocessSuffix): bankAccount.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/bankAccount.cpp$(PreprocessSuffix) bankAccount.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


