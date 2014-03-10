associatedObject
================

关联是指把两个对象相互关联起来，使得其中的一个对象作为另外一个对象的一部分。

associative 要用它必须使用<objc/runtime.h>的头文件

关于介绍可查看此博客地址：

http://blog.csdn.net/lin1986lin/article/details/20942807

如何使用：
================

例如我们扩展UImage一个属性的时候：

在UIImage+LQType.h头文件
================

typedef NS_ENUM(NSInteger, LQImageType) {
    LQImageNetType,//使用网络原图大小
    LQImageSmallType, //头像90X90
    LQImageMiddleHType 
};

@interface UIImage (LQType)

@property (nonatomic,assign) LQImageType lqImageType;

@end

在UIImage+LQType.m头文件
================ 

@implementation UIImage (LQType)

- (void)setBpImageType:(LQImageType)lqImageType
{
    [self setAssociatedObject:[NSNumber numberWithInt:lqImageType] forKey:"lqimagetype"];
}

- (BPImageType)lqImageType
{
    return [[self associatedObjectForKey:"lqimagetype"] intValue];
}

@end
