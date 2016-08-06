//
//  UIBarButtonItem+GFBarButtonItem.h
//  GFSinaWeiBo
//
//  Created by goofygao on 15/12/16.
//  Copyright © 2015年 goofyy. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIBarButtonItem (GFBarButtonItem)

/**
 *  工厂模式产生Baritem
 *
 *  @param image         图像
 *  @param highImage     高亮图片
 *  @param target        self
 *  @param action        @selector
 *  @param controlEvents 触发
 *
 *  @return UIBarButtonItem
 */
+ (UIBarButtonItem *)barButtonItemWithImage:(UIImage *)image highImage:(UIImage *)highImage target:(id)target action:(SEL)action forControlEvents:(UIControlEvents)controlEvents;


@end
