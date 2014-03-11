associatedObject
================

关联是指把两个对象相互关联起来，使得其中的一个对象作为另外一个对象的一部分。

associative 要用它必须使用<objc/runtime.h>的头文件

关于介绍可查看此博客地址：

http://blog.csdn.net/lin1986lin/article/details/20942807

Usage：
================
例如扩展UImage一个属性：

UIImage+LQImageSizeType.h
================

<pre>
typedef NS_ENUM(NSInteger, LQImageSizeType) {
    LQImageNetType,     //网络图
    LQImageSmallType,   //小图
    LQImageMiddleHType, //中图
    LQImageBigHType     //大图
};

@interface UIImage (LQImageSizeType)

@property (nonatomic,assign) LQImageSizeType lqImageSizeType;

@end
</pre>

UIImage+LQImageSizeType.m
================ 

<pre>
#import "UIImage+LQImageSizeType.h"
#import "NSObject+associatedObject.h"
@implementation UIImage (LQType)

- (void)setLQImageSizeType:(LQImageSizeType)lqImageSizeType
{
    [self setAssociatedObject:[NSNumber numberWithInt:lqImageSizeType] forKey:"lqImageSizeType"];
}

- (LQImageSizeType)lqImageSizeType
{
    return [[self associatedObjectForKey:"lqImageSizeType"] intValue];
}

@end
</pre>
