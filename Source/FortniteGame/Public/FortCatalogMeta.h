#pragma once
#include "CoreMinimal.h"
#include "FortCatalogMeta.generated.h"

class UFortAccountItemDefinition;
class UFortCardPackItemDefinition;

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortCatalogMeta {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortAccountItemDefinition*> ChaseItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortCardPackItemDefinition* PackDefinition;
    
    FFortCatalogMeta();
};

