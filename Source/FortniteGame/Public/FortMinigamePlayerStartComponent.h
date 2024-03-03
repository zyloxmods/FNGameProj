#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortMinigameLogicComponent.h"
#include "FortMinigamePlayerStartComponent.generated.h"

class AFortPlayerStartCreative;
class APlayerState;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortMinigamePlayerStartComponent : public UFortMinigameLogicComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsCheckpoint: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerStartCreative*> PlayerStarts;
    
    UFortMinigamePlayerStartComponent();
    UFUNCTION(BlueprintCallable)
    void StorePlayerCheckpoint(APlayerState* Player);
    
    UFUNCTION(BlueprintCallable)
    void ResetCheckpoints();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyCheckpointValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPlayerCheckpointLastUsedTime(APlayerState* Player, FDateTime& OutTime) const;
    
};

