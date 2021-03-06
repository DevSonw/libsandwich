/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSNumber, NSString;

@interface SAAssistantLoaded : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSString* version;
@property(retain, nonatomic) NSNumber* requestSync;
@property(copy, nonatomic) NSString* dataAnchor;
+ (id)assistantLoaded;
+ (id)assistantLoadedWithDictionary:(id)dictionary context:(id)context;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (id)groupIdentifier;
@end

