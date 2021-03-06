/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAReminderPayload.h"
#import "AceObject.h"

@class NSArray, NSString;

@interface SAReminderSmsPayload : AceObject <SAReminderPayload> {
}
@property(copy, nonatomic) NSArray* recipients;
@property(copy, nonatomic) NSString* message;
+ (id)smsPayload;
+ (id)smsPayloadWithDictionary:(id)dictionary context:(id)context;
- (id)encodedClassName;
- (id)groupIdentifier;
@end

