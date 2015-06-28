//
//  MUGoods.m
//  demo
//
//  Created by BlueCocoa on 15/6/28.
//  Copyright (c) 2015年 0xBBC. All rights reserved.
//

#import "MUGoods.h"

@implementation MUGoods

@synthesize brief;
@synthesize imageURL;
@synthesize name;
@synthesize price;

- (nonnull instancetype)init {
    self = [super init];
    return self;
}

- (nonnull instancetype)initWithName:(nonnull NSString *)name_ Brief:(nullable NSString * )brief_ Price:(NSUInteger)price_ ImageURL:(nullable NSURL *)imageURL_ {
    [self setName:name_];
    [self setBrief:brief_];
    [self setPrice:price_];
    [self setImageURL:imageURL_];
    return self;
}

- (NSString *)description {
    return [NSString stringWithFormat:@"<%@> sells at %lu. %@", self.name, self.price, self.brief];
}

@end
