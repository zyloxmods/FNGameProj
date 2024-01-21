#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortDecoItemDefinition.h"
#include "FortTrapItemDefinition.generated.h"

class USoundBase;

UCLASS(Blueprintable, MinimalAPI)
class UFortTrapItemDefinition : public UFortDecoItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator KnockbackDirOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKnockBackUsingPawnDir;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> EquipSound;
    
public:
    UFortTrapItemDefinition();
};

