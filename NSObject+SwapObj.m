//
//  NSObject+SwapObj.m
//  uiimageCor
//
//  Created by goofygao on 5/6/16.
//  Copyright © 2016 goofyy. All rights reserved.
//

#import "NSObject+SwapObj.h"
#import <objc/runtime.h>

@implementation NSObject (SwapObj)

+ (BOOL)swapMethod:(SEL)originSel newSel:(SEL)newSel {
    Method originMethod = class_getClassMethod(self, originSel);
    Method newMethod = class_getClassMethod(self, newSel);
    if (originMethod && newMethod) {
        if (class_addMethod(self, originSel, method_getImplementation(newMethod), method_getTypeEncoding(newMethod))) {
            class_replaceMethod(self, newSel, method_getImplementation(originMethod), method_getTypeEncoding(originMethod));
        }
        return  YES;
    }
    return NO;
}


@end
