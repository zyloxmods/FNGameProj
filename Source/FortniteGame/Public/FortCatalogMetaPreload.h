#pragma once
#include "CoreMinimal.h"
#include "FortCatalogMetaPreload.generated.h"

class UFortAccountItemDefinition;
class UFortCardPackItemDefinition;

USTRUCT(BlueprintType)
struct FFortCatalogMetaPreload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UFortAccountItemDefinition>> ChaseItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortCardPackItemDefinition> PackDefinition;
    
    FORTNITEGAME_API FFortCatalogMetaPreload();
};

