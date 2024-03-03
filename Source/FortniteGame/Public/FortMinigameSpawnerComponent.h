#pragma once
#include "CoreMinimal.h"
#include "FortMinigameItemContainerComponent.h"
#include "MinigameSpawnerSpawnParams.h"
#include "FortMinigameSpawnerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortMinigameSpawnerComponent : public UFortMinigameItemContainerComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_ToSpawnList, meta=(AllowPrivateAccess=true))
    TArray<FMinigameSpawnerSpawnParams> ToSpawnList;
    
public:
    UFortMinigameSpawnerComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ToSpawnList();
    
};

