#pragma once
#include "CoreMinimal.h"
#include "FortPersistentResourceItemDefinition.h"
#include "FortEventCurrencyItemDefinitionRedir.generated.h"

class UFortItemDefinition;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortEventCurrencyItemDefinitionRedir : public UFortPersistentResourceItemDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItemDefinition* CurrentCurrencyItem;
    
public:
    UFortEventCurrencyItemDefinitionRedir(const FObjectInitializer& ObjectInitializer);
};

