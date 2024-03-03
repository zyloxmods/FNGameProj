#pragma once
#include "CoreMinimal.h"
#include "FortPlayerCustomizable.h"
#include "FortPropertyOverrideProvider.h"
#include "FortWorldItem.h"
#include "FortCreativeWorldItem.generated.h"

UCLASS(Blueprintable)
class UFortCreativeWorldItem : public UFortWorldItem, public IFortPlayerCustomizable, public IFortPropertyOverrideProvider {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MaxRegenStacks;
    
public:
    UFortCreativeWorldItem();
    
    // Fix for true pure virtual functions not being implemented
};

