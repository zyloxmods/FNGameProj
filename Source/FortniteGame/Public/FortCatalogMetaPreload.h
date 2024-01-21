#pragma once
#include "CoreMinimal.h"
#include "FortCatalogMetaPreload.generated.h"

class UFortAccountItemDefinition;
class UFortCardPackItemDefinition;

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortCatalogMetaPreload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UFortAccountItemDefinition>> ChaseItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortCardPackItemDefinition> PackDefinition;
    
    FFortCatalogMetaPreload();
};

