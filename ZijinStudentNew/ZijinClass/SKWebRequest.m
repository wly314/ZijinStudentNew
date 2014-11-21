//
//  SKWebRequest.m
//  ZijinStudentNew
//
//  Created by LeouWang on 14/11/11.
//  Copyright (c) 2014年 _iSke_Leou_. All rights reserved.
//

#import "SKWebRequest.h"

#import "sys/utsname.h"
#import "MURPMainService.h"

#define SKFileName @"data.plist"

@implementation SKWebRequest

@synthesize skMainServiceUrl = _skMainServiceUrl;

@synthesize mcid = _mcid;
@synthesize umcid = _umcid;
@synthesize skbname = _skbname;
@synthesize skintr = _skintr;
@synthesize skisinformation = _skisinformation;
@synthesize skismail = _skismail;
@synthesize skmail = _skmail;
@synthesize userName = _userName;

static SKWebRequest * _singletonInstance = nil;

+ (SKWebRequest *) getSingletonInstance
{
    @synchronized([SKWebRequest class])
    {
        if (_singletonInstance == nil)
            //单例
            _singletonInstance = [[self alloc] init];
        
        return _singletonInstance;
    }
    return nil;
}

+ (id)alloc
{
    @synchronized([SKWebRequest class])
    {
        NSAssert(_singletonInstance == nil, @"Attempted to allocate a second instance of a singleton.");
        _singletonInstance = [super alloc];
        
        
        return _singletonInstance;
    }
    
    return nil;
}

- (id)init
{
    if((self = [super init]))
    {
        _skMainServiceUrl = @"http://218.94.126.74:8085/murpwebservice/murpmainservice.asmx";//紫金服务器
    }
    
    return self;
}
//@synthesize mcid = _mcid;
//@synthesize umcid = _umcid;
//@synthesize skbname = _skbname;
//@synthesize skintr = _skintr;
//@synthesize skisinformation = _skisinformation;
//@synthesize skismail = _skismail;
//@synthesize skmail = _skmail;
//@synthesize userName = _userName;

- (NSString *) dataFilePath {
    
    NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
    NSString *documentsDirectory = [paths objectAtIndex:0];
    
    return [documentsDirectory stringByAppendingPathComponent:SKFileName];
}

- (void) saveUserData
{
    NSMutableDictionary *dic = [[NSMutableDictionary alloc] init];
    
    [dic setObject:_userName forKey:@"_userName"];
    [dic setObject:_mcid forKey:@"_mcid"];
    [dic setObject:_umcid forKey:@"_umcid"];
    [dic setObject:_skintr forKey:@"_skintr"];
    [dic setObject:_skbname forKey:@"_skbname"];
    [dic setObject:_skmail forKey:@"_skmail"];
    
    [dic setObject:_skMainServiceUrl forKey:@"_skMainServiceUrl"];
    
    NSString *filePath = [self dataFilePath];
    [dic writeToFile:filePath atomically:YES];
    
}

- (BOOL) loadUserData
{
    NSString *filePath = [self dataFilePath];
    if ([[NSFileManager defaultManager] fileExistsAtPath:filePath])
    {
        NSMutableDictionary *dic  = [[NSMutableDictionary alloc] initWithContentsOfFile:filePath];
        
        _userName = [dic objectForKey:@"_userName"];
        _mcid = [dic objectForKey:@"_mcid"];
        _umcid = [dic objectForKey:@"_umcid"];
        _skintr = [dic objectForKey:@"_skintr"];
        _skbname = [dic objectForKey:@"_skbname"];
        _skmail = [dic objectForKey:@"_skmail"];
        _skMainServiceUrl = [dic objectForKey:@"_skMainServiceUrl"];
        
        if(nil == _umcid)
        {
            return NO;
        }
        
        return YES;
    }
    return NO;
}

#pragma mark - MainService Methods -Login

- (BOOL)loginStudentOfUserName:(NSString *)userName password:(NSString *)password{
    
    MURPMainServiceSoapBinding *binding = [[MURPMainServiceSoapBinding alloc] initWithAddress:_skMainServiceUrl];
    binding.logXMLInOut = YES;  // to get logging to the console.
    
    MURPMainService_loginverifystudent_B *loginParm = [[MURPMainService_loginverifystudent_B alloc] init];
    
    loginParm.loginname = userName;
    loginParm.loginpass = password;
    loginParm.tec = @"iphone";
    //info--| 手机型号 | WIFI| 版本号 |手机号码
    //get the device model and the system version
    struct utsname systemInfo;
    uname(&systemInfo);
    NSString *machine =[NSString stringWithCString:systemInfo.machine encoding:NSUTF8StringEncoding];
    loginParm.logininfo = machine;
    loginParm.strbak = @"";
    
    MURPMainServiceSoapBindingResponse *resp = [binding loginverifystudent_BUsingParameters:loginParm];
    
    for (id mine in resp.bodyParts)
    {
        if ([mine isKindOfClass:[MURPMainService_loginverifystudent_BResponse class]])
        {
            MURPMainService_LoginDataNew * loginData = [mine loginverifystudent_BResult];
            _userName = userName;
            _skbname = loginData.bname;
            _mcid   = loginData.bid;
            _umcid = loginData.umcid;
            _skintr  = loginData.intr;
            _skmail = loginData.mail;
            
            //身份验证失败
            if([loginData.bid intValue]== -3){
                return NO;
            }
            
            //登录成功
            if ([_umcid intValue] > 0){
                //已完善个人信息
                if([loginData.isinformation intValue] == 1){
                    //未验证邮箱
                    if([loginData.ismail intValue] == 0){
                        
                    }
                }else if([loginData.isinformation intValue] == 0){
                    
                }
                
                return YES;
            }
        }
    }
    
    return NO;
}

@end

