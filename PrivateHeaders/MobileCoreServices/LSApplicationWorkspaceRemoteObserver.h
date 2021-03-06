//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LSInternalWorkspaceObserverProtocol.h"
#import "NSSecureCoding.h"

@class NSHashTable, NSObject<OS_dispatch_queue>, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface LSApplicationWorkspaceRemoteObserver : NSObject <LSInternalWorkspaceObserverProtocol, NSSecureCoding>
{
    _Bool _observinglsd;
    NSUUID *_uuid;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_progressSubscriptionsQueue;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void)networkUsageChanged:(_Bool)arg1;
- (void)applicationIconDidChange:(id)arg1;
- (void)applicationStateDidChange:(id)arg1;
- (void)applicationInstallsDidPrioritize:(id)arg1;
- (void)applicationInstallsDidCancel:(id)arg1;
- (void)applicationInstallsDidResume:(id)arg1;
- (void)applicationInstallsDidPause:(id)arg1;
- (void)applicationInstallsArePrioritized:(id)arg1 arePaused:(id)arg2;
- (void)applicationsDidFailToUninstall:(id)arg1;
- (void)pluginsDidUninstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)applicationsWillUninstall:(id)arg1;
- (void)pluginsWillUninstall:(id)arg1;
- (void)applicationsDidFailToInstall:(id)arg1;
- (void)pluginsDidInstall:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsWillInstall:(id)arg1;
- (void)applicationInstallsDidChange:(id)arg1;
- (void)applicationInstallsDidUpdateIcon:(id)arg1;
- (void)applicationInstallsDidStart:(id)arg1;
- (_Bool)messageObserversWithSelector:(SEL)arg1 andApps:(id)arg2;
- (void)setObservinglsd:(_Bool)arg1;
- (_Bool)isObservinglsd;
- (unsigned long long)currentObserverCount;
- (id)localObservers;
- (void)removeLocalObserver:(id)arg1;
- (void)addLocalObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

