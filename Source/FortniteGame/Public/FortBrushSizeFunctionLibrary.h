#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EFortBrushSize.h"
#include "FortBrushSizeFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class UFortBrushSizeFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFortBrushSizeFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TEnumAsByte<EFortBrushSize::Type> ShrinkBrushSize(const TEnumAsByte<EFortBrushSize::Type> OriginalBrushSize, const int32 Steps);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TEnumAsByte<EFortBrushSize::Type> GrowBrushSize(const TEnumAsByte<EFortBrushSize::Type> OriginalBrushSize, const int32 Steps);
    
};

