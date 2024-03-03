#pragma once
#include "CoreMinimal.h"
#include "FortPartyMember.h"
#include "FortLocalPartyMember.generated.h"

UCLASS(Blueprintable, NonTransient, DefaultConfig, Config=Engine)
class FORTNITEGAME_API UFortLocalPartyMember : public UFortPartyMember {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NumAthenaPlayersLeftDeltaThreshold;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AthenaPlayersLeftUpdateDelay;
    
public:
    UFortLocalPartyMember();
private:
    UFUNCTION(BlueprintCallable)
    void HandlePlayerControllerSet();
    
    UFUNCTION(BlueprintCallable)
    void HandleNumAthenaPlayersLeftChanged(int32 NumPlayersLeft);
    
    UFUNCTION(BlueprintCallable)
    void HandleMcpProfilesInitialized();
    
};

