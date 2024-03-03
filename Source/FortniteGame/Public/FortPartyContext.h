#pragma once
#include "CoreMinimal.h"
#include "ECommonInputType.h"
#include "GameFramework/OnlineReplStructs.h"
#include "Party/PartyTypes.h"
#include "EAthenaPartyMemberReadyType.h"
#include "EFortFriendRequestStatus.h"
#include "EFortPartyMemberDisplayState.h"
#include "EFortPartyMemberLocation.h"
#include "EFortPartyState.h"
#include "FortBlueprintContext.h"
#include "FortTeamMemberInfo.h"
#include "FortPartyContext.generated.h"

class AFortPlayerState;
class UFortUITeamInfo;

UCLASS(Blueprintable, NonTransient, Config=Game)
class FORTNITEGAME_API UFortPartyContext : public UFortBlueprintContext {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnTimeSpentInMatchChanged, const FUniqueNetIdRepl&, UniqueId, const FText&, Mins, const FText&, Seconds);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerStateChangedDelegate, const FFortTeamMemberInfo&, PlayerInfo);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPartyTypeChanged, EPartyType, PartyType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPartyPrivacyChangedDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPartyLeftDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPartyJoinRequested);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPartyJoinedDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPartyInvitesCountUpdatedDelegate, int32, PartyInvitesCount);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnNumAliveChanged, const FUniqueNetIdRepl&, UniqueId, int32, NumAlive);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLFGChanged, bool, bLFG);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCrossplayPreferenceChanged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnClientPartyStateChanged, EFortPartyState, PartyState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAthenaPartyMemberReadyTypeChanged, const FUniqueNetIdRepl&, UniqueId, EAthenaPartyMemberReadyType, MemberReadyType);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPartyJoinedDelegate OnPartyJoined;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnClientPartyStateChanged OnClientPartyStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPartyTypeChanged OnPartyTypeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCrossplayPreferenceChanged OnCrossplayPreferenceChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerStateChangedDelegate OnPlayerStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNumAliveChanged OnAthenaNumAliveChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTimeSpentInMatchChanged OnAthenaTimeSpentInMatch;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaPartyMemberReadyTypeChanged OnAthenaReadyTypeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPartyJoinRequested OnPartyJoinRequested;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPartyInvitesCountUpdatedDelegate OnPartyInvitesCountChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLFGChanged OnLFGChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPartyPrivacyChangedDelegate OnPartyPrivacyChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerStateChangedDelegate OnLocalPlayerStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPartyLeftDelegate OnPartyLeft;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, UFortUITeamInfo*> TeamsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FUniqueNetIdRepl, AFortPlayerState*> UnassignedPlayerStatesByID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortUITeamInfo* LocalPlayerTeam;
    
   // UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
  //  TSet<FFortTeamMemberInfo> PendingChangedMemberInfos;
    
public:
    UFortPartyContext();
    UFUNCTION(BlueprintCallable)
    void ShowInitialCrossplayPrompt();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowCrossplayWarningDialog() const;
    
    UFUNCTION(BlueprintCallable)
    void SetPartyPrivacySetting(EPartyType PartyType, bool bLeaderFriendsOnly, bool bLeaderInvitesOnly);
    
    UFUNCTION(BlueprintCallable)
    void SetLocalPlayerLFG(bool bInLFG);
    
    UFUNCTION(BlueprintCallable)
    void SetLocalPartyMemberLocation(EFortPartyMemberLocation Location);
    
    UFUNCTION(BlueprintCallable)
    void SendMcpFriendRequest(const FUniqueNetIdRepl& PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void LeaveParty();
    
    UFUNCTION(BlueprintCallable)
    void LeaveAction(bool bInStayWithParty);
    
    UFUNCTION(BlueprintCallable)
    static bool IsValidNetID(const FUniqueNetIdRepl& UniqueNetId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNetIdFromLocalPlayersPlatform(const FUniqueNetIdRepl& PlayerId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalPlayerPartyLeader() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalPlayerLFG() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEntirePartyInFrontEnd() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetPartyPrivacySetting(EPartyType& OutPartyType, bool& OutLeaderFriendsOnly, bool& OutLeaderInvitesOnly);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPartyMemberLocation(const FUniqueNetIdRepl& MemberId, EFortPartyMemberLocation& LocationOut) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECommonInputType GetPartyMemberInputType(const FUniqueNetIdRepl& MemberId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortPartyMemberDisplayState GetPartyMemberDisplayState(const FFortTeamMemberInfo& PartyMemberInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumPlayersInLocalParty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortFriendRequestStatus GetMcpFriendRequestStatusForPlayer(const FUniqueNetIdRepl& PlayerId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxTeamSizeForSelectedTheater() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetLocalTeamTeamMemberInfo(AFortPlayerState* TeamMemberState, FFortTeamMemberInfo& TeamMemberInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetLocalPlayerTeamMemberInfo(FFortTeamMemberInfo& LocalPlayerInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortUITeamInfo* GetLocalPlayerTeam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetLocalPlayerDisplayName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortPartyState GetLocalPartyProgression() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLocalPartyMemberLocation(EFortPartyMemberLocation& Location) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortFriendRequestStatus GetFriendRequestStatusForTeamMember(const FFortTeamMemberInfo& TeamMemberInfo, FUniqueNetIdRepl& UniqueIdUsed, bool& bIsMcpId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortFriendRequestStatus GetConsoleFriendRequestStatusForPlayer(const FUniqueNetIdRepl& PlayerId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAthenaPartyMemberReadyType GetAthenaPartyMemberReadyType(const FUniqueNetIdRepl& MemberId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetAthenaPartyMemberReadyText(const FUniqueNetIdRepl& MemberId) const;
    
    UFUNCTION(BlueprintCallable)
    void AcceptMcpFriendRequest(const FUniqueNetIdRepl& PlayerId);
    
};

