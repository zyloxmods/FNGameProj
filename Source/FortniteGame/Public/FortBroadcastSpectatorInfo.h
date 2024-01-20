#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "FortBroadcastInfoPerPlayer.h"
#include "FortBroadcastSpectatorInfo.generated.h"

class AFortTeamPrivateInfo;
class APlayerController;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortBroadcastSpectatorInfo : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TotalNumPlayers, meta=(AllowPrivateAccess=true))
    int32 TotalNumPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TotalNumTeams, meta=(AllowPrivateAccess=true))
    int32 TotalNumTeams;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<AFortTeamPrivateInfo*> TeamPrivateInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PerPlayerInfo, meta=(AllowPrivateAccess=true))
    TArray<FFortBroadcastInfoPerPlayer> PerPlayerInfo;
    
public:
    AFortBroadcastSpectatorInfo();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_TotalNumTeams();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TotalNumPlayers();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PerPlayerInfo();
    
    UFUNCTION(BlueprintCallable)
    void HandleTeamInfosSet();
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerAdded(APlayerController* AddedPlayer);
    
};

