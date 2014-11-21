//
//  SKWebRequest.h
//  ZijinStudentNew
//
//  Created by LeouWang on 14/11/11.
//  Copyright (c) 2014年 _iSke_Leou_. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SKWebRequest : NSObject


@property(nonatomic, strong)NSString *skMainServiceUrl;

@property(nonatomic, strong)NSNumber *mcid;//学校学生或者教师编码（登录返回bid） 已经废弃 见umcid
@property(nonatomic, strong)NSNumber *umcid;//学校学生或者教师编码

@property(nonatomic, strong)NSString *skbname;//登录返回的进行请求的IP

@property(nonatomic, strong)NSString *skintr;//？？old version: self.mcid   = loginData.bid;

@property(nonatomic, strong)NSString *skisinformation;//？？

@property(nonatomic, strong)NSString *skismail;//是否验证邮箱

@property(nonatomic, strong)NSString *skmail;//验证的邮箱

@property(nonatomic, strong)NSString *userName;//登录名

/* 单例 初始化方法 */
+ (SKWebRequest *)getSingletonInstance;
/* 保存用户信息 */
- (void) saveUserData;
/* 获取用户信息 */
- (BOOL) loadUserData;
/* 学生登录验证方法 */
- (BOOL)loginStudentOfUserName:(NSString *)userName password:(NSString *)password;

@end
