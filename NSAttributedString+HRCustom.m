//
//  NSAttributedString+HRCustom.m
//  HRManger
//
//  Created by goofygao on 8/4/16.
//  Copyright © 2016 goofyy. All rights reserved.
//

#import "NSAttributedString+HRCustom.h"

@implementation NSAttributedString (HRCustom)

+ (instancetype)hr_attributedWithString:(NSString *)string fontSize:(CGFloat)fontSize textColor:(UIColor *)textColor {
    NSDictionary *attributedDict = @{
                                     NSForegroundColorAttributeName:textColor,
                                     NSFontAttributeName:[UIFont systemFontOfSize:fontSize]
                                     };
    return [[NSAttributedString alloc] initWithString:string attributes:attributedDict];
}

@end
