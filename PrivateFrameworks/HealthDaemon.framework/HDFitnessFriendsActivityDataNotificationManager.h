/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDFitnessFriendsActivityDataNotificationManager : NSObject <HDDataObserver, HDFitnessFriendsCloudKitManagerChangesObserver, HDFitnessFriendsManagerReadyObserver, HDNanoAlertSuppressionObserver> {
    HDFitnessFriendsActivityDataManager * _activityDataManager;
    HDFitnessFriendsNotificationBBDataProvider * _bulletinBoardNotificationDataProvider;
    HDFitnessFriendsCloudKitManager * _cloudKitManager;
    HDFitnessFriendsContactsManager * _contactsManager;
    <HDHealthDataManager> * _dataManager;
    HDFitnessFriendsFriendListManager * _friendListManager;
    <HDHealthDaemon> * _healthDaemon;
    bool  _isCloudKitManagerProcessingData;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _receivedChangesFromCloudKit;
}

@property (nonatomic, retain) NSNumber *achievementAnchor;
@property (nonatomic) HDFitnessFriendsActivityDataManager *activityDataManager;
@property (nonatomic) HDFitnessFriendsCloudKitManager *cloudKitManager;
@property (nonatomic) HDFitnessFriendsContactsManager *contactsManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) HDFitnessFriendsFriendListManager *friendListManager;
@property (nonatomic, retain) NSNumber *goalCompletionAnchor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSNumber *workoutAnchor;

- (void).cxx_destruct;
- (bool)_areAllGoalsMetForSnapshot:(id)arg1;
- (id)_fetchNewDataForFriends;
- (id)_higherPriorityAchievementFromAchievement1:(id)arg1 achievement2:(id)arg2;
- (bool)_isEventDate:(id)arg1 inCurrentDateForFriend:(id)arg2;
- (bool)_isNotificationEventDate:(id)arg1 beforeRelationshipBeganWithFriend:(id)arg2;
- (id)_localUserDefaultsDomainWithHealthDaemon:(id)arg1;
- (id)_mostRecentAchievementEarnedDateForFriendWithUUID:(id)arg1;
- (id)_mostRecentGoalCompletedSnapshotIndexForFriendWithUUID:(id)arg1;
- (id)_mostRecentWorkoutCompletionDateForFriendWithUUID:(id)arg1;
- (id)_nanoUserDefaultsDomainKeyForFriendWithUUID:(id)arg1 keyTypeString:(id)arg2;
- (id)_nanoUserDefaultsDomainWithHealthDaemon:(id)arg1;
- (void)_notifyAboutWorkoutsDetectionIfRequired:(id)arg1;
- (void)_queue_coalesceAndNotifyFromDict:(id)arg1;
- (id)_queue_fetchNewDataForFriends;
- (void)_queue_showFriendNotificationsIfRequired;
- (void)_queue_updateFriendsDict:(id)arg1 withAchievements:(id)arg2;
- (void)_queue_updateFriendsDict:(id)arg1 withGoalCompletionsFromSnapshots:(id)arg2;
- (void)_queue_updateFriendsDict:(id)arg1 withWorkouts:(id)arg2;
- (void)_setHealthDaemon:(id)arg1;
- (void)_setMostRecentAchievementEarnedDate:(id)arg1 forFriendWithUUID:(id)arg2;
- (void)_setMostRecentGoalCompletedSnapshotIndex:(id)arg1 forFriendWithUUID:(id)arg2;
- (void)_setMostRecentWorkoutCompletionDate:(id)arg1 forFriendWithUUID:(id)arg2;
- (id)achievementAnchor;
- (id)activityDataManager;
- (void)alertSuppressionInvalidatedForSuppressionId:(id)arg1 reason:(long long)arg2;
- (id)cloudKitManager;
- (void)cloudKitManager:(id)arg1 didRecieveNewNotificationEvents:(id)arg2 moreComing:(bool)arg3 changesProcessedHandler:(id /* block */)arg4;
- (void)cloudKitManagerDidBeginUpdates:(id)arg1;
- (void)cloudKitManagerDidEndUpdates:(id)arg1;
- (id)contactsManager;
- (void)dealloc;
- (void)fitnessFriendsManagerReady:(id)arg1;
- (id)friendListManager;
- (id)goalCompletionAnchor;
- (id)init;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)setAchievementAnchor:(id)arg1;
- (void)setActivityDataManager:(id)arg1;
- (void)setCloudKitManager:(id)arg1;
- (void)setContactsManager:(id)arg1;
- (void)setFriendListManager:(id)arg1;
- (void)setGoalCompletionAnchor:(id)arg1;
- (void)setWorkoutAnchor:(id)arg1;
- (void)showFriendNotifications;
- (id)workoutAnchor;

@end
