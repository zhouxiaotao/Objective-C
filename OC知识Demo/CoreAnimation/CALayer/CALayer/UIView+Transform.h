//
//  UIView+Transform.h
//  CALayer
//
//  Created by EastElsoft on 2017/9/16.
//  Copyright © 2017年 XiFeng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Transform)<CAAnimationDelegate>

-(void)YSTransform_circleColor_toColor:(UIColor*)toColor Duration:(CGFloat)duration StartPoint:(CGPoint)startPoint;

-(void)YSTransform_circleImage_toImage:(UIImage*)toImage Duration:(CGFloat)duration StartPoint:(CGPoint)startPoint;

-(void)YSTransForm_beginZoom_max:(CGFloat)max min:(CGFloat)min;

-(void)YSTransForm_StopZoom;


@end
