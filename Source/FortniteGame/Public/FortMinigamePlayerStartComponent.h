#pragma once
#include "CoreMinimal.h"
#include "FortMinigameLogicComponent.h"
#include "FortMinigamePlayerStartComponent.generated.h"

class AFortPlayerStartCreative;
class APlayerState;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortMinigamePlayerStartComponent : public UFortMinigameLogicComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerStartCreative* PlayerStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsCheckpoint: 1;
    
    UFortMinigamePlayerStartComponent();
    UFUNCTION(BlueprintCallable)
    void SetPlayerCheckpoint(APlayerState* Player, float Value);
    
    UFUNCTION(BlueprintCallable)
    void ResetCheckpoints();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPlayerCheckpointValue(APlayerState* Player, float& OutValue) const;
    
};

