#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortCollectionDataMapping.h"
#include "FortCollectionsDataTable.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UFortCollectionsDataTable : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortCollectionDataMapping> Collections;
    
public:
    UFortCollectionsDataTable();
};

