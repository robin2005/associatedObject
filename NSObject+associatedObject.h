//
//  NSObject+associatedObjectForSelector.h
//  TypeExtensions
//
//  Created by Robin2005 on 8/22/13.
//  Copyright (c) 2013 Lens Flare. Some rights reserved, see license.
//

#import <Foundation/Foundation.h>

@interface NSObject (associatedObject)

- (id)associatedObjectForKey:(const char *)key;

- (void)setAssociatedObject:(id)obj forKey:(const char *)key;

- (id)associatedObjectForSelector:(SEL)aSelector;

- (void)setAssociatedObject:(id)obj forSelector:(SEL)aSelector;

- (id)associatedObjectForClass:(Class)aClass;

- (void)setAssociatedObject:(id)obj forClass:(Class)aClass;

- (id)associatedObjectForClass;

- (void)setAssociatedObjectForClass:(id)obj;

@end
