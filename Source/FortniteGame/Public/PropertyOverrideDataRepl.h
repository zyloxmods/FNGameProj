#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "PropertyOverrideRepl.h"
#include "PropertyOverrideReplNotifierDelegate.h"
#include "PropertyOverrideDataRepl.generated.h"

USTRUCT(BlueprintType)
struct FPropertyOverrideDataRepl : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPropertyOverrideReplNotifier ReplNotifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPropertyOverrideRepl> PropertyOverridesRepl;
    
    FORTNITEGAME_API FPropertyOverrideDataRepl();
};

