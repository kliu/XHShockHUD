//
//  XHShockHUDHeader.h
//  XHShockHUD
//
//  Created by 曾 宪华 on 13-12-13.
//  Copyright (c) 2013年 嗨，我是曾宪华(@xhzengAIB)，曾加入YY Inc.担任高级移动开发工程师，拍立秀App联合创始人，热衷于简洁、而富有理性的事物 QQ:543413507 主页:http://zengxianhua.com All rights reserved.
//

#ifndef XHShockHUD_XHShockHUDHeader_h
#define XHShockHUD_XHShockHUDHeader_h

#define XH_BUNDLE_IMAGE(_file) [[[[NSBundle mainBundle] resourcePath] stringByAppendingPathComponent:@"XHShockHUD.bundle"] stringByAppendingPathComponent:[NSString stringWithFormat:@"%@%@.png", _file, ([[UIScreen mainScreen] respondsToSelector:@selector(scale)] && [[UIScreen mainScreen] scale] == 2) ? @"@2x" : @""]]

typedef NS_ENUM(NSInteger, XHHUDType) {
    kXHHUDError = 0,
    kXHHUDSuccess,
    kXHHUDInfo,
    kXHHUDLoading
};

typedef NS_ENUM(NSInteger, XHHUDAnimationType) {
    kXHHUDFade = 0
};

#endif
