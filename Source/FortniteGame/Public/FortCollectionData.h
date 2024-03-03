#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortCollectionData.generated.h"

class UFortCollectionDataEntry;

UCLASS(Blueprintable, MinimalAPI)
class UFortCollectionData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFortCollectionDataEntry*> Entries;
    
public:
    UFortCollectionData();
};

