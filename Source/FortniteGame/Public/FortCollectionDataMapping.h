#pragma once
#include "CoreMinimal.h"
#include "FortCollectionDataMapping.generated.h"

class UFortCollectionData;

USTRUCT(BlueprintType)
struct FFortCollectionDataMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CollectionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortCollectionData> Collection;
    
    FORTNITEGAME_API FFortCollectionDataMapping();
};

