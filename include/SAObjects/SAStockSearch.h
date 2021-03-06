/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSURL, NSArray;

@interface SAStockSearch : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSArray* stockReferences;
@property(copy, nonatomic) NSArray* companyNameList;
@property(copy, nonatomic) NSURL* targetAppId;
+ (id)search;
+ (id)searchWithDictionary:(id)dictionary context:(id)context;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (id)groupIdentifier;
@end

