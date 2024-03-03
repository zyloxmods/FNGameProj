#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EFortAILODLevel.h"
#include "FortAthenaAILODComponent.generated.h"

class AFortPawn;
class UFortAthenaAILODSettingsContainer;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class UFortAthenaAILODComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentFortAILODLevel, meta=(AllowPrivateAccess=true))
    EFortAILODLevel CurrentFortAILODLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bCouldBeVisibleToPlayers: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPawn* CachedFortPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAthenaAILODSettingsContainer* AILODSettingsContainer;
    
public:
    UFortAthenaAILODComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentFortAILODLevel();
    
};

