//
//  Easy.h
//  fastSign
//
//  Created by EasyIOS on 14-4-11.
//  Copyright (c) 2014年 zhuchao. All rights reserved.
//

#import "Bee_Singleton.h"
#import "NSString+EasyExtend.h"
#import "NSData+EasyExtend.h"
#import "Bee_UserDefaults.h"
#import "NSNumber+EasyExtend.h"
#import "NSDate+EasyExtend.h"
#import "NSArray+EasyExtend.h"
#import "NSObject+BeeNotification.h"
#import "NSDictionary+EasyExtend.h"
#import "UIColor+EasyExtend.h"
#import "UIView+EasyExtend.h"
#import "NSURL+EasyExtend.h"
#import "UILabel+EasyExtend.h"
#import "UIButton+EasyExtend.h"
#import "UIImageView+MKNetworkKitAdditions.h"
#import "UIImage+EasyExtend.h"
#import "UITabBarController+EasyExtend.h"
#import "Bee_SystemInfo.h"
#import "Bee_Sandbox.h"
#import "EzUILabel.h"
#import "EzMiButton.h"
#import "RTLabel.h"
#import "UIGridView.h"
#import "EzUITapGestureRecognizer.h"
#import "SVProgressHUD.h"
#import "DialogUtil.h"
#import "SysTool.h"
#import "TimeTool.h"
#import "ImageTool.h"
#import "BEVersion.h"

#define EZFRAME(frame)     NSLog(@"%.1f,%.1f,%.1f,%.1f",frame.origin.x,frame.origin.y,frame.size.width,frame.size.height);

@interface Easy : NSObject

@end
