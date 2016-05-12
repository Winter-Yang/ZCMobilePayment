//
//  ZCPayRegist.h
//  ZCPaySDK
//
//  Created by 杨雯德 on 16/4/24.
//  Copyright © 2016年 杨雯德. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 * ##此类主要负责注册各支付平台相关配置服务以及，调用支付结果集
 */
@interface ZCSDKPayMob : NSObject

/**
 *  ZCPayMob的成员函数，向微信终端程序注册第三方应用。
 *  需要在每次启动第三方应用程序时调用。第一次调用后，会在微信的可用应用列表中出现。
 *  @param appid   微信开发者ID
 *  @param appdesc 应用附加信息，长度不超过1024字节
 */
+(void)registerWxinApp:(NSString *)appid withDescription:(NSString *)appdesc;
/**
 *  ZCPayMob的成员函数，向支付宝终端程序注册第三方应用。
 *  需要在每次启动第三方应用程序时调用。第一次调用后，会在支付宝的可用应用列表中出现。
 *  @param appscheme   URLScheme，用于支付宝返回当前应用程序
 *  @warning ‘appscheme’  比不为空，否则无法收到支付宝结果回调
 */
+(void)registerAliAppWithScheme:(NSString *)appscheme;

/**
 *  ZCPayMob的成员函数，支付终端的应用请求。
 *  @param url 用于支付宝返回当前应用程序的结果处理
 */
+(BOOL)applicationopenURL:(NSURL *)url;

/**
 *  注册代理，用于接收支付结果回调
 *
 *  @param object 代理
 */
+(void)registerPayResultDelegate:(id)object;

/**
 *  注册苹果商户ID
 *
 *  @param mechantID 苹果商户ID
 */
+(void)registerMechantID:(NSString *)mechantID mode:(NSString *)mode;
@end
