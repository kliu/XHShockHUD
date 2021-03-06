//
//  UIView+XHShockHUD.h
//  XHShockHUD
//
//  Created by 曾 宪华 on 13-12-13.
//  Copyright (c) 2013年 嗨，我是曾宪华(@xhzengAIB)，曾加入YY Inc.担任高级移动开发工程师，拍立秀App联合创始人，热衷于简洁、而富有理性的事物 QQ:543413507 主页:http://zengxianhua.com All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (XHShockHUD)

- (void)showShockHUD:(UIView*)hudView
            duration:(NSTimeInterval)duration
          moveVector:(CGPoint)moveVector;

- (void)showShockHUD:(UIView*)hudView
     backgroundColor:(UIColor *)backgroundColor
            duration:(NSTimeInterval)duration
          moveVector:(CGPoint)moveVector;

- (void)showShockHUD:(UIView*)hudView
     backgroundColor:(UIColor *)backgroundColor
            duration:(NSTimeInterval)duration
               delay:(NSTimeInterval)delay
             options:(UIViewAnimationOptions)options
          moveVector:(CGPoint)moveVector;

- (void)showShockHUD:(UIView*)hudView
     backgroundColor:(UIColor *)backgroundColor
            duration:(NSTimeInterval)duration
               delay:(NSTimeInterval)delay
             options:(UIViewAnimationOptions)options
          animations:(void (^)(void))animations
          completion:(void (^)(BOOL))completion;

@end
