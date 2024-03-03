#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ItemsForEventData.h"
#include "FortItemsForEventMapping.generated.h"

UCLASS(Blueprintable)
class UFortItemsForEventMapping : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemsForEventData> ItemsForEventArray;
    
public:
    UFortItemsForEventMapping();
};

