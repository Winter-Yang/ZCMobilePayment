//
//  Header.h
//  UPAPayPlugin
//
//  Created by zhangyi on 10/27/15.
//  Copyright © 2015 UnionPay. All rights reserved.
//

#import <Foundation/Foundation.h>


/**
 *  ####筑巢支付结果resultCode对应值
 */

typedef NS_ENUM(NSInteger,ZCPayResultStatus) {

    /**
     *  支付成功
     */
    ZCPayResultStatusSuccess,

    /**
     *  支付失败
     */
    ZCPayResultStatusFailure,

    /**
     *  支付取消
     */
    ZCPayResultStatusCancel,

    /**
     *  支付取消，交易已发起，状态不确定，商户需查询商户后台确认支付状态
     */
    ZCPayResultStatusUnknownCancel
};


/**
 *  ##筑巢支付协议，必须实现，用于接收支付结果
 */
@protocol ZCSDKPayResultDelegate <NSObject>
/**
 *  支付结果回调函数
 *
 *  @param payResult   以NSDictionary结构向商户返回支付结果
 *
 *  结果参数包含以下信息
 *
 *  resultStatus:支付结果相应码（2000-2003），参考 ZCPayResultStatus
 *
 *  channel:支付类型（Ali，Wxin，Apple）
 *
 *  message:支付结果描述
 *
 *  otherInfo:支付其他信息（包括但不止商品信息等）
 */
-(void) zcpayResult:(NSDictionary *) payResult;
/**
 *  SDK页面即将消失时候调用
 */
-(void) zcpayWillDisappear;

@optional
/**
 *  注册BaseURL
 *
 *  @return BaseURL 字符串
 */
-(NSString *)registBaseURL;

@optional
/**
 *  注册微信请求订单URL
 *
 *  @return 微信请求订单URL 字符串
 */
-(NSString *)registWXinOrederURL;

@optional
/**
 *  注册微信订单查询状态URL
 *
 *  @return 微信订单查询状态URL 字符串
 */
-(NSString *)registWXinOrederStateURL;

@optional
/**
 *  注册支付宝请求订单URL
 *
 *  @return 支付宝请求订单URL 字符串
 */
-(NSString *)registAliOrederURL;

@optional
/**
 *  注册支付宝订单查询状态URL
 *
 *  @return 支付宝订单查询状态URL 字符串
 */
-(NSString *)registAliOrederStateURL;

@optional
/**
 *  注册苹果请求订单URL
 *
 *  @return 苹果请求订单URL 字符串 字符串
 */
-(NSString *)registAppleOrederURL;

@optional
/**
 *  注册苹果订单查询状态URL
 *
 *  @return 支付宝苹果查询状态URL 字符串
 */
-(NSString *)registAppleOrederStateURL;

@end
















