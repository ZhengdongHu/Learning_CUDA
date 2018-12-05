/**
*    author : huzhegndong
*    e-mail : 462468145@qq.com
*    date   : 20181121
*    desc   : test learning
*    version: 1.0
*/

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <math.h>

#ifndef _STITCH_LIB_DEFS_H_
#define _STITCH_LIB_DEFS_H_

#ifndef __APPLE__

#define STL_BUILD_GPU_CODE
    
#endif

#define STL_BUILD_CL_CODE

//TEST CODE
//#define STL_BUILD_TEST_CODE

//内存对齐
#define STL_SIZE_ALIGN(size,align)      (((size)+((align)-1))&(~((align)-1))) //对齐计算
#define STL_SIZE_ALIGN_64(size)         STL_SIZE_ALIGN(size,64)
#define STL_SIZE_ALIGN_128(size)        STL_SIZE_ALIGN(size,128)
#define STL_SIZE_ALIGN_256(size)        STL_SIZE_ALIGN(size,256)
#define STL_SIZE_ALIGN_USED(size)       STL_SIZE_ALIGN_256(size)

// 数学函数
#define STL_MAX(a,b)                    (((a) < (b)) ? (b) : (a))
#define STL_MIN(a,b)                    (((a) > (b)) ? (b) : (a))
#define STL_CLIP(v,minv,maxv)           STL_MIN((maxv),STL_MAX((v),(minv))

#define STL_PI                          (3.14159265358979323846264338327950288)
#define STL_PI_2                        (1.57079632679489661923132169163975144)
#define STL_TODEGRESS(a)                ((a) * 180.0f / STL_PI)
#define STL_TORADIANS(a)                ((a) * STL_PI / 180.0f)

#define STL_FLOAT32_MAX                 (3.40282346638528860e+38)
#define STL_FLOAT32_ZERO                (2.2204e-16)
#define STL_FLOAT32_ZERO_ROOT           (1.4901e-08)

// 数据类型定义
typedef unsigned char      STL_U08;
typedef signed char        STL_S08;
typedef unsigned short     STL_U16;
typedef short              STL_S16;
typedef unsigned int       STL_U32;
typedef int                STL_S32;
typedef long long          STL_S64;
typedef unsigned long long STL_U64;
typedef float              STL_F32;
typedef double             STL_F64;

typedef struct _STL_POINT
{
    STL_S32 x;
    STL_S32 y;

}STL_POINT;

typedef struct _STL_RECT
{
    STL_S32 x;      // 矩形区域左上角x坐标
    STL_S32 y;      // 矩形区域左上角y坐标
    STL_S32 width;  // 矩形区域宽度
    STL_S32 height; // 矩形区域高度

}STL_RECT;

typedef struct _STL_SIZE
{
    STL_S32 width;
    STL_S32 height;

}STL_SIZE;

typedef struct _STL_FC32
{
    STL_F32  re;
    STL_F32  im;
} STL_FC32;


// 状态码
typedef enum _STL_STATUS
{
    STL_OK = 0,      // 处理正确

    STL_ERR = -1,      // 处理错误


}STL_STATUS;






#endif // _STITCH_LIB_DEFS_H_

