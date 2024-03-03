#pragma once
#include "CoreMinimal.h"
#include "FortMobileSchemaModification.h"
#include "FortMobileSchemaModificationContainer.generated.h"

USTRUCT(BlueprintType)
struct FFortMobileSchemaModificationContainer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortMobileSchemaModification> Modifications;
    
public:
    FORTNITEGAME_API FFortMobileSchemaModificationContainer();
};

