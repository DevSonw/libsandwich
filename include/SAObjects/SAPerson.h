/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class NSString, NSArray, NSDate, NSNumber;

@interface SAPerson : SADomainObject {
}
@property(copy, nonatomic) NSString* suffix;
@property(copy, nonatomic) NSArray* relatedNames;
@property(copy, nonatomic) NSString* prefix;
@property(copy, nonatomic) NSArray* phones;
@property(copy, nonatomic) NSString* nickName;
@property(copy, nonatomic) NSString* middleName;
@property(retain, nonatomic) NSNumber* me;
@property(copy, nonatomic) NSString* lastNamePhonetic;
@property(copy, nonatomic) NSString* lastName;
@property(copy, nonatomic) NSString* fullName;
@property(copy, nonatomic) NSString* firstNamePhonetic;
@property(copy, nonatomic) NSString* firstName;
@property(copy, nonatomic) NSArray* emails;
@property(copy, nonatomic) NSString* company;
@property(copy, nonatomic) NSDate* birthday;
@property(copy, nonatomic) NSArray* addresses;
+ (id)person;
+ (id)personWithDictionary:(id)dictionary context:(id)context;
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;
- (id)encodedClassName;
- (id)groupIdentifier;
@end

