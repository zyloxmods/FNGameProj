#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "ESchemaModificationType.h"
#include "FortMobileHUDWidgetSchemaSave.h"
#include "FortMobileSchemaModification.generated.h"

USTRUCT(BlueprintType)
struct FFortMobileSchemaModification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid Guid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESchemaModificationType ModificationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag OwningContextTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortMobileHUDWidgetSchemaSave ModifiedSchema;
    
    FORTNITEGAME_API FFortMobileSchemaModification();
};

