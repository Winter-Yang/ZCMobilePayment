//
//  ZCPayMenuViewController.h
//  ZCPaySDK
//
//  Created by 杨雯德 on 16/4/22.
//  Copyright © 2016年 杨雯德. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 * ##支付平台视图控制器
 */
@interface ZCSDKPayViewController : UIViewController
@property(nonatomic,strong)NSDictionary * projectInfo;
-(void)zcPayProduct:(NSDictionary *)product;
@end
