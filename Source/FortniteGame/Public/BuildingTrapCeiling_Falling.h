#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BuildingTrapCeiling.h"
#include "BuildingTrapCeiling_Falling.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class ABuildingTrapCeiling_Falling : public ABuildingTrapCeiling {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* VisibleMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> SpawnPoints;
    
    ABuildingTrapCeiling_Falling();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void TrapActivated(const float CooldownDuration);
    
};

