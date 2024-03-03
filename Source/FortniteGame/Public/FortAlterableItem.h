#pragma once
#include "CoreMinimal.h"
#include "FortAccountItem.h"
#include "FortAlterableItem.generated.h"

class UFortAlterationItemDefinition;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortAlterableItem : public UFortAccountItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> alterations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortAlterationItemDefinition*> AlterationInstances;
    
public:
    UFortAlterableItem();
};

