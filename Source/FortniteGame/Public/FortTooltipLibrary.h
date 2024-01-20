#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FortAttributeInfo.h"
#include "FortTooltipLibrary.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortTooltipLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFortTooltipLibrary();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static FText FormatAttributeBuffs(const FFortAttributeInfo& AttributeInfo, float AdditiveBuff, float MultiplicativeBuff);
    
};

