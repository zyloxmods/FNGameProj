#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortLiveSpectatorController.h"
#include "FortSpectateAFriendController.generated.h"

class AFortPlayerStateAthena;
class AFortTeamInfo;

UCLASS(Blueprintable, MinimalAPI)
class AFortSpectateAFriendController : public AFortLiveSpectatorController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayerJoinedOn, meta=(AllowPrivateAccess=true))
    AFortPlayerStateAthena* PlayerJoinedOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HasValidTarget, meta=(AllowPrivateAccess=true))
    bool HasValidTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TeamToFollow, meta=(AllowPrivateAccess=true))
    uint8 TeamToFollow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FollowAnyTeam, meta=(AllowPrivateAccess=true))
    bool FollowAnyTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TeamJoinedOnPlacement, meta=(AllowPrivateAccess=true))
    int32 TeamJoinedOnPlacement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortTeamInfo* TeamJoinedOn;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DefaultCameraLocation;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FollowAnyTeamAfterFirst;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartingDiconnectTimerLength;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InvalidTargetDiconnectTimerLength;
    
public:
    AFortSpectateAFriendController();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_TeamToFollow();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TeamJoinedOnPlacement();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerJoinedOn();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HasValidTarget();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FollowAnyTeam();
    
};

