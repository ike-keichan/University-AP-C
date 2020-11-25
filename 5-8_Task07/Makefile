# 氏名：池田 敬祐
# 学生証番号：g1744069
# 提出日：10/28 -> 11/11

PROGRAM = 5-8_Task07
TARGET	= a.out
SOURCE_DIRECTORY = ./src
SOURCECODE_DIRECTORY = ./SourceCodes
BITCODE_DIRECTORY = ./BitCodes
ASSEMBLE_DIRECTORY = ./Assembles
OBJECT_DIRECTORY = ./Objects
ARCHIVE	= $(shell basename `pwd`)
CC	= clang
CCFLAGS	= $(shell \
	XcodeMajorVersion=`xcodebuild -version | head -n 1 | cut -d " " -f 2 | cut -d "." -f 1`; \
	if [ $${XcodeMajorVersion} -lt "12" ] ; \
	then \
		echo '-Weverything -Werror -save-temps' ; \
	else \
		echo '-Weverything -Werror -Wno-poison-system-directories -save-temps' ; \
	fi)
CCTEMPS	= *.o *.s *.i *.bc
REPORTS	= ClangStaticAnalyzerReports
CHECKER	= scan-build --use-analyzer=`which $(CC)` --view -o $(REPORTS)

DIRECTORIES = \
	SourceCodes \
	BitCodes \
	Assembles \
	Objects \

MODULES	= \
	Main \
	Task07

HEADER	= $(SOURCE_DIRECTORY)/defs.h
SOURCES = $(shell for each in `echo $(MODULES)` ; do echo $(SOURCE_DIRECTORY)/$${each}.c ; done)
OBJECTS	= $(shell for each in `echo $(MODULES)` ; do echo $(OBJECT_DIRECTORY)/$${each}.o ; done)

# コンパイルして実行ファイルを生成する。
all: $(TARGET)

# 実行ファイルを生成する。
$(TARGET): $(OBJECTS)
	$(CC) -o $@ $(OBJECTS)

$(SOURCES): $(HEADER)

# オブジェクトファイルを生成し、中間ファイル等を各ディレクトリに入れて整理する。
$(OBJECT_DIRECTORY)/%.o: $(SOURCE_DIRECTORY)/%.c prepare
	$(CC) $(CCFLAGS) -o $@ -c $<
	@if [ -e *.i ] ; then mv *.i $(SOURCECODE_DIRECTORY)/ ; fi;
	@if [ -e *.bc ] ; then mv *.bc $(BITCODE_DIRECTORY)/ ; fi;
	@if [ -e *.s ] ; then mv *.s $(ASSEMBLE_DIRECTORY)/ ; fi;

# いくつかのディレクトリを生成する。
prepare:
	for each in `echo $(DIRECTORIES)` ; do if [ ! -e $${each} ] ; then echo "mkdir $${each}" ; mkdir $${each} ; fi ; done;

# プログラムを実行する。
test: $(TARGET)
	./$(TARGET)

# 用意したテキストファイル全てを順番に入力とし、プログラムを実行する。
testAll: $(TARGET)
	./$(TARGET) < ./input01.txt
	./$(TARGET) < ./input02.txt
	./$(TARGET) < ./input03.txt

# input01.txtを入力とし、プログラムを実行する。
test01: $(TARGET)
	./$(TARGET) < ./input01.txt

# input02.txtを入力とし、プログラムを実行する。
test02: $(TARGET)
	./$(TARGET) < ./input02.txt

# input03.txtを入力とし、プログラムを実行する。
test03: $(TARGET)
	./$(TARGET) < ./input03.txt

# 生成した実行ファイル等を削除する。
clean:
	@for each in `ls $(TARGET) $(CCTEMPS) 2> /dev/null` ; do echo "rm -f $${each}" ; rm -f $${each} ; done
	@for each in `echo $(DIRECTORIES)` ; do if [ -e $${each} ] ; then echo "rm -rf $${each}" ; rm -rf $${each} ; fi ; done;
	@find . -name ".DS_Store" -exec rm {} ";" -exec echo rm -f {} ";"

# このディレクトリをzipファイルにする。
zip: clean wipe
	(cd ../ ; zip -r ./$(ARCHIVE).zip ./$(ARCHIVE)/)

# このディレクトリをtar.gzファイルにする。
tgz: clean wipe
	(cd ../ ; tar -czvf ./$(ARCHIVE).tar.gz ./$(ARCHIVE)/)

# 静的コード解析器scan-buildを実行し、プログラムを解析する。
lint: clean
	$(CHECKER) make

# 静的コード解析器scan-buildの生成したファイルを削除する。
wipe: clean
	@xattr -cr ./
	@if [ -e $(REPORTS) ] ; then echo "rm -rf $(REPORTS)" ; rm -f -r $(REPORTS) ; fi
	@(cd ../ ; if [ -e $(ARCHIVE).zip ] ; then echo "rm -f ../$(ARCHIVE).zip" ; rm -f $(ARCHIVE).zip ; fi)
	@(cd ../ ; if [ -e $(ARCHIVE).tar.gz ] ; then echo "rm -f ../$(ARCHIVE).tar.gz" ; rm -f $(ARCHIVE).tar.gz ; fi)
