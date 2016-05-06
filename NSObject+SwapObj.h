//
//  NSObject+SwapObj.h
//  uiimageCor
//
//  Created by goofygao on 5/6/16.
//  Copyright © 2016 goofyy. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (SwapObj)

+ (BOOL)swapMethod:(SEL)originSel newSel:(SEL)newSel;

@end
