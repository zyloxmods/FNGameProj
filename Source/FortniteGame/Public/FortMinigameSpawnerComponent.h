#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LevelSaveSpawnable.h"
#include "MinigameSpawnerSpawnParams.h"
#include "FortMinigameSpawnerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortMinigameSpawnerComponent : public UActorComponent, public ILevelSaveSpawnable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FMinigameSpawnerSpawnParams> ToSpawnList;
    
public:
    UFortMinigameSpawnerComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    
    // Fix for true pure virtual functions not being implemented
};

