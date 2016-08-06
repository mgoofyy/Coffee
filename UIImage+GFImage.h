//
//  UIColor+GFImage.h
//  GFSinaWeiBo
//
//  Created by goofygao on 15/12/15.
//  Copyright © 2015年 goofyy. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (GFImage)

/**
 *  图像不进行渲染
 *
 *  @param imageName 图像image string
 *
 *  @return UIimage
 */
+(instancetype)imageWithOriginImage:(NSString *)imageName;


/**
 *  图像拉伸
 *
 *  @param imageName UIImage String
 *
 *  @return UIImage
 */
+ (instancetype)imageWithStretchableName:(NSString *)imageName;

@end
