//
//  SAUser+CoreDataProperties.h
//  fansky
//
//  Created by Zzy on 16/4/23.
//  Copyright © 2016年 Zzy. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "SAUser.h"

NS_ASSUME_NONNULL_BEGIN

@interface SAUser (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *desc;
@property (nullable, nonatomic, retain) NSNumber *followersCount;
@property (nullable, nonatomic, retain) NSNumber *friendsCount;
@property (nullable, nonatomic, retain) NSNumber *isActive;
@property (nullable, nonatomic, retain) NSNumber *isFollowing;
@property (nullable, nonatomic, retain) NSNumber *isLocal;
@property (nullable, nonatomic, retain) NSNumber *isProtected;
@property (nullable, nonatomic, retain) NSString *location;
@property (nullable, nonatomic, retain) NSString *name;
@property (nullable, nonatomic, retain) NSString *profileImageURL;
@property (nullable, nonatomic, retain) NSNumber *statusCount;
@property (nullable, nonatomic, retain) NSString *token;
@property (nullable, nonatomic, retain) NSString *tokenSecret;
@property (nullable, nonatomic, retain) NSString *userID;
@property (nullable, nonatomic, retain) NSDate *createdAt;
@property (nullable, nonatomic, retain) NSSet<SAConversation *> *mineConversations;
@property (nullable, nonatomic, retain) NSSet<SAMessage *> *mineMessages;
@property (nullable, nonatomic, retain) NSSet<SAStatus *> *mineStatuses;
@property (nullable, nonatomic, retain) NSSet<SAMessage *> *recvivedMessages;
@property (nullable, nonatomic, retain) NSSet<SAMessage *> *sentMessages;
@property (nullable, nonatomic, retain) NSSet<SAStatus *> *statuses;

@end

@interface SAUser (CoreDataGeneratedAccessors)

- (void)addMineConversationsObject:(SAConversation *)value;
- (void)removeMineConversationsObject:(SAConversation *)value;
- (void)addMineConversations:(NSSet<SAConversation *> *)values;
- (void)removeMineConversations:(NSSet<SAConversation *> *)values;

- (void)addMineMessagesObject:(SAMessage *)value;
- (void)removeMineMessagesObject:(SAMessage *)value;
- (void)addMineMessages:(NSSet<SAMessage *> *)values;
- (void)removeMineMessages:(NSSet<SAMessage *> *)values;

- (void)addMineStatusesObject:(SAStatus *)value;
- (void)removeMineStatusesObject:(SAStatus *)value;
- (void)addMineStatuses:(NSSet<SAStatus *> *)values;
- (void)removeMineStatuses:(NSSet<SAStatus *> *)values;

- (void)addRecvivedMessagesObject:(SAMessage *)value;
- (void)removeRecvivedMessagesObject:(SAMessage *)value;
- (void)addRecvivedMessages:(NSSet<SAMessage *> *)values;
- (void)removeRecvivedMessages:(NSSet<SAMessage *> *)values;

- (void)addSentMessagesObject:(SAMessage *)value;
- (void)removeSentMessagesObject:(SAMessage *)value;
- (void)addSentMessages:(NSSet<SAMessage *> *)values;
- (void)removeSentMessages:(NSSet<SAMessage *> *)values;

- (void)addStatusesObject:(SAStatus *)value;
- (void)removeStatusesObject:(SAStatus *)value;
- (void)addStatuses:(NSSet<SAStatus *> *)values;
- (void)removeStatuses:(NSSet<SAStatus *> *)values;

@end

NS_ASSUME_NONNULL_END
