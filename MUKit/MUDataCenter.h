//
//  MUDataCenter.h
//  demo
//
//  Created by BlueCocoa on 15/6/28.
//  Copyright (c) 2015年 0xBBC. All rights reserved.
//

#import <Foundation/Foundation.h>

@class MUUser;

@interface MUDataCenter : NSObject

- (nullable NSArray *)newIdeas;
- (nullable MUUser *)loginWithUsername:(nonnull NSString *)username Password:(nonnull NSString *)password;

@end
