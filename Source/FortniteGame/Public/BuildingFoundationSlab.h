#pragma once
#include "CoreMinimal.h"
#include "BuildingFoundation.h"
#include "BuildingFoundationSlab.generated.h"

UCLASS(Blueprintable)
class ABuildingFoundationSlab : public ABuildingFoundation {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CreatorName;
    
public:
    ABuildingFoundationSlab();
};

