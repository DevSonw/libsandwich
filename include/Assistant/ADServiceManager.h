/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "assistantd-Structs.h"

@class NSMutableDictionary, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ADServiceManager : XXUnknownSuperclass {
	dispatch_queue_s* _queue;
	NSMutableDictionary* _identifierToPrunedInfos;
	NSMutableDictionary* _domainToCommandsMap;
	NSMutableDictionary* _connectionMap;
	NSMutableDictionary* _syncKeyToBundleMap;
	NSMutableArray* _clearsDomainObjectsIdentifiers;
	NSMutableArray* _restrictedCommands;
}
- (id)serviceConnectionForIdentifier:(id)identifier;
- (id)_connectionMap;
- (id)restrictedCommands;
- (id)_chatKitDynamicRestrictedCommands;
- (id)servicesThatNeedToClearDomainObjects;
- (BOOL)serviceWithIdentifier:(id)identifier implementsCommand:(id)command forDomain:(id)domain;
- (BOOL)serviceWithIdentifier:(id)identifier usesManagedStorageForDomain:(id)domain;
- (id)syncClassNameForIdentifier:(id)identifier anchorKey:(id)key;
- (id)serviceIdentifierForSyncAnchorKey:(id)syncAnchorKey;
- (id)allSyncAnchorKeys;
- (id)serviceIdentifierForDomain:(id)domain command:(id)command;
- (id)serviceInfoForIdentifier:(id)identifier;
- (id)allServiceIdentifiers;
- (id)_bundleInfoForIdentifier:(id)identifier;
- (id)_infoDictionariesMap;
- (id)_prunedDictionaryFromInfoDictionary:(id)infoDictionary forBundleWithIdentifier:(id)identifier;
- (void)dealloc;
- (id)init;
- (id)initWithQueue:(dispatch_queue_s*)queue;
@end

