//
//  NSString+HRUtils.m
//  HRManger
//
//  Created by goofygao on 8/6/16.
//  Copyright © 2016 goofyy. All rights reserved.
//

#import "NSString+HRUtils.h"

@implementation NSString (HRUtils)

- (NSString *)pinyin{
    NSMutableString *str = [self mutableCopy];
    CFStringTransform(( CFMutableStringRef)str, NULL, kCFStringTransformMandarinLatin, NO);
    CFStringTransform((CFMutableStringRef)str, NULL, kCFStringTransformStripDiacritics, NO);
    
    return [str stringByReplacingOccurrencesOfString:@" " withString:@""];
}


@end
