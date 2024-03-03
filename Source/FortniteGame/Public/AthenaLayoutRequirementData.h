#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Templates/SubclassOf.h"
#include "AthenaLayoutRequirementData.generated.h"

class ABuildingLayoutRequirement;
class ABuildingSMActor;

UCLASS(Blueprintable)
class UAthenaLayoutRequirementData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABuildingLayoutRequirement> BuildingClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ABuildingSMActor>> LayoutRequirementClasses;
    
    UAthenaLayoutRequirementData();
    UFUNCTION(BlueprintCallable)
    ABuildingLayoutRequirement* SpawnMatchingLayoutRequirement(ABuildingSMActor* SourceActor, bool bMatchResourceType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FindMatchingLayoutRequirementClass(ABuildingSMActor* BuildingActor, TSubclassOf<ABuildingSMActor>& MatchingClass) const;
    
};

