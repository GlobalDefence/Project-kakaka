//
//  MUIdea.h
//  demo
//
//  Created by BlueCocoa on 15/6/28.
//  Copyright (c) 2015年 0xBBC. All rights reserved.
//

#import <Foundation/Foundation.h>

@class MUUser;

typedef NS_OPTIONS(NSUInteger, MUIdeaKind){
    kMUIdeaTakeExam,
    kMUIdeaVolunteer,
    kMUIdeaStudyGroup,
    kMUIdeaTravel,
    kMUIdeaParty,
    kMUIdeaFindRoommate,
    kMUIdeaGoSchool,
    kMUIdeaFindPartner,
    kMUIdeaDonate
};

@interface MUIdea : NSObject

- (nonnull instancetype)init;
- (nonnull instancetype)initIdeaWithUser:(nonnull MUUser *)user Content:(nonnull NSString *)content Kind:(MUIdeaKind)kind;

@property (strong, nonatomic, nonnull) NSString * brief;
@property (strong, nonatomic, nonnull) NSString * content;
@property (strong, nonatomic, nonnull) MUUser   * from;
@property (nonatomic) MUIdeaKind kind;

@end
