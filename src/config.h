#ifndef TB_CONFIG_H
#define TB_CONFIG_H

// arch
//#define TB_CONFIG_ARCH_x86
#define TB_CONFIG_ARCH_ARM
//#define TB_CONFIG_ARCH_MIPS
//#define TB_CONFIG_ARCH_SPARC
//#define TB_CONFIG_ARCH_PPC
//#define TB_CONFIG_ARCH_SH4

// arm
#define TB_CONFIG_ARM_VERSION 	(6)
//#define TA_CONFIG_ARM_THUMB
//#define TA_CONFIG_ARM_JAZELLE
//#define TA_CONFIG_ARM_VFP
//#define TA_CONFIG_ARM_MMU 
//#define TA_CONFIG_ARM_MPU 

// os
#define TB_CONFIG_OS_IOS
#define TB_CONFIG_OS_IOS_VERSION_MAJOR 	(4)
#define TB_CONFIG_OS_IOS_VERSION_MINOR 	(2)

// cpu
//#define TB_CONFIG_CPU_BIGENDIAN
//#define TB_CONFIG_CPU_HAS_CONDITIONAL_INSTR

// compiler
//#define TB_CONFIG_COMPILER_NOT_SUPPORT_INLINE
//#define TB_CONFIG_COMPILER_NOT_SUPPORT_INLINE_ASM
//#define TB_CONFIG_COMPILER_NOT_SUPPORT_VARARG_MACRO
//#define TB_CONFIG_COMPILER_NOT_SUPPORT_ANONYMOUS_UNION_STRUCT
//#define TB_CONFIG_COMPILER_NOT_SUPPORT_FUNC_AND_VOIDPTR_CAST
//#define TB_CONFIG_COMPILER_NOT_SUPPORT_SPECIFIC_MEMBER_INITIAL
//#define TB_CONFIG_COMPILER_NOT_SUPPORT_ANONYMOUS_STRUCT_DEFINATION
//#define TB_CONFIG_COMPILER_NOT_SUPPORT_ANONYMOUS_ARRAY_DEFINATION
//#define TB_CONFIG_COMPILER_NOT_SUPPORT_DYNAMIC_ARRAY_DEFINATION

// assembler
#define TB_CONFIG_ASSEMBLER_GAS
//#define TB_CONFIG_ASSEMBLER_MASM
//#define TB_CONFIG_ASSEMBLER_NASM
//#define TB_CONFIG_ASSEMBLER_YASM

// keyword
#define TB_CONFIG_KEYWORD_INLINE		inline
#define TB_CONFIG_KEYWORD_REGISTER		register
#define TB_CONFIG_KEYWORD_ASM 			__asm__
#define TB_CONFIG_KEYWORD_FUNC			__FUNCTION__
#define TB_CONFIG_KEYWORD_LINE			__LINE__
#define TB_CONFIG_KEYWORD_FILE			__FILE__

// type
//#define TB_CONFIG_TYPE_INT64
#define TB_CONFIG_TYPE_FLOAT
#define TB_CONFIG_TYPE_SCALAR_IS_FIXED

// optimization
//#define TB_CONFIG_OPTI_SSE2_ENABLE

// binary
#define TB_CONFIG_BINARY_SMALL

// memory
#define TB_CONFIG_MEMORY_MODE_SMALL
#define TB_CONFIG_MEMORY_POOL_ENABLE
//#define TB_CONFIG_MEMORY_UNALIGNED_ACCESSE_ENABLE

// libs
#define TB_CONFIG_LIBS_ZLIB


#endif
// config
#ifndef tbox_AUTO_CONFIG_H
#define tbox_AUTO_CONFIG_H
#define tbox_CONFIG_DEBUG 0
#endif
