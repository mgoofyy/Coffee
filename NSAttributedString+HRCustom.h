//
//  NSAttributedString+HRCustom.h
//  HRManger
//
//  Created by goofygao on 8/4/16.
//  Copyright © 2016 goofyy. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSAttributedString (HRCustom)

/**
 *  工厂方法 生成富文本
 *
 *  @param string    普通文本字符串
 *  @param fontSize  文字大小
 *  @param textColor 文字颜色
 *
 *  @return self
 */
+ (instancetype)hr_attributedWithString:(NSString *)string
                               fontSize:(CGFloat)fontSize
                              textColor:(UIColor *)textColor;

@end
