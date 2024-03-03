#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "AthenaRemoteSquadViewData.generated.h"

class UAthenaRemotePlayerViewData;
class UAthenaRemoteSquadViewData;
class UFortMinigameTeamIdentification;

UCLASS(Blueprintable)
class UAthenaRemoteSquadViewData : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUInt8Delegate, UAthenaRemoteSquadViewData*, SquadData, uint8, IntParam);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerDelegate, UAthenaRemoteSquadViewData*, SquadData, UAthenaRemotePlayerViewData*, PlayerData);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLinearColorDelegate, UAthenaRemoteSquadViewData*, SquadData, FLinearColor, ColorParam);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIntDelegate, UAthenaRemoteSquadViewData*, SquadData, int32, IntParam);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEventDelegate, UAthenaRemoteSquadViewData*, SquadData);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerDelegate OnPlayerAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUInt8Delegate OnSquadIdChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntDelegate OnSquadKillscoreChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntDelegate OnSquadPlaceChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColorDelegate OnSquadColorChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventDelegate OnSquadEliminated;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAthenaRemotePlayerViewData*> PlayerDataArray;
    
public:
    UAthenaRemoteSquadViewData();
private:
    UFUNCTION(BlueprintCallable)
    void HandlePlayerPlaceChanged(UAthenaRemotePlayerViewData* InPlayerData, int32 InPlace);
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerKillscoreChanged(UAthenaRemotePlayerViewData* InPlayerData, int32 InKillScore);
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerDeadStateChanged(UAthenaRemotePlayerViewData* InPlayerData, bool InEliminated);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSquadID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetSquadColor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UAthenaRemotePlayerViewData*> GetPlayerDatas() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlace() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortMinigameTeamIdentification* GetMinigameTeamId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetKillScore() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsEliminated() const;
    
};

