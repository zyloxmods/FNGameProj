#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BuildingFoundation.h"
#include "BuildingFoundationSlab.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class ABuildingFoundationSlab : public ABuildingFoundation {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CreatorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MapLocationTag;
    
public:
    ABuildingFoundationSlab();
};

