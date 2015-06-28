//
//  MUIdea.m
//  demo
//
//  Created by BlueCocoa on 15/6/28.
//  Copyright (c) 2015年 0xBBC. All rights reserved.
//

#import "MUIdea.h"

@implementation MUIdea

@synthesize brief;
@synthesize content;
@synthesize from;
@synthesize kind;

- (instancetype)init {
    self = [super init];
    return self;
}

- (instancetype)initIdeaWithUser:(MUUser *)user_ Content:(NSString *)content_ Kind:(MUIdeaKind)kind_ {
    self = [self init];
    [self setFrom:user_];
    [self setContent:content_];
    [self setKind:kind_];
    return self;
}

- (NSString *)description {
    return [NSString stringWithFormat:@"This idea<%lu> comes from %@, says: %@", self.kind, self.from, self.content];
}

@end
