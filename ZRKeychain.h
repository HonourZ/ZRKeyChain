//
//  ZRKeychain.h
//
//  Created by zzr on 2017/5/12.
//  Copyright © 2017年 zzr. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZRKeychain : NSObject

+ (NSString *)getPasswordStringForUsername:(NSString *)username andServiceName:(NSString *)serviceName error:(NSError **)error;
+ (NSData *)getPasswordDataForUsername:(NSString *)username andServiceName:(NSString *)serviceName error:(NSError **)error;

+ (BOOL)storeUsername:(NSString *)username andPasswordString:(NSString *)password forServiceName:(NSString *)serviceName updateExisting:(BOOL)updateExisting error:(NSError **)error;
+ (BOOL)storeUsername:(NSString *)username andPasswordData:(NSData *)passwordData forServiceName:(NSString *)serviceName updateExisting:(BOOL)updateExisting error:(NSError **)error;

+ (BOOL)deleteItemForUsername:(NSString *)username andServiceName:(NSString *)serviceName error:(NSError **)error;

@end
