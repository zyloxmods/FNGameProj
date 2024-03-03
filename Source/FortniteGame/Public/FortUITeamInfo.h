#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameFramework/OnlineReplStructs.h"
#include "FortTeamMemberInfo.h"
#include "FortUITeamInfo.generated.h"

class UEnum;
class UFortPartyContext;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortUITeamInfo : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTeamMemberStateChangedDelegate, FFortTeamMemberInfo, TeamMemberInfo);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTeamMemberSimpleDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTeamMemberRemovedDelegate, int32, PlayerIndex);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTeamMemberFinishedSynchronizingDelegate, FUniqueNetIdRepl, NewTeamMemberId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTeamMemberAddedDelegate, FFortTeamMemberInfo, NewTeamMemberInfo);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTeamHitPointFractionsChanged, const TArray<float>&, HealthFractions, const TArray<float>&, ShieldFractions);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTeamMemberFinishedSynchronizingDelegate OnTeamMemberFinishedSynchronizing;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTeamMemberAddedDelegate OnTeamMemberAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTeamMemberRemovedDelegate OnTeamMemberRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTeamMemberStateChangedDelegate OnTeamMemberStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTeamMemberSimpleDelegate OnTeamMemberPromoted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTeamHitPointFractionsChanged OnTeamHitPointFractionsChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortPartyContext* TeamContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 TeamAssignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEnum* FortTeamUEnum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 TotalFilledSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PreviousFilledSlots;
    
public:
    UFortUITeamInfo();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTeamMemberSynchronizing(const FUniqueNetIdRepl& PlayerId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetTeamMembers(TArray<FFortTeamMemberInfo>& TeamMembers) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetTeamMemberIDs(TArray<FUniqueNetIdRepl>& TeamMemberIDs) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetTeamMember(int32 MemberIndex, FFortTeamMemberInfo& OutMember) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetTeamHitPointFractions(TArray<float>& HealthFractions, TArray<float>& ShieldFractions) const;
    
};

