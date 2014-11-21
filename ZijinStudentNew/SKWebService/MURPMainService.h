#import <Foundation/Foundation.h>
#import "USAdditions.h"
#import <libxml/tree.h>
#import "USGlobals.h"
@class MURPMainService_loginverifystudent_B;
@class MURPMainService_loginverifystudent_BResponse;
@class MURPMainService_LoginDataNew;
@class MURPMainService_modifyApns_iphoneid1_B;
@class MURPMainService_modifyApns_iphoneid1_BResponse;
@class MURPMainService_InformationInsert_B;
@class MURPMainService_InformationInsert_BResponse;
@class MURPMainService_InformationMailUpdate_B;
@class MURPMainService_InformationMailUpdate_BResponse;
@class MURPMainService_murpverifymod_B;
@class MURPMainService_murpverifymod_BResponse;
@class MURPMainService_LoginData;
@class MURPMainService_AddOpinion_B;
@class MURPMainService_AddOpinion_BResponse;
@class MURPMainService_InformationPhoneUpdate_B;
@class MURPMainService_InformationPhoneUpdate_BResponse;
@class MURPMainService_loginverifyteacherfd_B;
@class MURPMainService_loginverifyteacherfd_BResponse;
@class MURPMainService_ververify_B;
@class MURPMainService_ververify_BResponse;
@class MURPMainService_ArrayOfString;
@class MURPMainService_insertFunctionrecords_B;
@class MURPMainService_insertFunctionrecords_BResponse;
@class MURPMainService_getDeptPhoneByPage_S;
@class MURPMainService_getDeptPhoneByPage_SResponse;
@class MURPMainService_ArrayOfGroupName;
@class MURPMainService_GroupName;
@class MURPMainService_saveFileOfPic;
@class MURPMainService_saveFileOfPicResponse;
@interface MURPMainService_loginverifystudent_B : NSObject {
	
/* elements */
	NSString * loginname;
	NSString * loginpass;
	NSString * tec;
	NSString * logininfo;
	NSString * strbak;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (MURPMainService_loginverifystudent_B *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * loginname;
@property (retain) NSString * loginpass;
@property (retain) NSString * tec;
@property (retain) NSString * logininfo;
@property (retain) NSString * strbak;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface MURPMainService_LoginDataNew : NSObject {
	
/* elements */
	NSString * bname;
	NSNumber * bid;
	NSNumber * umcid;
	NSString * intr;
	NSNumber * isinformation;
	NSNumber * ismail;
	NSString * mail;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (MURPMainService_LoginDataNew *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * bname;
@property (retain) NSNumber * bid;
@property (retain) NSNumber * umcid;
@property (retain) NSString * intr;
@property (retain) NSNumber * isinformation;
@property (retain) NSNumber * ismail;
@property (retain) NSString * mail;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface MURPMainService_loginverifystudent_BResponse : NSObject {
	
/* elements */
	MURPMainService_LoginDataNew * loginverifystudent_BResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (MURPMainService_loginverifystudent_BResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) MURPMainService_LoginDataNew * loginverifystudent_BResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface MURPMainService_modifyApns_iphoneid1_B : NSObject {
	
/* elements */
	NSString * mcid;
	NSString * iphoneid;
	NSString * uip;
	NSNumber * uid;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (MURPMainService_modifyApns_iphoneid1_B *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * mcid;
@property (retain) NSString * iphoneid;
@property (retain) NSString * uip;
@property (retain) NSNumber * uid;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface MURPMainService_modifyApns_iphoneid1_BResponse : NSObject {
	
/* elements */
	USBoolean * modifyApns_iphoneid1_BResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (MURPMainService_modifyApns_iphoneid1_BResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) USBoolean * modifyApns_iphoneid1_BResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface MURPMainService_InformationInsert_B : NSObject {
	
/* elements */
	NSNumber * mid;
	NSString * mphone;
	NSString * mail;
	NSString * qq;
	NSString * informationbak1;
	NSString * informationbak2;
	NSString * informationbak3;
	NSString * informationbak4;
	NSNumber * isinformation;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (MURPMainService_InformationInsert_B *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * mid;
@property (retain) NSString * mphone;
@property (retain) NSString * mail;
@property (retain) NSString * qq;
@property (retain) NSString * informationbak1;
@property (retain) NSString * informationbak2;
@property (retain) NSString * informationbak3;
@property (retain) NSString * informationbak4;
@property (retain) NSNumber * isinformation;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface MURPMainService_InformationInsert_BResponse : NSObject {
	
/* elements */
	NSString * InformationInsert_BResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (MURPMainService_InformationInsert_BResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * InformationInsert_BResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface MURPMainService_InformationMailUpdate_B : NSObject {
	
/* elements */
	NSNumber * mid;
	NSString * oldmail;
	NSString * newmail;
	NSString * pass;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (MURPMainService_InformationMailUpdate_B *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * mid;
@property (retain) NSString * oldmail;
@property (retain) NSString * newmail;
@property (retain) NSString * pass;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface MURPMainService_InformationMailUpdate_BResponse : NSObject {
	
/* elements */
	NSString * InformationMailUpdate_BResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (MURPMainService_InformationMailUpdate_BResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * InformationMailUpdate_BResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface MURPMainService_murpverifymod_B : NSObject {
	
/* elements */
	NSString * tgname;
	NSString * tgpass;
	NSString * tgnamenew;
	NSString * tgpassnew;
	NSNumber * mcid;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (MURPMainService_murpverifymod_B *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * tgname;
@property (retain) NSString * tgpass;
@property (retain) NSString * tgnamenew;
@property (retain) NSString * tgpassnew;
@property (retain) NSNumber * mcid;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface MURPMainService_LoginData : NSObject {
	
/* elements */
	NSString * bname;
	NSNumber * bid;
	NSNumber * umcid;
	NSString * intr;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (MURPMainService_LoginData *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * bname;
@property (retain) NSNumber * bid;
@property (retain) NSNumber * umcid;
@property (retain) NSString * intr;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface MURPMainService_murpverifymod_BResponse : NSObject {
	
/* elements */
	MURPMainService_LoginData * murpverifymod_BResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (MURPMainService_murpverifymod_BResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) MURPMainService_LoginData * murpverifymod_BResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface MURPMainService_AddOpinion_B : NSObject {
	
/* elements */
	NSString * mcid;
	NSString * opinioncontent;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (MURPMainService_AddOpinion_B *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * mcid;
@property (retain) NSString * opinioncontent;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface MURPMainService_AddOpinion_BResponse : NSObject {
	
/* elements */
	USBoolean * AddOpinion_BResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (MURPMainService_AddOpinion_BResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) USBoolean * AddOpinion_BResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface MURPMainService_InformationPhoneUpdate_B : NSObject {
	
/* elements */
	NSNumber * mid;
	NSString * oldmphone;
	NSString * newmphone;
	NSString * pass;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (MURPMainService_InformationPhoneUpdate_B *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * mid;
@property (retain) NSString * oldmphone;
@property (retain) NSString * newmphone;
@property (retain) NSString * pass;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface MURPMainService_InformationPhoneUpdate_BResponse : NSObject {
	
/* elements */
	USBoolean * InformationPhoneUpdate_BResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (MURPMainService_InformationPhoneUpdate_BResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) USBoolean * InformationPhoneUpdate_BResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface MURPMainService_loginverifyteacherfd_B : NSObject {
	
/* elements */
	NSString * loginname;
	NSString * loginpass;
	NSString * tec;
	NSString * type;
	NSString * logininfo;
	NSString * strbak;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (MURPMainService_loginverifyteacherfd_B *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * loginname;
@property (retain) NSString * loginpass;
@property (retain) NSString * tec;
@property (retain) NSString * type;
@property (retain) NSString * logininfo;
@property (retain) NSString * strbak;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface MURPMainService_loginverifyteacherfd_BResponse : NSObject {
	
/* elements */
	MURPMainService_LoginDataNew * loginverifyteacherfd_BResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (MURPMainService_loginverifyteacherfd_BResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) MURPMainService_LoginDataNew * loginverifyteacherfd_BResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface MURPMainService_ververify_B : NSObject {
	
/* elements */
	NSString * type;
	NSString * tec;
	NSNumber * ver;
	NSNumber * mcid;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (MURPMainService_ververify_B *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * type;
@property (retain) NSString * tec;
@property (retain) NSNumber * ver;
@property (retain) NSNumber * mcid;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface MURPMainService_ArrayOfString : NSObject {
	
/* elements */
	NSMutableArray *string;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (MURPMainService_ArrayOfString *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addString:(NSString *)toAdd;
@property (readonly) NSMutableArray * string;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface MURPMainService_ververify_BResponse : NSObject {
	
/* elements */
	MURPMainService_ArrayOfString * ververify_BResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (MURPMainService_ververify_BResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) MURPMainService_ArrayOfString * ververify_BResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface MURPMainService_insertFunctionrecords_B : NSObject {
	
/* elements */
	NSString * str;
	NSString * mcid;
	NSString * type;
	NSString * tec;
	NSString * ver;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (MURPMainService_insertFunctionrecords_B *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * str;
@property (retain) NSString * mcid;
@property (retain) NSString * type;
@property (retain) NSString * tec;
@property (retain) NSString * ver;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface MURPMainService_insertFunctionrecords_BResponse : NSObject {
	
/* elements */
	USBoolean * insertFunctionrecords_BResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (MURPMainService_insertFunctionrecords_BResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) USBoolean * insertFunctionrecords_BResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface MURPMainService_getDeptPhoneByPage_S : NSObject {
	
/* elements */
	NSNumber * mcid;
	NSNumber * page;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (MURPMainService_getDeptPhoneByPage_S *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * mcid;
@property (retain) NSNumber * page;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface MURPMainService_GroupName : NSObject {
	
/* elements */
	NSString * bname;
	NSNumber * bid;
	NSString * intr;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (MURPMainService_GroupName *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * bname;
@property (retain) NSNumber * bid;
@property (retain) NSString * intr;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface MURPMainService_ArrayOfGroupName : NSObject {
	
/* elements */
	NSMutableArray *GroupName;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (MURPMainService_ArrayOfGroupName *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addGroupName:(MURPMainService_GroupName *)toAdd;
@property (readonly) NSMutableArray * GroupName;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface MURPMainService_getDeptPhoneByPage_SResponse : NSObject {
	
/* elements */
	MURPMainService_ArrayOfGroupName * getDeptPhoneByPage_SResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (MURPMainService_getDeptPhoneByPage_SResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) MURPMainService_ArrayOfGroupName * getDeptPhoneByPage_SResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface MURPMainService_saveFileOfPic : NSObject {
	
/* elements */
	NSString * binData;
	NSString * fileName;
	NSNumber * mcid;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (MURPMainService_saveFileOfPic *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * binData;
@property (retain) NSString * fileName;
@property (retain) NSNumber * mcid;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface MURPMainService_saveFileOfPicResponse : NSObject {
	
/* elements */
	USBoolean * saveFileOfPicResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (MURPMainService_saveFileOfPicResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) USBoolean * saveFileOfPicResult;
/* attributes */
- (NSDictionary *)attributes;
@end
/* Cookies handling provided by http://en.wikibooks.org/wiki/Programming:WebObjects/Web_Services/Web_Service_Provider */
#import <libxml/parser.h>
#import "xsd.h"
#import "MURPMainService.h"
@class MURPMainServiceSoapBinding;
@class MURPMainServiceSoap12Binding;
@interface MURPMainService : NSObject {
	
}
+ (MURPMainServiceSoapBinding *)MURPMainServiceSoapBinding;
+ (MURPMainServiceSoap12Binding *)MURPMainServiceSoap12Binding;
@end
@class MURPMainServiceSoapBindingResponse;
@class MURPMainServiceSoapBindingOperation;
@protocol MURPMainServiceSoapBindingResponseDelegate <NSObject>
- (void) operation:(MURPMainServiceSoapBindingOperation *)operation completedWithResponse:(MURPMainServiceSoapBindingResponse *)response;
@end
@interface MURPMainServiceSoapBinding : NSObject <MURPMainServiceSoapBindingResponseDelegate> {
	NSURL *address;
	NSTimeInterval defaultTimeout;
	NSMutableArray *cookies;
	BOOL logXMLInOut;
	BOOL synchronousOperationComplete;
	NSString *authUsername;
	NSString *authPassword;
}
@property (copy) NSURL *address;
@property (assign) BOOL logXMLInOut;
@property (assign) NSTimeInterval defaultTimeout;
@property (nonatomic, retain) NSMutableArray *cookies;
@property (nonatomic, retain) NSString *authUsername;
@property (nonatomic, retain) NSString *authPassword;
- (id)initWithAddress:(NSString *)anAddress;
- (void)sendHTTPCallUsingBody:(NSString *)body soapAction:(NSString *)soapAction forOperation:(MURPMainServiceSoapBindingOperation *)operation;
- (void)addCookie:(NSHTTPCookie *)toAdd;
- (MURPMainServiceSoapBindingResponse *)loginverifystudent_BUsingParameters:(MURPMainService_loginverifystudent_B *)aParameters ;
- (void)loginverifystudent_BAsyncUsingParameters:(MURPMainService_loginverifystudent_B *)aParameters  delegate:(id<MURPMainServiceSoapBindingResponseDelegate>)responseDelegate;
- (MURPMainServiceSoapBindingResponse *)modifyApns_iphoneid1_BUsingParameters:(MURPMainService_modifyApns_iphoneid1_B *)aParameters ;
- (void)modifyApns_iphoneid1_BAsyncUsingParameters:(MURPMainService_modifyApns_iphoneid1_B *)aParameters  delegate:(id<MURPMainServiceSoapBindingResponseDelegate>)responseDelegate;
- (MURPMainServiceSoapBindingResponse *)InformationInsert_BUsingParameters:(MURPMainService_InformationInsert_B *)aParameters ;
- (void)InformationInsert_BAsyncUsingParameters:(MURPMainService_InformationInsert_B *)aParameters  delegate:(id<MURPMainServiceSoapBindingResponseDelegate>)responseDelegate;
- (MURPMainServiceSoapBindingResponse *)InformationMailUpdate_BUsingParameters:(MURPMainService_InformationMailUpdate_B *)aParameters ;
- (void)InformationMailUpdate_BAsyncUsingParameters:(MURPMainService_InformationMailUpdate_B *)aParameters  delegate:(id<MURPMainServiceSoapBindingResponseDelegate>)responseDelegate;
- (MURPMainServiceSoapBindingResponse *)murpverifymod_BUsingParameters:(MURPMainService_murpverifymod_B *)aParameters ;
- (void)murpverifymod_BAsyncUsingParameters:(MURPMainService_murpverifymod_B *)aParameters  delegate:(id<MURPMainServiceSoapBindingResponseDelegate>)responseDelegate;
- (MURPMainServiceSoapBindingResponse *)AddOpinion_BUsingParameters:(MURPMainService_AddOpinion_B *)aParameters ;
- (void)AddOpinion_BAsyncUsingParameters:(MURPMainService_AddOpinion_B *)aParameters  delegate:(id<MURPMainServiceSoapBindingResponseDelegate>)responseDelegate;
- (MURPMainServiceSoapBindingResponse *)InformationPhoneUpdate_BUsingParameters:(MURPMainService_InformationPhoneUpdate_B *)aParameters ;
- (void)InformationPhoneUpdate_BAsyncUsingParameters:(MURPMainService_InformationPhoneUpdate_B *)aParameters  delegate:(id<MURPMainServiceSoapBindingResponseDelegate>)responseDelegate;
- (MURPMainServiceSoapBindingResponse *)loginverifyteacherfd_BUsingParameters:(MURPMainService_loginverifyteacherfd_B *)aParameters ;
- (void)loginverifyteacherfd_BAsyncUsingParameters:(MURPMainService_loginverifyteacherfd_B *)aParameters  delegate:(id<MURPMainServiceSoapBindingResponseDelegate>)responseDelegate;
- (MURPMainServiceSoapBindingResponse *)ververify_BUsingParameters:(MURPMainService_ververify_B *)aParameters ;
- (void)ververify_BAsyncUsingParameters:(MURPMainService_ververify_B *)aParameters  delegate:(id<MURPMainServiceSoapBindingResponseDelegate>)responseDelegate;
- (MURPMainServiceSoapBindingResponse *)insertFunctionrecords_BUsingParameters:(MURPMainService_insertFunctionrecords_B *)aParameters ;
- (void)insertFunctionrecords_BAsyncUsingParameters:(MURPMainService_insertFunctionrecords_B *)aParameters  delegate:(id<MURPMainServiceSoapBindingResponseDelegate>)responseDelegate;
- (MURPMainServiceSoapBindingResponse *)getDeptPhoneByPage_SUsingParameters:(MURPMainService_getDeptPhoneByPage_S *)aParameters ;
- (void)getDeptPhoneByPage_SAsyncUsingParameters:(MURPMainService_getDeptPhoneByPage_S *)aParameters  delegate:(id<MURPMainServiceSoapBindingResponseDelegate>)responseDelegate;
- (MURPMainServiceSoapBindingResponse *)saveFileOfPicUsingParameters:(MURPMainService_saveFileOfPic *)aParameters ;
- (void)saveFileOfPicAsyncUsingParameters:(MURPMainService_saveFileOfPic *)aParameters  delegate:(id<MURPMainServiceSoapBindingResponseDelegate>)responseDelegate;
@end
@interface MURPMainServiceSoapBindingOperation : NSOperation {
	MURPMainServiceSoapBinding *binding;
	MURPMainServiceSoapBindingResponse *response;
	id<MURPMainServiceSoapBindingResponseDelegate> delegate;
	NSMutableData *responseData;
	NSURLConnection *urlConnection;
}
@property (retain) MURPMainServiceSoapBinding *binding;
@property (readonly) MURPMainServiceSoapBindingResponse *response;
@property (nonatomic, assign) id<MURPMainServiceSoapBindingResponseDelegate> delegate;
@property (nonatomic, retain) NSMutableData *responseData;
@property (nonatomic, retain) NSURLConnection *urlConnection;
- (id)initWithBinding:(MURPMainServiceSoapBinding *)aBinding delegate:(id<MURPMainServiceSoapBindingResponseDelegate>)aDelegate;
@end
@interface MURPMainServiceSoapBinding_loginverifystudent_B : MURPMainServiceSoapBindingOperation {
	MURPMainService_loginverifystudent_B * parameters;
}
@property (retain) MURPMainService_loginverifystudent_B * parameters;
- (id)initWithBinding:(MURPMainServiceSoapBinding *)aBinding delegate:(id<MURPMainServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(MURPMainService_loginverifystudent_B *)aParameters
;
@end
@interface MURPMainServiceSoapBinding_modifyApns_iphoneid1_B : MURPMainServiceSoapBindingOperation {
	MURPMainService_modifyApns_iphoneid1_B * parameters;
}
@property (retain) MURPMainService_modifyApns_iphoneid1_B * parameters;
- (id)initWithBinding:(MURPMainServiceSoapBinding *)aBinding delegate:(id<MURPMainServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(MURPMainService_modifyApns_iphoneid1_B *)aParameters
;
@end
@interface MURPMainServiceSoapBinding_InformationInsert_B : MURPMainServiceSoapBindingOperation {
	MURPMainService_InformationInsert_B * parameters;
}
@property (retain) MURPMainService_InformationInsert_B * parameters;
- (id)initWithBinding:(MURPMainServiceSoapBinding *)aBinding delegate:(id<MURPMainServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(MURPMainService_InformationInsert_B *)aParameters
;
@end
@interface MURPMainServiceSoapBinding_InformationMailUpdate_B : MURPMainServiceSoapBindingOperation {
	MURPMainService_InformationMailUpdate_B * parameters;
}
@property (retain) MURPMainService_InformationMailUpdate_B * parameters;
- (id)initWithBinding:(MURPMainServiceSoapBinding *)aBinding delegate:(id<MURPMainServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(MURPMainService_InformationMailUpdate_B *)aParameters
;
@end
@interface MURPMainServiceSoapBinding_murpverifymod_B : MURPMainServiceSoapBindingOperation {
	MURPMainService_murpverifymod_B * parameters;
}
@property (retain) MURPMainService_murpverifymod_B * parameters;
- (id)initWithBinding:(MURPMainServiceSoapBinding *)aBinding delegate:(id<MURPMainServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(MURPMainService_murpverifymod_B *)aParameters
;
@end
@interface MURPMainServiceSoapBinding_AddOpinion_B : MURPMainServiceSoapBindingOperation {
	MURPMainService_AddOpinion_B * parameters;
}
@property (retain) MURPMainService_AddOpinion_B * parameters;
- (id)initWithBinding:(MURPMainServiceSoapBinding *)aBinding delegate:(id<MURPMainServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(MURPMainService_AddOpinion_B *)aParameters
;
@end
@interface MURPMainServiceSoapBinding_InformationPhoneUpdate_B : MURPMainServiceSoapBindingOperation {
	MURPMainService_InformationPhoneUpdate_B * parameters;
}
@property (retain) MURPMainService_InformationPhoneUpdate_B * parameters;
- (id)initWithBinding:(MURPMainServiceSoapBinding *)aBinding delegate:(id<MURPMainServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(MURPMainService_InformationPhoneUpdate_B *)aParameters
;
@end
@interface MURPMainServiceSoapBinding_loginverifyteacherfd_B : MURPMainServiceSoapBindingOperation {
	MURPMainService_loginverifyteacherfd_B * parameters;
}
@property (retain) MURPMainService_loginverifyteacherfd_B * parameters;
- (id)initWithBinding:(MURPMainServiceSoapBinding *)aBinding delegate:(id<MURPMainServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(MURPMainService_loginverifyteacherfd_B *)aParameters
;
@end
@interface MURPMainServiceSoapBinding_ververify_B : MURPMainServiceSoapBindingOperation {
	MURPMainService_ververify_B * parameters;
}
@property (retain) MURPMainService_ververify_B * parameters;
- (id)initWithBinding:(MURPMainServiceSoapBinding *)aBinding delegate:(id<MURPMainServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(MURPMainService_ververify_B *)aParameters
;
@end
@interface MURPMainServiceSoapBinding_insertFunctionrecords_B : MURPMainServiceSoapBindingOperation {
	MURPMainService_insertFunctionrecords_B * parameters;
}
@property (retain) MURPMainService_insertFunctionrecords_B * parameters;
- (id)initWithBinding:(MURPMainServiceSoapBinding *)aBinding delegate:(id<MURPMainServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(MURPMainService_insertFunctionrecords_B *)aParameters
;
@end
@interface MURPMainServiceSoapBinding_getDeptPhoneByPage_S : MURPMainServiceSoapBindingOperation {
	MURPMainService_getDeptPhoneByPage_S * parameters;
}
@property (retain) MURPMainService_getDeptPhoneByPage_S * parameters;
- (id)initWithBinding:(MURPMainServiceSoapBinding *)aBinding delegate:(id<MURPMainServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(MURPMainService_getDeptPhoneByPage_S *)aParameters
;
@end
@interface MURPMainServiceSoapBinding_saveFileOfPic : MURPMainServiceSoapBindingOperation {
	MURPMainService_saveFileOfPic * parameters;
}
@property (retain) MURPMainService_saveFileOfPic * parameters;
- (id)initWithBinding:(MURPMainServiceSoapBinding *)aBinding delegate:(id<MURPMainServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(MURPMainService_saveFileOfPic *)aParameters
;
@end
@interface MURPMainServiceSoapBinding_envelope : NSObject {
}
+ (MURPMainServiceSoapBinding_envelope *)sharedInstance;
- (NSString *)serializedFormUsingHeaderElements:(NSDictionary *)headerElements bodyElements:(NSDictionary *)bodyElements;
@end
@interface MURPMainServiceSoapBindingResponse : NSObject {
	NSArray *headers;
	NSArray *bodyParts;
	NSError *error;
}
@property (retain) NSArray *headers;
@property (retain) NSArray *bodyParts;
@property (retain) NSError *error;
@end
@class MURPMainServiceSoap12BindingResponse;
@class MURPMainServiceSoap12BindingOperation;
@protocol MURPMainServiceSoap12BindingResponseDelegate <NSObject>
- (void) operation:(MURPMainServiceSoap12BindingOperation *)operation completedWithResponse:(MURPMainServiceSoap12BindingResponse *)response;
@end
@interface MURPMainServiceSoap12Binding : NSObject <MURPMainServiceSoap12BindingResponseDelegate> {
	NSURL *address;
	NSTimeInterval defaultTimeout;
	NSMutableArray *cookies;
	BOOL logXMLInOut;
	BOOL synchronousOperationComplete;
	NSString *authUsername;
	NSString *authPassword;
}
@property (copy) NSURL *address;
@property (assign) BOOL logXMLInOut;
@property (assign) NSTimeInterval defaultTimeout;
@property (nonatomic, retain) NSMutableArray *cookies;
@property (nonatomic, retain) NSString *authUsername;
@property (nonatomic, retain) NSString *authPassword;
- (id)initWithAddress:(NSString *)anAddress;
- (void)sendHTTPCallUsingBody:(NSString *)body soapAction:(NSString *)soapAction forOperation:(MURPMainServiceSoap12BindingOperation *)operation;
- (void)addCookie:(NSHTTPCookie *)toAdd;
- (MURPMainServiceSoap12BindingResponse *)loginverifystudent_BUsingParameters:(MURPMainService_loginverifystudent_B *)aParameters ;
- (void)loginverifystudent_BAsyncUsingParameters:(MURPMainService_loginverifystudent_B *)aParameters  delegate:(id<MURPMainServiceSoap12BindingResponseDelegate>)responseDelegate;
- (MURPMainServiceSoap12BindingResponse *)modifyApns_iphoneid1_BUsingParameters:(MURPMainService_modifyApns_iphoneid1_B *)aParameters ;
- (void)modifyApns_iphoneid1_BAsyncUsingParameters:(MURPMainService_modifyApns_iphoneid1_B *)aParameters  delegate:(id<MURPMainServiceSoap12BindingResponseDelegate>)responseDelegate;
- (MURPMainServiceSoap12BindingResponse *)InformationInsert_BUsingParameters:(MURPMainService_InformationInsert_B *)aParameters ;
- (void)InformationInsert_BAsyncUsingParameters:(MURPMainService_InformationInsert_B *)aParameters  delegate:(id<MURPMainServiceSoap12BindingResponseDelegate>)responseDelegate;
- (MURPMainServiceSoap12BindingResponse *)InformationMailUpdate_BUsingParameters:(MURPMainService_InformationMailUpdate_B *)aParameters ;
- (void)InformationMailUpdate_BAsyncUsingParameters:(MURPMainService_InformationMailUpdate_B *)aParameters  delegate:(id<MURPMainServiceSoap12BindingResponseDelegate>)responseDelegate;
- (MURPMainServiceSoap12BindingResponse *)murpverifymod_BUsingParameters:(MURPMainService_murpverifymod_B *)aParameters ;
- (void)murpverifymod_BAsyncUsingParameters:(MURPMainService_murpverifymod_B *)aParameters  delegate:(id<MURPMainServiceSoap12BindingResponseDelegate>)responseDelegate;
- (MURPMainServiceSoap12BindingResponse *)AddOpinion_BUsingParameters:(MURPMainService_AddOpinion_B *)aParameters ;
- (void)AddOpinion_BAsyncUsingParameters:(MURPMainService_AddOpinion_B *)aParameters  delegate:(id<MURPMainServiceSoap12BindingResponseDelegate>)responseDelegate;
- (MURPMainServiceSoap12BindingResponse *)InformationPhoneUpdate_BUsingParameters:(MURPMainService_InformationPhoneUpdate_B *)aParameters ;
- (void)InformationPhoneUpdate_BAsyncUsingParameters:(MURPMainService_InformationPhoneUpdate_B *)aParameters  delegate:(id<MURPMainServiceSoap12BindingResponseDelegate>)responseDelegate;
- (MURPMainServiceSoap12BindingResponse *)loginverifyteacherfd_BUsingParameters:(MURPMainService_loginverifyteacherfd_B *)aParameters ;
- (void)loginverifyteacherfd_BAsyncUsingParameters:(MURPMainService_loginverifyteacherfd_B *)aParameters  delegate:(id<MURPMainServiceSoap12BindingResponseDelegate>)responseDelegate;
- (MURPMainServiceSoap12BindingResponse *)ververify_BUsingParameters:(MURPMainService_ververify_B *)aParameters ;
- (void)ververify_BAsyncUsingParameters:(MURPMainService_ververify_B *)aParameters  delegate:(id<MURPMainServiceSoap12BindingResponseDelegate>)responseDelegate;
- (MURPMainServiceSoap12BindingResponse *)insertFunctionrecords_BUsingParameters:(MURPMainService_insertFunctionrecords_B *)aParameters ;
- (void)insertFunctionrecords_BAsyncUsingParameters:(MURPMainService_insertFunctionrecords_B *)aParameters  delegate:(id<MURPMainServiceSoap12BindingResponseDelegate>)responseDelegate;
- (MURPMainServiceSoap12BindingResponse *)getDeptPhoneByPage_SUsingParameters:(MURPMainService_getDeptPhoneByPage_S *)aParameters ;
- (void)getDeptPhoneByPage_SAsyncUsingParameters:(MURPMainService_getDeptPhoneByPage_S *)aParameters  delegate:(id<MURPMainServiceSoap12BindingResponseDelegate>)responseDelegate;
- (MURPMainServiceSoap12BindingResponse *)saveFileOfPicUsingParameters:(MURPMainService_saveFileOfPic *)aParameters ;
- (void)saveFileOfPicAsyncUsingParameters:(MURPMainService_saveFileOfPic *)aParameters  delegate:(id<MURPMainServiceSoap12BindingResponseDelegate>)responseDelegate;
@end
@interface MURPMainServiceSoap12BindingOperation : NSOperation {
	MURPMainServiceSoap12Binding *binding;
	MURPMainServiceSoap12BindingResponse *response;
	id<MURPMainServiceSoap12BindingResponseDelegate> delegate;
	NSMutableData *responseData;
	NSURLConnection *urlConnection;
}
@property (retain) MURPMainServiceSoap12Binding *binding;
@property (readonly) MURPMainServiceSoap12BindingResponse *response;
@property (nonatomic, assign) id<MURPMainServiceSoap12BindingResponseDelegate> delegate;
@property (nonatomic, retain) NSMutableData *responseData;
@property (nonatomic, retain) NSURLConnection *urlConnection;
- (id)initWithBinding:(MURPMainServiceSoap12Binding *)aBinding delegate:(id<MURPMainServiceSoap12BindingResponseDelegate>)aDelegate;
@end
@interface MURPMainServiceSoap12Binding_loginverifystudent_B : MURPMainServiceSoap12BindingOperation {
	MURPMainService_loginverifystudent_B * parameters;
}
@property (retain) MURPMainService_loginverifystudent_B * parameters;
- (id)initWithBinding:(MURPMainServiceSoap12Binding *)aBinding delegate:(id<MURPMainServiceSoap12BindingResponseDelegate>)aDelegate
	parameters:(MURPMainService_loginverifystudent_B *)aParameters
;
@end
@interface MURPMainServiceSoap12Binding_modifyApns_iphoneid1_B : MURPMainServiceSoap12BindingOperation {
	MURPMainService_modifyApns_iphoneid1_B * parameters;
}
@property (retain) MURPMainService_modifyApns_iphoneid1_B * parameters;
- (id)initWithBinding:(MURPMainServiceSoap12Binding *)aBinding delegate:(id<MURPMainServiceSoap12BindingResponseDelegate>)aDelegate
	parameters:(MURPMainService_modifyApns_iphoneid1_B *)aParameters
;
@end
@interface MURPMainServiceSoap12Binding_InformationInsert_B : MURPMainServiceSoap12BindingOperation {
	MURPMainService_InformationInsert_B * parameters;
}
@property (retain) MURPMainService_InformationInsert_B * parameters;
- (id)initWithBinding:(MURPMainServiceSoap12Binding *)aBinding delegate:(id<MURPMainServiceSoap12BindingResponseDelegate>)aDelegate
	parameters:(MURPMainService_InformationInsert_B *)aParameters
;
@end
@interface MURPMainServiceSoap12Binding_InformationMailUpdate_B : MURPMainServiceSoap12BindingOperation {
	MURPMainService_InformationMailUpdate_B * parameters;
}
@property (retain) MURPMainService_InformationMailUpdate_B * parameters;
- (id)initWithBinding:(MURPMainServiceSoap12Binding *)aBinding delegate:(id<MURPMainServiceSoap12BindingResponseDelegate>)aDelegate
	parameters:(MURPMainService_InformationMailUpdate_B *)aParameters
;
@end
@interface MURPMainServiceSoap12Binding_murpverifymod_B : MURPMainServiceSoap12BindingOperation {
	MURPMainService_murpverifymod_B * parameters;
}
@property (retain) MURPMainService_murpverifymod_B * parameters;
- (id)initWithBinding:(MURPMainServiceSoap12Binding *)aBinding delegate:(id<MURPMainServiceSoap12BindingResponseDelegate>)aDelegate
	parameters:(MURPMainService_murpverifymod_B *)aParameters
;
@end
@interface MURPMainServiceSoap12Binding_AddOpinion_B : MURPMainServiceSoap12BindingOperation {
	MURPMainService_AddOpinion_B * parameters;
}
@property (retain) MURPMainService_AddOpinion_B * parameters;
- (id)initWithBinding:(MURPMainServiceSoap12Binding *)aBinding delegate:(id<MURPMainServiceSoap12BindingResponseDelegate>)aDelegate
	parameters:(MURPMainService_AddOpinion_B *)aParameters
;
@end
@interface MURPMainServiceSoap12Binding_InformationPhoneUpdate_B : MURPMainServiceSoap12BindingOperation {
	MURPMainService_InformationPhoneUpdate_B * parameters;
}
@property (retain) MURPMainService_InformationPhoneUpdate_B * parameters;
- (id)initWithBinding:(MURPMainServiceSoap12Binding *)aBinding delegate:(id<MURPMainServiceSoap12BindingResponseDelegate>)aDelegate
	parameters:(MURPMainService_InformationPhoneUpdate_B *)aParameters
;
@end
@interface MURPMainServiceSoap12Binding_loginverifyteacherfd_B : MURPMainServiceSoap12BindingOperation {
	MURPMainService_loginverifyteacherfd_B * parameters;
}
@property (retain) MURPMainService_loginverifyteacherfd_B * parameters;
- (id)initWithBinding:(MURPMainServiceSoap12Binding *)aBinding delegate:(id<MURPMainServiceSoap12BindingResponseDelegate>)aDelegate
	parameters:(MURPMainService_loginverifyteacherfd_B *)aParameters
;
@end
@interface MURPMainServiceSoap12Binding_ververify_B : MURPMainServiceSoap12BindingOperation {
	MURPMainService_ververify_B * parameters;
}
@property (retain) MURPMainService_ververify_B * parameters;
- (id)initWithBinding:(MURPMainServiceSoap12Binding *)aBinding delegate:(id<MURPMainServiceSoap12BindingResponseDelegate>)aDelegate
	parameters:(MURPMainService_ververify_B *)aParameters
;
@end
@interface MURPMainServiceSoap12Binding_insertFunctionrecords_B : MURPMainServiceSoap12BindingOperation {
	MURPMainService_insertFunctionrecords_B * parameters;
}
@property (retain) MURPMainService_insertFunctionrecords_B * parameters;
- (id)initWithBinding:(MURPMainServiceSoap12Binding *)aBinding delegate:(id<MURPMainServiceSoap12BindingResponseDelegate>)aDelegate
	parameters:(MURPMainService_insertFunctionrecords_B *)aParameters
;
@end
@interface MURPMainServiceSoap12Binding_getDeptPhoneByPage_S : MURPMainServiceSoap12BindingOperation {
	MURPMainService_getDeptPhoneByPage_S * parameters;
}
@property (retain) MURPMainService_getDeptPhoneByPage_S * parameters;
- (id)initWithBinding:(MURPMainServiceSoap12Binding *)aBinding delegate:(id<MURPMainServiceSoap12BindingResponseDelegate>)aDelegate
	parameters:(MURPMainService_getDeptPhoneByPage_S *)aParameters
;
@end
@interface MURPMainServiceSoap12Binding_saveFileOfPic : MURPMainServiceSoap12BindingOperation {
	MURPMainService_saveFileOfPic * parameters;
}
@property (retain) MURPMainService_saveFileOfPic * parameters;
- (id)initWithBinding:(MURPMainServiceSoap12Binding *)aBinding delegate:(id<MURPMainServiceSoap12BindingResponseDelegate>)aDelegate
	parameters:(MURPMainService_saveFileOfPic *)aParameters
;
@end
@interface MURPMainServiceSoap12Binding_envelope : NSObject {
}
+ (MURPMainServiceSoap12Binding_envelope *)sharedInstance;
- (NSString *)serializedFormUsingHeaderElements:(NSDictionary *)headerElements bodyElements:(NSDictionary *)bodyElements;
@end
@interface MURPMainServiceSoap12BindingResponse : NSObject {
	NSArray *headers;
	NSArray *bodyParts;
	NSError *error;
}
@property (retain) NSArray *headers;
@property (retain) NSArray *bodyParts;
@property (retain) NSError *error;
@end
