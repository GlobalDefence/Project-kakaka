//
//  MUUser.m
//  demo
//
//  Created by BlueCocoa on 15/6/28.
//  Copyright (c) 2015年 0xBBC. All rights reserved.
//

#import "MUUser.h"

@implementation MUUser

@synthesize avatar;
@synthesize gender;
@synthesize kind;
@synthesize name;
@synthesize nickname;
@synthesize validated;

- (instancetype)init {
    self = [super init];
    return self;
}

- (NSUInteger)numberOfHammers {
    return 0;
}

- (NSUInteger)numberOfPoints {
    return 0;
}

- (NSString *)description {
    return [NSString stringWithFormat:@"User named %@.", self.nickname];
}

@end
