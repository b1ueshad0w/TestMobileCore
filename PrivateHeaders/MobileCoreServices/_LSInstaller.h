//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LSInstallationServiceProtocol.h"

@class NSObject<OS_dispatch_queue>, NSString, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface _LSInstaller : NSObject <LSInstallationServiceProtocol>
{
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_databaseQueue;
}

@property(nonatomic) NSObject<OS_dispatch_queue> *databaseQueue; // @synthesize databaseQueue=_databaseQueue;
@property(nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void)sendCallbackDeliveryComplete;
- (void)sendCallbackWithDictionary:(id)arg1;
- (void)installApplication:(id)arg1 atURL:(id)arg2 withOptions:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (id)installPackage:(id)arg1 withIdentifier:(id)arg2 withOptions:(id)arg3 error:(id *)arg4;
- (_Bool)registerBundle:(id)arg1 withOptions:(id)arg2;
- (_Bool)dispatchRegistration:(id)arg1;
- (void)uninstallApplication:(id)arg1 withOptions:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)restoreSystemApplicationWithBundleIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)removeSystemApplicationWithBundleIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (_Bool)validateEntitlementsForInstall:(_Bool)arg1 options:(id)arg2 error:(id *)arg3;
- (void)postNotification:(id)arg1 forApp:(id)arg2 placeholder:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

